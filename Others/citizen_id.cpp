#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;

    int cnt = 13,sum = 0;

    cin >> s;

    for(auto x : s){

        sum+= (x-'0')*cnt;

        cnt--;

    }

    int ans = (11 - sum%11)%10;

    s+=ans+'0';

    for(int i=0;i<s.size();i++){

        if(i == 1 || i == 5 || i == 10 || i == 12)cout << '-';
        
        cout << s[i];

    }

    return 0;
}