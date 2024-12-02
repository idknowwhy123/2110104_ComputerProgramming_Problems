#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n,m;

    long long mx1 = LLONG_MIN,mx2 = LLONG_MIN;

    long long mn1 = LLONG_MAX,mn2 = LLONG_MAX;

    bool chk = 0;

    while(1){

        cin >> n;

        if(n == -998 || n == -999)break;

        else cin >> m;

        if(!chk){

            if(n < mn1)mn1 = n;

            if(m > mx1)mx1 = m;

            if(n > mx2)mx2 = n;

            if(m < mn2)mn2 = m;

            chk = 1;

        }else{

            if(m < mn1)mn1 = m;

            if(n > mx1)mx1 = n;

            if(m > mx2)mx2 = m;

            if(n < mn2)mn2 = n;

            chk = 0;

        }

    }

    if(n == -998)cout << mn1 << " " << mx1;

    else cout << mn2 << " " << mx2;

    return 0;
}