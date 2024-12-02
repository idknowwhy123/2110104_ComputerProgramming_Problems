#include<bits/stdc++.h>
using namespace std;

int main(){

    double x,xrad;

    cin >> x;

    xrad = (x*M_PI)/180;

    double tmp1 = sqrt((x*x) + (cos(xrad) * cos(xrad)));

    double tmp2 = pow(cos(xrad),3)/((x*x)+1);

    double tmp3 = (x*x)+1;

    double tmp4 = sin(xrad);

    double res = tmp1/(tmp2+tmp4);

    cout << fixed << setprecision(1) <<  res;

    return 0;
}