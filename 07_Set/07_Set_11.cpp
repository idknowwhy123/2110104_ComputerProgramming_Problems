#include<bits/stdc++.h>
using namespace std;

multiset<char> ms1;

multiset<char> ms2;

int main(){

    string sen1,sen2;

    getline(cin, sen1);

    getline(cin, sen2);

    for(auto& x : sen1){

        if(x == ' ')continue;
        ms1.insert(tolower(x));

    }

    for(auto& x : sen2){

        if(x == ' ')continue;
        ms2.insert(tolower(x));

    }

    if(ms1 == ms2)cout << "YES\n";
    else cout << "NO\n";

    return 0;
}