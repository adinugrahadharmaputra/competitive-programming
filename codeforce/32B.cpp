#include <bits/stdc++.h>

using namespace std;

void  borze(string s){
    string res;
    int i = 0;
    while(i < s.size()){
        if (s[i] == '.'){
            cout << 0;
            i++;
        }else if(s[i] == '-'){
            if (s[i+1] == '.'){
                cout<<1;
                i+=2;
            } else{
                cout <<2;
                i+=2;
            }
        }

    }    
}
int main (){
    string s;
    cin >>s;
    borze(s);


    return 0;
}