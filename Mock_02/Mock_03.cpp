#include<bits/stdc++.h>
using namespace std;

unordered_map<string,set<long long>> ump;

int main(){

    int n,m;

    cin >> n >> m;

    for(int i =0;i<n;i++){

        long long num;

        string str;

        cin >> str >> num;

        ump[str].insert(num);   
    }

    long long ans = 0;

    for(auto x : ump){

        if(x.second.size() == m)ans++;

    }

    cout << ans;

    return 0;
}