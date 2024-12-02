#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n,i = 2;

    bool chk = 0;

    cin >> n;

    while(i<=n){

        if(n%i == 0){

            if(chk)cout << '*';
            
            cout << i;

            n/=i;

            chk = 1;

        }else{

            i++;

        }

    }
    
    return 0;
}