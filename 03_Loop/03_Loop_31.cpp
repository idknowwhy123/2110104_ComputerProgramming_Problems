#include<bits/stdc++.h>
using namespace std;


int main(){

    string n,m;

    cin >> n >> m;

    int ns = n.size(),ms = m.size();

    long long num1,num2,ans = 0,tmp,tmp1,tmp2;

    num1 = stoll(n);

    num2 = stoll(m);

    if(ns == ms)cout << (num2-num1)+1;

    else{

        for(int i=ns;i<ms;i++){

            tmp = pow(10,i);

            tmp2 = pow(10,i-1);

            tmp1 = tmp-tmp2;

            ans+=tmp1*i;

        }

        //cout << ans << " ";

        tmp1 = pow(10,ns-1);

        tmp2 = pow(10,ms-1);

        ans -= (num1-tmp1)*ns;

        ans += (num2-tmp2+1)*ms;

        cout << ans;

    }

    return 0;
}