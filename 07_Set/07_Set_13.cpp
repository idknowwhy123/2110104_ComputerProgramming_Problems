#include<bits/stdc++.h>
using namespace std;

std::set<string> s1;

std::set<string> s2;

int main(){

    string wn,lse;

    while(cin >> wn >> lse){
        
        //if(wn == "-1")break;

        s1.insert(wn);

        s2.insert(lse);
        
    }

    bool chk = 0;

    for(auto x : s1){

        if(s2.find(x) == s2.end()){

            cout << x << ' ';

            chk = 1;

        }
    }

    if(!chk)cout << "None";

    return 0;
}