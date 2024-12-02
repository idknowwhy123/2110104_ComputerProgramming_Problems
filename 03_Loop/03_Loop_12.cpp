#include<bits/stdc++.h>
using namespace std;

int main(){

    double a,l = 0;

    cin >> a;

    double r = a;

    while(l<r){

        double mid = (l+r)/2;

        if(abs(a-pow(10,mid)) > pow(10,-10)*max(a,pow(10,mid))){

            if(pow(10,mid)> a){

                r = mid;

            }else if(pow(10,mid) < a){

                l = mid;

            }else{

                l++;


            }

        }else{

            cout << mid;

            break;
        }

    }

    return 0;
}