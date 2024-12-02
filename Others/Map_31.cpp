#include<bits/stdc++.h>
using namespace std;

struct student{

    long long num;

    double score;

    string s1,s2,s3,s4,sr;

    bool operator < (const student& x)const{
        return score > x.score;
    }

};

vector<student> v;

unordered_map<string,int> mp;

vector<pair<long long,string>> vec;

int main(){

    //long long maxx = LLONG_MIN, minn = LLONG_MAX;

    int n,m,k;

    cin >> n;

    while(n--){

        string tmp;

        int num;

        cin >> tmp >> num;

        mp[tmp] = num;

    }

    cin >> m;

    for(int j=0;j<m;j++){
        
        string s1,s2,s3,s4;

        long long num;

        double score;

        cin >> num >> score >> s1 >> s2 >> s3 >> s4;

        v.push_back({num,score,s1,s2,s3,s4});


    }
    
    sort(v.begin(),v.end());

    for(auto x : v){

        if(mp[x.s1]>0){

            x.sr = x.s1;

            mp[x.s1]--;

        }else if(mp[x.s1] == 0 && mp[x.s2] > 0){

            x.sr = x.s2;

            mp[x.s2]--;

        }else if(mp[x.s1] == 0 && mp[x.s2] == 0 && mp[x.s3]){

            x.sr = x.s3;

            mp[x.s3]--;

        }else{

            x.sr = x.s4;

            mp[x.s4]--;
        }

       vec.push_back({x.num,x.sr});

    }

    sort(vec.begin(),vec.end());

    for(auto x : vec){

        cout << x.first << " " << x.second << "\n";

    }

    return 0;
}