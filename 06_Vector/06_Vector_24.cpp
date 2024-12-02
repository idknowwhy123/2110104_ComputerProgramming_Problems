#include<bits/stdc++.h>
using namespace std;

struct dat{

    string nm;

    double p;

    bool operator < (const dat &x)const{

        if(p == x.p)return nm < x.nm;

        else return p > x.p; 

    }

};

vector<dat> v;

unordered_map<string,double> ump;

unordered_map<string,double> ans;

int main(){

    string order;

    while(1){

        string name;

        double price;

        cin >> name;

        if(name == "END")break;

        else cin >> price;

        ump[name] = price;

    }

    cin.ignore();

    getline(cin, order);

    stringstream s(order);

    string sub;

    while(s >> sub){

        if(ump.find(sub) != ump.end())ans[sub] += ump[sub]; 

    }

    for(auto x : ans){

        //cout << x.first << " " << x.second << "\n";

        v.push_back({x.first,x.second});

    }

    if(v.empty())cout << "No Sales";

    else{

        sort(v.begin(),v.end());

        for(int i=0;i<v.size() && i<3;i++){

            cout << v[i].nm << ' ' << v[i].p << '\n'; 

        }

    }

    return 0;
}