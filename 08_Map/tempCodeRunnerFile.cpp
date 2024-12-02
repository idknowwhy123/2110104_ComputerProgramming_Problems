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

    /*cmd += ',';

    for(int i=0;i<cmd.size();i++){

        if(cmd[i] == ','){

            cout << nm << ' ';

            for(auto x : ump[nm]){

                cout << x << ' ';

            }

            cout << '\n';

            nm = "";

            continue;

        }

        nm += cmd[i];

    }*/

    for(auto x : ump){

        //cout << x.first << ' ';

        for(auto y : ump[x.first]){

            cout << y << '\n';

        }

        cout << '\n';

    }

    

    return 0;
}