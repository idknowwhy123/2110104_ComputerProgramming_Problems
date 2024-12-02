#include<bits/stdc++.h>
using namespace std;


int main(){

    double p,k=1,t=1;

    cin >> p;

    while(1){

        t = (t*(365-(k-1)))/365;

        if(1-t >= p){

            cout << k;

            break;

        }else{

            k++;

        }

    }

    return 0;
}
