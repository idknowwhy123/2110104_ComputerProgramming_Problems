#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;

    cin >> s;

    string tmp = "";

    for(int i=0;i<2;i++){

    tmp+=s[i];

    }

    if((tmp != "06" && tmp != "08" && tmp != "09") || s.size() != 10)cout << "Not a mobile number";

    else cout << "Mobile number";

    return 0;
}