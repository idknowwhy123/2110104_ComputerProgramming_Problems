#include<bits/stdc++.h>
using namespace std;

vector<int> v[1010];

bool comp(pair<int,int> &x, pair<int,int> &y){

    if(x.first != y.first)return x.first > y.first;
    
    else if(x.first == y.first && v[x.second].size() != v[y.second].size()){
        
        return v[x.second].size() < v[y.second].size();
        
    }else if(v[x.second].size() == v[y.second].size()){

        sort(v[x.second].begin(),v[x.second].end());

        sort(v[y.second].begin(),v[y.second].end());

        for(int i=0;i<v[x.second].size();i++){

            if(v[x.second][i] == v[y.second][i])continue;

            else if(v[x.second][i] < v[y.second][i])return v[x.second][i] < v[y.second][i];

            else return v[x.second][i] < v[y.second][i];

        }

    }

    return x.first > y.first;
     
}

void first(string seq){

    pair<int,int> sum[1010] = {};

    for(int i=0;i<1010;i++){

        sum[i].second = i;

    }

    string num;

    stringstream s(seq);

    while(s >> num){

        int n = stoi(num);

        //cout << n << '\n';

        for(int i=0;i<1010;i++){

            if(sum[i].first+n <= 100){
                
                sum[i].first+=n;

                v[i].push_back(n);

                break;
            }

        }

    }

    sort(sum, sum+1010,comp);

    for(int i = 0;i<1010;i++){

        if(sum[i].first == 0)continue;

        //cout << sum[i].first << " ";

        sort(v[sum[i].second].begin(),v[sum[i].second].end());

        for(auto x : v[sum[i].second]){

            cout << x << " ";

        }

        cout << '\n';

    }

    return ;

}

void best(string seq){

    pair<int,int> sum[1010] = {};

    int mx = -1e7,pls = 0;

    for(int i=0;i<1010;i++){

        sum[i].second = i;

    }

    string num;

    stringstream s(seq);

    while(s >> num){

        int n = stoi(num);

        for(int i=0;i<1010;i++){

            if(sum[i].first+n > mx && sum[i].first+n <= 100){
                
                mx = sum[i].first + n;

                pls = i;

            }

        }

        sum[pls].first += n;

        v[pls].push_back(n);

        mx = -1;

    }

    sort(sum, sum+1010,comp);

    for(int i = 0;i<1010;i++){

        if(sum[i].first == 0)continue;

        //cout << sum[i].first << " ";

        sort(v[sum[i].second].begin(),v[sum[i].second].end());

        for(auto x : v[sum[i].second]){

            cout << x << " ";

        }

        cout << '\n';

    }

    return ;




}


int main(){

    string order,seq,num;

    cin >> order;

    cin.ignore();

    getline(cin, seq);

    if(order == "first")first(seq);

    else best(seq);
    
    return 0;
}