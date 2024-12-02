#include<bits/stdc++.h>
using namespace std;

unordered_map<string,vector<string>> mp;

set<string> ans;

int main(){

    string tn1,tn2;

    while(cin >> tn1){

        if(!(cin >> tn2)) break;

        mp[tn1].push_back(tn2);

        mp[tn2].push_back(tn1);

    }

    for(auto x : mp[tn1]){

        ans.insert(x);

        for(auto y : mp[x]){

            ans.insert(y);

        }

    }

    for(auto x : ans){

        cout << x << '\n';

    }

    if(mp[tn1].empty())cout << tn1;

    return 0;

}