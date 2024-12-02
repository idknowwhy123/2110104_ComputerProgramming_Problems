#include<bits/stdc++.h>
using namespace std;

double com(double st1,double st2,double en1,double en2){

    double ans = sqrt(pow((st1-st2),2) + pow((en1 - en2),2));

    return ans;

}

int main(){

    double a,b,c,d,e,f,a1,b1,c1,r;

    cin >> a >> b >> c >> d >> e >> f;

    r = c-d;

    c1 = r/com(a,e,b,f);

    a1 = round(a + (c1 * (e-a)));

    b1 = round(b + (c1 * (f-b)));

    cout << a1 << " " << b1;

    return 0;
}