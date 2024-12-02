#include<bits/stdc++.h>
using namespace std;

queue<string> q[5000];

unordered_map<string,int> ump;

int main(){

    string nm,knd;

    int cnt = 0;

    while(cin >> nm >> knd){

        if(nm == "end" && knd == "end")break;

        if(ump.find(knd) != ump.end()){

            q[ump[knd]].push(nm); 
            
        }else{

            q[0].push(knd);

            cnt++;
            
            q[cnt].push(nm);

            ump[knd] = cnt;
            
        }

    }

    for(int i = 1;i<=ump.size();i++){

        cout << q[0].front() << ':'; q[0].pop();

        while(!q[i].empty()){

            cout << ' ' <<  q[i].front();   

            q[i].pop();         

        }

        cout << '\n';

    }

    return 0;
}