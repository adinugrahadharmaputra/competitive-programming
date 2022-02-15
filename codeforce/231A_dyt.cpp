#include <bits/stdc++.h>
#define ll long long
#define ld long double
const int MOD = 1e9;
using namespace std;

void solve(){
    int n; 
    int p,v,t,cnt = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> p >> v >> t;
        if (p+v+t >= 2)  cnt++;
    }
    cout << cnt;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   