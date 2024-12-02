#include<bits/stdc++.h>
using namespace std;

unordered_map<string,vector<string>> ump;

int main(){

    int n;

    cin >> n;

    cin.ignore();

    for(int i=0;i<n;i++){

        string all,tmp = "",song;

        getline(cin,all);

        for(int i = 0;i<all.size();i++){

            if(all[i] == ','){

                song = tmp;

                tmp = "";

                i++;

                continue;   

            }

            tmp += all[i];

        }

        ump[song].push_back(tmp);
        
    }

    string cmd,nm;

    getline(cin, cmd);

    cmd += ',';

    bool chk = 0;

    for(int i=0;i<cmd.size();i++){

        if(cmd[i] == ' ' && cmd[i-1] == ',')continue;

        if(cmd[i] == ','){

            cout << nm << " ->";

            if(ump.find(nm) != ump.end()){

                for(auto x : ump[nm]){
                    
                    if(chk)cout << ',';

                    cout << ' ' << x;

                    chk = 1;

                }

            }else{

                cout << " Not found";

            }

            cout << '\n';

            nm = "";

            continue;

        }

        nm += cmd[i];

        chk = 0;

    }

    /*for(auto x : ump){

        cout << x.first << ' ';

        for(auto y : ump[x.first]){

            cout << y << '\n';

        }

        cout << '\n';

    }*/

    return 0;
}