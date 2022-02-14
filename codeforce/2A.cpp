#include <bits/stdc++.h>
using namespace std;
 
struct player {
    string name;
    int score;
};
 
 
 
int main(){
    int n;
    string name;
    int score;
    player pemain,win;
    vector <player> LP;
    int total;
    bool found;
    player tempM;
    tempM.score=0;
    cin >>n;
 
    for (int i = 0; i < n ; i++){
        cin >> name;
        cin >> score;
        pemain.name = name;
        pemain.score = score;
        found = false;
        for (vector<player> :: iterator j=LP.begin(); j != LP.end();++j){
            if (j->name == name){
                j->score += pemain.score;
                found = true;
                if (tempM.score <j->score){
                    tempM = *j;
                }else if (tempM.score> j->score){
                    tempM.score = 0;
                    tempM.name = "";
 
                }
                break;
            }
        }
        if (found == false){
            LP.push_back(pemain);
            if (tempM.score <pemain.score){
                tempM = pemain;
            }
        }
        
    }
    player winner;
    winner.score = 0;
    for (vector<player> :: iterator j=LP.begin(); j != LP.end();++j){
        if (winner.score < j->score){
            winner = *j;
            break;
        }
    }
 
    if (winner.score == tempM.score){
        winner = tempM;
    }


    cout<< winner.name;
    return 0;
}