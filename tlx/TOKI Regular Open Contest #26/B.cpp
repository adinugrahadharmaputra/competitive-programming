#include <bits/stdc++.h>
#define ll long long
using namespace std;


struct cord{
    int i;
    int j;
};

int main(){
    int n,m,x;
    cord ij;
    vector <vector <int>> a;
    cin >> n >> m;

    for (int i = 0; i<n;i++){
        vector <int> b;
        for (int j = 0 ; j< m ; j++){
            cin >> x;
            if (x == -1){
                ij.i = i;
                ij.j = j;
            }
            b.push_back(x);
        }
        a.push_back(b);
    }
    ll s =0;

    for (int i = 0; i<n;i++){
        for (int j = 0 ; j< m ; j++){
            int jarak;
            if (a[i][j] == -1){
                continue;
            }
            jarak = (ij.i-i) + (ij.j-j);
            if (jarak %2 == 0){
                s+=a[i][j];
                
            }else {
                s -= a[i][j];
            }
        }
    }
    if (s <=0){
        cout << "YES"<<endl;
        cout << -s;
    }else {
        cout << "NO";
    }

    return 0 ;
}