#include<bits/stdc++.h>
using namespace std;

vector<int> v[10000000];

bool DFS(int st,int en){

    stack<int> stk;

    vector<bool> chk(10000000, false);

    stk.push(st);

    while(!stk.empty()){

        int tmp = stk.top();stk.pop();

        //cout << tmp << "\n";

        if(chk[tmp])continue;

        //cout << "1\n";

        chk[tmp] = 1;

        for(auto x : v[tmp]){

            stk.push(x);

        }

    }

    if(chk[en] == 1)return 1;
    else return 0;

}

int main(){

    int n,m,k;

    scanf("%d %d %d",&n,&m,&k);

    for(int i=0;i<n;i++){

        int st,en;

        scanf("%d %d",&st,&en);

        v[st].push_back(en);

    }

    bool ans = DFS(m,k);

    if(ans == 1)cout << "yes";
    else cout << "no";

    return 0;
}