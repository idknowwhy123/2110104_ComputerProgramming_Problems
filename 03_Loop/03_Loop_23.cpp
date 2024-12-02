#include<bits/stdc++.h>
using namespace std;

int main(){

    string s,sa,tmp1 = "";

    char tmp;

    int k,cnt = 0,ans = 0;

    cin >> s >> k;

    tmp = s[0];

    for(int i=0;i<=s.size();i++){

        if(s[i] != tmp){

            //cout << cnt << " " << tmp1 << "\n";

            if(cnt < k){

                sa += tmp1;

            }

            tmp1 = "";

            cnt = 0;

        }

        tmp = s[i];

        if(tmp == s[i]){

            tmp1 += s[i];

            cnt++;

        }

    }

    cout << sa;

    //cnt = 0;
    

    return 0;
}