#include<bits/stdc++.h>
using namespace std;


struct sc{

    int s;

    int p;

    bool operator < (const sc &x)const{
        if(s == x.s)return p < x.p;
        return s > x.s;
    }

};

map<pair<string,int>,bool> check;

unordered_map<string,sc> score;

map<pair<string,int>,int> pen;

vector<pair<sc,string>> ans;

int main(){

    int n;

    cin >> n;

    for(int i=0;i<n;i++){

        bool chk = 0;
        int t,num;
        string name,b;

        cin >> t >> name >> num >> b;

        if(b == "T")chk = 1;
        else chk = 0;

        if(!chk && check[{name,num}] != 1 && pen.find({name,num}) != pen.end()){
            
            pen[{name,num}]++;
        
        }else if(!chk && check[{name,num}] != 1 && pen.find({name,num}) == pen.end()){
            
            pen[{name,num}] = 1;
        
        }

        if(chk && score.find(name)!=score.end() && check[{name,num}] != 1){

            score[name].s++;

            score[name].p+=t;

            check[{name,num}] = 1;

        }else if(chk && score.find(name)==score.end() && check[{name,num}] != 1){
            
            score[name].s = 1;

            score[name].p = t;

            check[{name,num}] = 1;
        
        }

    }

    for(auto &x : pen){

        if(check[{x.first.first,x.first.second}])score[x.first.first].p += 20 * x.second ;

    }

    for(auto x : score){

        ans.push_back({{x.second.s,x.second.p},x.first});

    }

    sort(ans.begin(),ans.end());

    int count = 0;

    for (auto &x : ans) {

        //cout << count << ' ';

        if (count < 3) { 

            cout << x.second << ' ' << x.first.s << ' ' << x.first.p << '\n';

        }
        
        if (count >= 3 && x.first.s == ans[count - 1].first.s && x.first.p == ans[count - 1].first.p) {

            cout << x.second << ' ' << x.first.s << ' ' << x.first.p << '\n';

        }
        
        count++;
    }

    return 0;
}