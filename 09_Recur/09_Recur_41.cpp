#include<bits/stdc++.h>
using namespace std;

vector<int> v[100000];

vector<int> res;

bool c = 0;

void DFS(int st, int en, vector<bool>& chk){

    if(chk[st]) return;  

    res.push_back(st);

    chk[st] = true;

    if (st == en) { 

        c = 1;
        
        for (int i = 0; i < res.size(); ++i) {

            cout << res[i];

            if (i != res.size() - 1) cout << " -> ";
        }

        cout << '\n';

    } else {

        sort(v[st].begin(), v[st].end());
        
        for(auto x : v[st]) {
            
            if(!chk[x])DFS(x, en,chk);

        }
    }

    res.pop_back();  

    chk[st] = false; 
}

int main(){
    int n, m, k;
    
    scanf("%d %d %d", &n, &m, &k);

    for (int i = 0; i < n; i++) {

        int st, en;

        scanf("%d %d", &st, &en);

        if(find(v[st].begin(),v[st].end(),en) != v[st].end())continue;

        v[st].push_back(en); 
    }

    vector<bool> chk(100000, false);

    DFS(m, k, chk);

    if(!c)cout << "no";

    return 0;
}
