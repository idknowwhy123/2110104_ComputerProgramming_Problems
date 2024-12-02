#include<bits/stdc++.h>
using namespace std;

const double h = 0.024265;

const double b = 0.0333;


int main(){

    double W,H;

    cin >> W >> H;

    double ans1 = (sqrt(W*H))/60;

    double ans2 = h * pow(W,0.5378) * pow(H,0.3964);

    double ans3 = b * pow(W,0.6157 - 0.0188*log10(W)) *  pow(H,0.3);

    cout << setprecision(15) << ans1 << "\n" << ans2 << "\n" << ans3;

    return 0;
}