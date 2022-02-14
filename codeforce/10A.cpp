#include <bits/stdc++.h>
using namespace std;

struct times{
    int s;
    int e;
};

int main(){
    int n;
    int p1,p2,p3,t1,t2;
    int tp1, tp2, tp3;
    //temporary time
    times temp;

    //temporary time start
    temp.s = 0;
    //temporary time start
    temp.e = 0;

    // total power
    int power = 0;

    // input time starts and end
    times t;

    //input n, power1, power2, power3, time1, time2.
    cin >> n >>p1>>p2>>p3>>t1>>t2;

    // loop n time and take input time starts and ends
    for (int i = 0 ; i<n; i++){
        cin >> t.s;
        cin >> t.e;


        if (temp.e != 0){
            //if temp is not zero we need to d time before the power change to saving mode
            //tp1 is time difference between the last time user touch a key and the first time user touch key again.
            tp1 = t.s-temp.e;

            if (tp1 > t1){
                power += t1*p1;

                //tp2 is time difference when it start the saving mode and the time remain before it stars to normal mode again
                tp2 = tp1 - t1;
                if (tp2 > t2){
                    power +=t2*p2;
                    power += (tp2-t2)*p3;
                }else {
                    power += tp2*p2;
                }
            }else{
                power += tp1*p1;

            }
        }
        power += (t.e-t.s) *p1;
        temp = t;
        
    }
    cout << power<<endl;


    return 0;
}