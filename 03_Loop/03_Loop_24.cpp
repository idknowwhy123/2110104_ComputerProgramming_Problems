#include<bits/stdc++.h>
using namespace std;

int main(){

    string str,ans = "";

    int cnt = 1;

    getline(cin, str);

    ans += str[0];

    for(int i=1;i<str.size();i++){

        if(str[i] != str[i-1]){

            cout << ans << " " << cnt << " ";

            ans = "";

            cnt = 0;

        }

        if(ans.empty())ans+=str[i];

        cnt++;

    }

    if(!ans.empty())cout << ans << " " << cnt;


    return 0;
}