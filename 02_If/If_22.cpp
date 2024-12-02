#include<bits/stdc++.h>
using namespace std;

int main(){

    int d,m,y,n;

    cin >> d >> m >> y;

    y-=543;

    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){

        n = 31;

    }else if(m == 2){

        if(y%4 == 0) n = 29;

        else n = 28;
        
    }else{

        n = 30;

    }

    d+=15;

    if(d > n){

        d -= n;

        m++;

    }

    if(m > 12){

        m-=12;

        y++;

    }

    y+=543;

    cout << d << '/' << m << '/' << y;

    return 0;
}