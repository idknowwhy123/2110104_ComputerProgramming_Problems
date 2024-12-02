#include<bits/stdc++.h>
using namespace std;

unordered_map<string,double> ump;

map<string,double> mp;

int main(){

    int n;

    cin >> n;

    for(int i=0;i<n;i++){

        string str;

        double price;

        cin >> str >> price;

        ump[str] = price;

    }

    double sum = 0, mx = -100;

    int m;

    cin >> m;

    for(int i=0;i<m;i++){

        string name;

        double num;

        cin >> name >> num;

        if(mp.find(name)!=mp.end()){

            mp[name] += ump[name]*num;

        }else{

            mp[name] = ump[name]*num;

        }

        mx = max(mp[name],mx);

    }

    vector<string> v;

    for(auto x : mp){

        if(x.second == mx)v.push_back(x.first);

        sum += x.second;

    }

    //cout << mx << '\n';

    if(sum != 0){
        
        cout << "Total ice cream sales: " << sum << '\n' << "Top sales: ";

        for(auto x : v){

            cout << x << ' ';

        }

    }

    else cout << "No ice cream sales";

    return 0;
}