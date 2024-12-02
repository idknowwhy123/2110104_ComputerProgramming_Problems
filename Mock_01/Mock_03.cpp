#include<bits/stdc++.h>
using namespace std;

long long solve(string num){

    string tmp = "";

    for(long long i=0;i<num.size();i++){

        if(isdigit(num[i]))tmp += num[i];

    }

    long long n = stoll(tmp);

    return n;

}

int main(){

    long long n,ans = 0;

    cin >> n;

    cin.ignore();

    string num,m;
    
    getline(cin, num);

    stringstream s(num);

    while(s >> m){

        long long tmp = solve(m);

        ans += tmp;

        //cout << tmp << '\n';

    }

    cout << ans*n; 

    return 0;
}