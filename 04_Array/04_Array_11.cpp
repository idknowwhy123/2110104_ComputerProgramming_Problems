#include<bits/stdc++.h>
using namespace std;

bool arr[10];

int main(){

    string s;

    getline(cin, s);

    for(auto x : s){

        if(isdigit(x)){

            arr[x-'0'] = 1;

        }else{

            continue;

        }

    }

    bool chk = 0;

    string ans;

    for(int i=0;i<10;i++){

        if(arr[i] == 0){

            ans += to_string(i)+',';

            chk = 1;

        }
    }

    if(!chk)cout << "None";
    
    else{

        ans.pop_back();

        cout << ans;
    }

    return 0;
}