
#include <bits/stdc++.h>
 
using namespace std;
 
struct container{
    int box;
    int match;
};
 
void inpContainer(int m,vector<container>&c){
    container matchContainer;
    for (int i = 0; i<m ; i++){
        cin >> matchContainer.box >> matchContainer.match;
        c.push_back(matchContainer);
    }
}
 
void printCon(vector<container>c){
    for (auto it = c.begin(); it!=c.end();it++) {
       cout <<it->box <<" "<< it->match<<endl;
 
    }   
 
}
 
int res(vector<container>c, int n){
    int i = 0;
    int res=0;
    while(i < c.size()){
        if (c[i].box < n){
            res += c[i].box * c[i].match;
            n -=c[i].box;

            i++;
        } else{
            res += n * c[i].match;
            n -= n;
            return res;
        }
    }
    return res;
    
}
 
 
bool sortfun(container x, container y) { 
    return x.match > y.match; 
} 
 
int main (){
    int m,n;
    vector <container> c;
    cin >> n >> m;
    inpContainer(m,c);
    sort(c.begin(),c.end(),sortfun);
    cout<< res(c,n);
    
    
    return 0;
}