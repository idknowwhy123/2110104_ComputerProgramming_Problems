#include<iostream>
#include<cmath>

using namespace std;

#define _USE_MATH_DEFINES

double miu,om,a,b,dx;

float solve(double x){

    float tmp = (om * sqrt(2*M_PI));

    float pe = -((x - miu) * (x - miu)) / (2 * om * om);

    float e = exp(pe);

    float ans = 1/(tmp) * e;

    return ans;
}

int main(){

    cin >> miu >> om >> a >> b >> dx;

    int m = ceil((b-a)/dx);

    float ans = 0;

    for(int i=0;i<=m;i++){

        ans += solve(a + (i*dx)) * dx;

    }

    cout << round(ans*1e4)/1e4;

    return 0;
}