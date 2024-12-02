#include<bits/stdc++.h>
using namespace std;

unordered_map<string,double> ump;

int main(){

    bool chk = 0;

    int n;
    
    double num;

    cin >> n;

    for(int i=0;i<n;i++){

        string country;

        double ex;

        cin >> country >> ex;

        ump[country] = ex;

    }

    string comm,en,st;

    cin >> num >> st;

    cout << num << ' ' << st << " -> ";

    while(cin >> en){

        if(chk)cout << "-> ";

        if(!chk)chk = 1;

        if(en == st){

            cout << num << ' ' << st << ' ';

        }else if(en == "THB"){
            
            long long change = long(num*ump[st]);

            num = change;

            cout << change << " THB ";

        }else if(en != "THB" && st != "THB"){

            long long change = long((num*ump[st])/ump[en]);

            num = change;

            cout << change << ' ' << en << ' ';

        }else if(st == "THB"){
            
            long long change = long(num/ump[en]);

            num = change;

            cout << change << ' ' << en << ' ';

        }

        st = en;

    }

    return 0;
}