#include<bits/stdc++.h>
using namespace std;

struct student{

    string num;

    int grade;

    int indx;

    bool operator < (const student &x)const{

        return indx < x.indx;

    }

};

vector<student> v;

unordered_map<string,pair<int,int>> ump;

unordered_map<string,int> grd = {{"F",0},{"D",1},{"D+",2},{"C",3},{"C+",4},{"B",5},{"B+",6},{"A",7}};

int main(){

    int n;

    for(int i=0;;i++){

        string name,gd;

        cin >> name;

        if(name == "q")break;

        cin >> gd;

        ump[name].first = grd[gd];

        ump[name].second = i;
        
    }

    cin.ignore();

    string order,str;

    getline(cin, order);

    stringstream s(order);

    while(s >> str){

        ump[str].first+=1;

        if(ump[str].first > 7)ump[str].first = 7;

    }

    for(auto x : ump){


        v.push_back({x.first,x.second.first,x.second.second});

    }

    sort(v.begin(),v.end());

    for(auto x : v){

        string tmp;

        if(x.grade == 7)tmp = "A";
        else if(x.grade == 6)tmp = "B+";
        else if(x.grade == 5)tmp = "B";
        else if(x.grade == 4)tmp = "C+";
        else if(x.grade == 3)tmp = "C";
        else if(x.grade == 2)tmp = "D+";
        else if(x.grade == 1)tmp = "D";
        else if(x.grade == 0)tmp = "F";

        cout << x.num << ' ' << tmp << '\n';

    }


    return 0;
}