#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if (n == 1){
        return false;
    }
    for (int i = 2; i*i<=n;i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

bool almstPrime(int n){
    int divisor = 0;
    for(int i = 2; i<n ; i ++){
        if (n%i == 0){
            if(isPrime(i)){
                divisor +=1;
                if (divisor > 2){
                    return false;
                }
            }
        }
        
    }
    if(divisor != 2){
        return false;
    }
    return true;
}

int countAlmstPrime(int n){
    int res=0;
    for (int i = 6 ; i <= n; i++ ){
        if(almstPrime(i)){
            res+=1;
        }
    }
    cout << endl;
    return res;
}
int main(){
    int n;
    cin>>n;
    cout << countAlmstPrime(n);
    return 0;
}