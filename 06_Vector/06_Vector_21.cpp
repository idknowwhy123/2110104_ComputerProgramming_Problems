#include<bits/stdc++.h>
using namespace std;

vector<string> v;

void shift(string x){

    string ans = x;

    int n = ans.size()-1;

    for(int i = 0;i<x.size();i++){

        ans += ans[0];

        ans.erase(ans.begin());

        v.push_back(ans);

    }

}

int main(){

    string sen,ans;

    cin >> sen;

    sen+="$";

    shift(sen);

    sort(v.begin(),v.end());

    for(auto x : v){

        //cout << x << "\n";
        
        ans += x[x.size()-1];
        
    } 

    cout << ans;

    return 0;
}