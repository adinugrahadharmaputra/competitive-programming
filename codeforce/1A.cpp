#include <bits/stdc++.h>
using namespace std;

long long square(long long n,long long m,long long a){
    return ((m+a-1)/a)*((n+a-1)/a);
}

int main(){
    long long n,m,a;
    cin >>n>>m>>a;
    cout << square(n,m,a);
    return 0;
}
