#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define PB push_back
#define fi first
#define se second
#define all(v) (v).begin(), (v).end()
#define For(i,j,k) for (int i=(int)(j);i<=(int)(k);i++)
#define Rep(i,j,k) for (int i=(int)(j);i>=(int)(k);i--)
#define debug1 puts("--@111%--")
#define debug2 puts("--@222%--")
#define debug3 puts("--@333%--")
#define y1 ysgjowiaef
using namespace std;

#define INF 2123456789

int n, m;
int g;

int main() {
    cin >> n >> m;
    For(i, 1, n) {
        if(n % i == 0 && m % i == 0) g = i;
    }

    cout << n * m / g;
}