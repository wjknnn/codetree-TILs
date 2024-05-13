#include <iostream>

int switches[101];

int main() {
    int n, m, i, type, value;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) scanf("%d", &switches[i]);
    scanf("%d", &m);
    for(i = 0; i < m; i++) {
        scanf("%d %d", &type, &value);
        if(type == 1) {
            for(int j = 1; j * value <= n; j++) {
                switches[j * value] = !switches[j * value];
            }
        }
        else {
            int left = value, right = value;
            switches[value] = !switches[value];
            for(int j = 1; j <= n; j++) {
                if(left - 1 < 1 || right + 1 > n) break;
                left--;
                right++;
                if(switches[left] == switches[right]) {
                    switches[left] = !switches[left];
                    switches[right] = !switches[right];
                }
                else break;
            }
        }
    }
    for(i = 1; i <= n; i++) printf("%d ", switches[i]);
    return 0;
}