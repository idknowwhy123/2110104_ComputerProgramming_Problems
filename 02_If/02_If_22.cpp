#include<bits/stdc++.h>
using namespace std;

int arr[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

int main(){

    int d,m,y,n = 0;

    cin >> d >> m >> y;

    y-=543;

    if(y%4==0 && y!=100 || y%400 == 0)arr[2]=29;
    
    n+=d;

    for(int i=1;i<m;i++){

        n+=arr[i];

    }

    cout << n;

    return 0;
}