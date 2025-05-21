#include <iostream>

using namespace std;

int SumN(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++)
        sum += i;

    return sum / 10;
}

int main() {
    // 변수 선언 및 입력:
    int n;
    cin >> n;

    cout << SumN(n);
    return 0;
}
