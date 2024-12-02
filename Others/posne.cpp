#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;

    cin >> n;

    if(n == 0) cout << "zero";

    else if(n > 0) cout << "positive";

    else cout << "negative";

    if(n%2 == 0)cout << "\neven";

    else cout << "\nodd";

    return 0;
}