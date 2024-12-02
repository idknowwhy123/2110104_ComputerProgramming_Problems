#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;

    cin >> n;

    n-=543; n%=100;

    int ans = (n + (n/4) + 11)%7;

    cout << ans;
    
    return 0;
}