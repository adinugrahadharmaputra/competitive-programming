#include <bits/stdc++.h>
#define ll long long
#define ld long double
const int MOD = 1e9;
using namespace std;

void solve(){
    ld n,m,a; cin >> n >> m >> a;
    ll width, height; 

    width = ceil(n / a) ; 
    height = ceil(m / a) ; 

    cout << width * height;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   