#include<bits/stdc++.h>
using namespace std;

unordered_map<string,string> ump;

int main(){

    int n,m;

    cin >> n;

    for(int i=0;i<n;i++){

        string name,nickname;

        cin >> name >> nickname;

        ump[name] = nickname;

        ump[nickname] = name;

    }

    cin >> m;

    for(int i=0;i<m;i++){

        string nm;

        cin >> nm;

        if(ump.find(nm) != ump.end())cout << ump[nm] << '\n';
        
        else cout << "Not found\n";

    }


    return 0;
}