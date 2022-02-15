#include <bits/stdc++.h>
#define ll long long
#define ld long double
const int MOD = 1e9;
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    int arr[n];

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    if (arr[1] == 0) cout << 0; 
    else if (arr[1] == arr[n]) cout << n; // first != 0, last != 0 
    else {
        int cnt = 0;
        if (arr[k] == 0) {
            for (int i = 1; i <= n; i++) {
                if (arr[i] > 0) cnt++; 
                if (arr[i] == 0) break;
            }
        } else {
            for (int i = 1; i <= n; i++) {
                if (arr[i] >= arr[k]) cnt++; 
                if (arr[i] < arr[k]) break;
            }
        }
        cout << cnt;
    }


}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   