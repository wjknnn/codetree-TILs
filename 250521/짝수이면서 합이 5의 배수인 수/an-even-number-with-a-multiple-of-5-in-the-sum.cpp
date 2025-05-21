#include <iostream>

using namespace std;

bool IsMagicNumber(int n) {
    return n % 2 == 0 && (n / 10 + (n % 10)) % 5 == 0;
}

int main() {
    // 변수 선언 및 입력:
    int n;
    cin >> n;

    if(IsMagicNumber(n))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
