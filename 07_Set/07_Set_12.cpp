#include<bits/stdc++.h>
using namespace std;

set<string> st;

int main(){

    int cnt = 0;

    bool chk = 0;

    string n;
    
    while(cin >> n){

        if(st.find(n) != st.end()){

            chk = 1;

            cnt++;

            break;

        }

        cnt++;

        st.insert(n);

    }

    if(chk)cout << cnt;
    else cout << -1;



    return 0;
}