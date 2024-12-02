#include<bits/stdc++.h>
using namespace std;

int main(){

    double a,b,c,ans1,ans2;

    cin >> a >> b >> c;

    ans1 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);

    ans2 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);

    cout << round(ans1*1e3)/1e3 << ' ' << round(ans2*1e3)/1e3;

    return 0;
}