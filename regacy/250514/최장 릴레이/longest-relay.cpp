#include <iostream>

#define MAX_N 15
#define MAX_K 20

using namespace std;

// 변수 선언
int n;
int a[MAX_N][MAX_N];

// dp[i][j][k] : 
// 1번을 시작으로 겹치지 않게 방문한 위치를
// x1, x2, ..., xk라 헀을 때 
// 2^x1 + 2^x2 + ... + 2^xk 값이 i이고 (bitmask된 정수값이 i)
// 그래서 현재 서 있는 위치가 j가 되었을 때
// 마지막 릴레이의 값이 k일 때
// 가능한지 여부 (구현의 편의를 위해 릴레이에 참여한 사람 수를 저장했습니다)
int dp[1 << MAX_N][MAX_N][MAX_K + 1];

int main() {
    // 입력:
    cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    
    // 불가능한 상황을 정의하기 위해
    // 초기값으로 -1을 넣어줍니다.
    for(int i = 0; i < (1 << n); i++)
        for(int j = 0; j < n; j++)
            for(int k = 0; k <= MAX_K; k++)
                dp[i][j][k] = -1;

    // 초기조건은
    // 0번 지점을 시작으로 하며 현재 0번 위치에 서있고
    // 릴레이의 초깃값이 0인 상태인
    // dp[1][0][0] = 1이 됩니다.
    dp[1][0][0] = 1;

    int ans = 1;

    // 뿌려주는 방식의 dp를 진행합니다.
    // dp[i][j][k]가 계산이 되어있다는 가정하에서
    // 그 다음 상태값을 갱신합니다.
    for(int i = 0; i < (1 << n); i++) {
        for(int j = 0; j < n; j++) {
            // j번 지점을 방문한게 정의상 불가능 하다면
            // 패스합니다.
            if(((i >> j) & 1) == 0)
                continue;

            for(int k = 0; k <= MAX_K; k++) {
                // 직전 값이 k인게 정의상 불가능 하다면
                // 패스합니다.
                if(dp[i][j][k] == -1)
                    continue;

                // 릴레이에 참여할 수 있는 최대 사람 수를 계속 갱신합니다.
                ans = max(ans, dp[i][j][k]);

                // 현재 j번에서 그 다음 위치로 x번 지점을 가게 되는 경우
                // 상태값을 계산하여 최솟값을 갱신해줍니다.
                for(int x = 0; x < n; x++) {
                    // x번 지점을 이미 방문한 적이 있다면
                    // 중복 방문은 조건상 불가하므로 패스합니다.
                    if(((i >> x) & 1) == 1)
                        continue;
                    
                    // j번에서 x번으로의 릴레이가 k 보다 작거나 같으면
                    // 패스합니다.
                    if(a[j][x] <= k)
                        continue;
                    
                    dp[i + (1 << x)][x][a[j][x]] = max(
                        dp[i + (1 << x)][x][a[j][x]], dp[i][j][k] + 1
                    );
                }
            }
        }
    }

    // 릴레이에 참여할 수 있는 최대 사람 수를 출력합니다.
    cout << ans;
    return 0;
}
