#include<bits/stdc++.h>
using namespace std;

unordered_map<string,int> ump;

queue<string> q;

int main(){

    int n,ans = 0,cnt = 0;

    string country;

    cin >> n;

    for(int i=0;i<n;i++){

        string tmp;

        int price;

        cin >> tmp >> price;

        ump[tmp] = price;

    }

    cin.ignore();

    getline(cin, country);

    string curr = "",go ="";

    bool chk = 0;

    for(int i=0;i<country.size();i++){

        if(country[i] == '-'){

            go += country[i+1];

            go += country[i+2];

            if(!chk){

                curr = go;

                chk = 1;

            }else if(chk && curr != go){

                ans += ump[go];

                curr = go;

            }

            go = "";

        }

    }

    cout << ans;

    return 0;
}