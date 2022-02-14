#include <bits/stdc++.h>

using namespace std;

int recon(int a[],int d, int size){
    int n = 0;
    int temp1, temp2;
    for (int i = 0; i < size-1; i++){
        for (int j = i+1; j < size;j++){
            temp1 = a[i];
            temp2 = a[j];
            if (max(temp1, temp2) - min(temp1, temp2) <= d ){
                n+=1;
            }
        }
    }
    return n*2; 
}

int main(){
    int n,d;
    cin >> n >>d;
    int a[n];
    for (int i = 0; i <n ; i++){
        cin >>a[i]; 
    }
    cout << recon(a,d,n);
    return 0;
}