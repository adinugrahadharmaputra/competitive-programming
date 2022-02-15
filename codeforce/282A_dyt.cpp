#include <bits/stdc++.h>
#define ll long long
#define ld long double
const int MOD = 1e9;
using namespace std;

void solve(){
    string s;
    int n, cnt = 0;
    int dec, inc;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s;
        dec = s.find('-');
        inc = s.find('+');

        if (dec != -1) cnt--;
        if (inc != -1) cnt++;
    }

    cout << cnt;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   