#include <iostream>

int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { -1, 0, 1, 0 };

int main() {
    int n, t, r, c, d, x, y;
    char cd;
    scanf("%d %d", &n, &t);
    scanf("%d %d %c", &r, &c, &cd);
    x = c;
    y = r;
    d = cd == 'U' ? 0 : cd == 'R' ? 1 : cd == 'D' ? 2 : 3;
    for(int i = 0; i < t; i++) {
        if(x + dx[d] < 1 || y + dy[d] < 1 || x + dx[d] > n || y + dy[d] > n) {
            d = d + 2 > 3 ? d - 2 : d + 2;
        }
        else {
            x += dx[d];
            y += dy[d];
        }
    }
    printf("%d %d", y, x);
    return 0;
}