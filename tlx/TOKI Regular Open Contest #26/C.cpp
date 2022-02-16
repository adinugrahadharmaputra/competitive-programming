#include <bits/stdc++.h>

using namespace std;


int main(){
    int n; 
    int s;
    vector <int> a; 
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> s;
        a.push_back(s);
    }
    s = 0;
    for (int i =0 ;i < n ; i++){
        s +=a[i];
    }
    for (int i =0 ;i < n ; i++){
        if (a[i]>s/2 && i != n-1){
            cout << "NO";
            return 0;
        }else if (i == n-1 && a[i]>(s+1)/2){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";


    return 0;
}