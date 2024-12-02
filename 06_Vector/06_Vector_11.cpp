#include<bits/stdc++.h>
using namespace std;

deque<string> v;

int main(){

    int n,cnt = 1;
    
    string num;

    cin >> n;

    for(cnt;cnt<=n;cnt++){

        string tmp;

        cin >> tmp;

        if(cnt%2 != 0)v.push_back(tmp);
        else v.push_front(tmp);

    }

    cin.ignore();

    getline(cin, num);

    stringstream s(num);

    string tmp;

    while(s >> tmp){

        if(cnt%2 != 0)v.push_back(tmp);
        else v.push_front(tmp);

        cnt++;

    }

    while(1){

        string m;

        cin >> m;

        if(m == "-1")break;

        if(cnt%2 != 0)v.push_back(m);
        else v.push_front(m);

        cnt++;

    }

    string ans = "";
    
    while(!v.empty()){

        ans += v.front();

        v.pop_front();

        ans += ", ";

    }

    if(!ans.empty()){ans.pop_back();ans.pop_back();}

    cout << "[" << ans << "]";


    return 0;
}