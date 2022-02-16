#include <bits/stdc++.h>
#define ll long long
#define ld long double
const int MOD = 1e9;
using namespace std;

void solve(){
    int n;
    string s;

    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> s;
        int lenS = s.size();
        if (lenS > 10) {
            cout << s[0] << lenS-2 << s[lenS-1] << "\n";
        } else cout << s << "\n";
    }

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   