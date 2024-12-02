#include<bits/stdc++.h>
using namespace std;

unordered_map<string,set<string>> ump;

unordered_map<string,string> current;

void move(){

    string name,dep;

    cin >> name >> dep;

    ump[dep].insert(name);

    string c = current[name];

    ump[c].erase(name);

    current[name] = dep;

}

void cancle(){

    string pre,post;

    cin >> pre >> post;

    for(auto x : ump[pre]){

        ump[post].insert(x);

        current[x] = post;

    }

    ump.erase(pre);

}

int main(){

    int n,m;

    cin >> n >> m;

    for(int i=0;i<n;i++){

        string str1,str2;

        cin >> str1 >> str2;

        ump[str2].insert(str1);

        current[str1] = str2;

    }

    for(int i=0;i<m;i++){

        int num;

        cin >> num;

        if(num == 1)move();

        else cancle();

    }

    for(auto x : ump){

        cout << x.first << ' ';

        for(auto y : ump[x.first]){

            cout << y << ' ';

        }

        cout << '\n';

    }

    for(auto x : current){

        cout << x.first << ' ' << x.second << '\n';
    }

    return 0;
}

/*
3 4                                                                
A D1
B D1
C D1
1 A NewD
1 B Sales
2 D1 NewD
2 Sales Service
*/