#include<bits/stdc++.h>
using namespace std;

int main(){

    string cd;

    while(getline(cin, cd)){

    string ans;

    char sp;

    bool chk = 0;

    cd.pop_back();

    for(auto x : cd){

        if(!isalpha(x) && x != ' ' && x != ',' && x != '.' && x != '-' && x != '\''){

            sp = x;

        }

        if(x == sp && chk == 0){

            chk = 1;

            continue;

        }else if(x == sp && chk == 1){

            chk = 0;

        }

        if(chk)ans+=x;

    }

    cout << ans << "\n";

    }



    return 0;
}