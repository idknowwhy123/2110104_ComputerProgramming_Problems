#include<bits/stdc++.h>
using namespace std;

int main(){

    string s1,s2,s3 = "";

    int ans = 0;

    getline(cin, s1);

    getline(cin, s2);

    if(s1.size()!=s2.size()){

        cout << "Incomplete answer";

        return 0;

    }

    for(int i=0;i<s1.size();i++){   

        if(s1[i] == s2[i])ans++;

    }

 
    cout << ans;

    return 0;
}