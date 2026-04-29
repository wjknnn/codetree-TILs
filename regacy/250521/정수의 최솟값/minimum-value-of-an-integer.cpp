#include <iostream>

using namespace std;

// 최솟값을 반환하는 함수를 작성합니다.
int Min(int a, int b, int c) {
    int min_val = a;
    if(min_val > b)
        min_val = b;
    if(min_val > c)
        min_val = c;
    
    return min_val;
}

int main() {
    // 변수 선언 및 입력:
    int a, b, c;
    cin >> a >> b >> c;

    cout << Min(a, b, c);
    return 0;
}
