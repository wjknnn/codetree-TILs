#include <iostream>

#define MAX_N 1000000

using namespace std;

int n;
int customers[MAX_N];
int leader_capacity, member_capacity;

int RequiredMemberNum(int customer_num) {
    // 남은 고객이 없다면 검사 팀원은 필요가 없습니다.
    if(customer_num <= 0)
        return 0;
    
    // 정확히 나누어 떨어지는 경우라면, 몫 만큼의 인원이 필요합니다.
    if(customer_num % member_capacity == 0)
        return customer_num / member_capacity;
    // 나누어 떨어지지 않는 경우라면 1명이 추가적으로 더 필요합니다.
    else
        return (customer_num / member_capacity) + 1;
}

int main() {
    // cin / cout은 scanf / printf에 비해 속도가 느리므로, 
    // 입력받아야 할 개수가 많은 경우 다음 코드를 작성해줘야 합니다.
    std::ios_base::sync_with_stdio(false); 
    std::cin.tie(nullptr); std::cout.tie(nullptr);

    // 입력:
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> customers[i];
    cin >> leader_capacity >> member_capacity;
    
    // 가게당 최대 백만명의 검사자가 필요할 수 있으므로,
    // 가능한 최대 답은 10^12 이므로 long long이 필요합니다.
    long long ans = 0;
    
    // 식당별로 필요한 최소 검사자 수를 검색합니다.
    for(int i = 0; i < n; i++) {
        // 팀장은 꼭 한 명 필요합니다.
        ans++;
        
        // 필요한 팀원 인원수만큼 더합니다.
        ans += RequiredMemberNum(customers[i] - leader_capacity);
    }

    // 출력:
    cout << ans;
    
    return 0;
}