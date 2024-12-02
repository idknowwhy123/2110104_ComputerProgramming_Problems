#include<bits/stdc++.h>
using namespace std;

string arr[] = {"A","B+","B","C+","C","D+","D","F"};

unordered_map<string,pair<int,int>> umap;

struct grd{

    string name;

    int gd,indx;

    bool operator < (const grd &x)const{

        if(gd == x.gd)return indx < x.indx;

        return gd < x.gd;

    }

};

vector<grd> v;

int main(){

    int n;

    string num,grade;

    cin >> n;

    for(int i=0;i<n;i++){

        int tmp = 0;

        cin >> num >> grade;

        if(grade == "A")tmp = 0;
        else if(grade == "B+")tmp = 1;
        else if(grade == "B")tmp = 2;
        else if(grade == "C+")tmp = 3;
        else if(grade == "C")tmp = 4;
        else if(grade == "D+")tmp = 5;
        else if(grade == "D")tmp = 6;
        else tmp = 7;

        umap[num] = {tmp,i}; 

    }

    string order;

    while(cin >> order){

        if(order == "end")break;

        char tmp = order[order.size()-1];

        order.pop_back();

        if(tmp == '+')umap[order].first-=1;

        else umap[order].first+=1;

        if(umap[order].first < 0)umap[order].first = 0;

        else if(umap[order].first > 7)umap[order].first = 7;

    }

    for(auto x : umap){

        v.push_back({x.first,x.second.first,x.second.second});

    }
    
    sort(v.begin(),v.end());

    for(auto x : v){

        cout << x.name << " " << arr[x.gd] << '\n';

    }


    



    return 0;
}