#include<bits/stdc++.h>
using namespace std;

int main(){

    string s1,s2,s3 = "";

    int ans = 0;

    getline(cin, s1);

    getline(cin, s2);

    int n = s1.size();

    bool chk = 0;

    for(auto x : s2){

        if(!isalpha(x))continue;

        else{

            s3+=x;

        }

        if(s3 == s1){

            ans++;

            s3 = "";

        }else{

            s3 = "";

        }

    }

    cout << ans;

    return 0;
}