#include<bits/stdc++.h>
using namespace std;

unordered_map<string,pair<int,int>> mp;

pair<int,int> com(string times){

    string tmp = "",tmp1 = "",tmp2 = "";

    for(int i=0;i<times.size();i++){

        if(times[i] == ':'){
            
            tmp1 += tmp;

            tmp = "";

            continue;
        }

        tmp += times[i];

    }

    tmp2 += tmp;

    return {stoi(tmp1),stoi(tmp2)};

}

struct d{

    string gn;

    int mn,sd;

    bool operator < (const d &x)const{

        if(mn == x.mn)return sd > x.sd;

        return mn > x.mn;

    }

};

int main(){

    int tod = 0;

    string nm,song,genre,times;

    while(cin >> song >> nm >> genre >> times){

        if(nm == "0")break;

        pair<int,int> num = com(times);

        mp[genre].second += num.second;

        if(mp[genre].second >= 60){

            tod = mp[genre].second/60; 

            mp[genre].second %= 60;

        }

        //cout << tod;

        mp[genre].first += num.first+tod;

        tod = 0;

    }

    int cnt = 0;

    vector<d> vec;
    
    for(auto x : mp){

        vec.push_back({x.first,x.second.first,x.second.second});

    }

    sort(vec.begin(),vec.end());

    for(int i=0;i<3 && i < vec.size() ;i++){

        cout << vec[i].gn << "--> " << vec[i].mn << ':' << vec[i].sd << "\n"; 

    }


    return 0;
}