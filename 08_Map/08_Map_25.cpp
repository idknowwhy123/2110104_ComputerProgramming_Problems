#include<bits/stdc++.h>
using namespace std;

unordered_map<string,vector<string>> ump;

unordered_map<string,bool> mp;

queue<string> q;

int main(){

    int n;

    bool chk = 0;

    cin >> n;

    for(int i=0;i<n;i++){

        string id,city;

        cin >> id;

        q.push(id);

        while(cin >> city){

            if(city == "*")break;

            ump[id].push_back(city);

            ump[city].push_back(id);

        }

    }

    string key;

    cin >> key;

    for(auto x : ump[key]){

        for(auto y : ump[x]){

            mp[y] = 1;

        }

    }

    while(!q.empty()){

        string indx = q.front();q.pop();

        if(mp[indx] == 1 && indx != key){

            cout << ">> " << indx << '\n';

            chk = 1;

        }

    }

    if(!chk)cout << ">> Not Found";

    return 0;
}