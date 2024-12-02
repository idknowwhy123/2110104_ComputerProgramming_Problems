#include<bits/stdc++.h>
using namespace std;

long long res;

long long mod(long long a,long long k, long long m){ 

    if(k == 0){

        return 1;

    }

    res = mod(a,k/2,m);

    res = (res * res) % m;

    if(k%2 == 1) res = (res * a) % m;

    return res;
}

int main(){

    long long n,m,p;

    cin >> n >> m >> p;
    
    cout << mod(n,m,p);

    return 0;
}