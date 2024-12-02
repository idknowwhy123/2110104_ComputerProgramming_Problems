#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;

    cin >> n;

    int mn1 = INT_MAX,mx1 = INT_MIN,mn2 = INT_MAX,mx2 = INT_MIN;

    for(int i=0;i<n;i++){

        int num1,num2;

        cin >> num1 >> num2;

        if(i%2 == 0){

            if(num1 < mn1)mn1 = num1;

            if(num2 > mx1)mx1 = num2;

            if(num2 < mn2)mn2 = num2;

            if(num1 > mx2)mx2 = num1;

        }else{

            if(num1 > mx1)mx1 = num1;

            if(num2 < mn1)mn1 = num2;

            if(num2 > mx2)mx2 = num2;

            if(num1 < mn2)mn2 = num1;

        }

    }

    string ord;

    cin >> ord;

    if(ord == "Zig-Zag")cout << mn1 << ' ' << mx1;

    else cout << mn2 << ' ' << mx2;

    return 0;
}