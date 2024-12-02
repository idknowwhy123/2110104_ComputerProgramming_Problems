#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(0);cin.tie(NULL);

    int num;

    cin >> num;

    if(num >= 80)cout << "A";
    else if(num >= 70 && num < 80)cout << "B";
    else if(num >= 60 && num < 70)cout << "C";
    else if(num >= 50 && num < 60)cout << "D";
    else cout << "F";

    return 0;
}