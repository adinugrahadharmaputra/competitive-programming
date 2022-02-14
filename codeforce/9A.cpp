#include <bits/stdc++.h>

std::string dieR(int y, int w){
    int x,g,a,b;
    std::string hasil;
    if (y==0 && w == 0){
        return "0/1";
    }
    x = 6 - (std::max(y,w)-1);
    g = std::__gcd(x,6);
    a = x/g;
    b = 6/g;
    return std::to_string(a)+"/"+std::to_string(b);
    
}

int main(){
    int y,w;
    std::cin >> y>>w;
    std::cout << dieR(y,w);
    return 0;
}