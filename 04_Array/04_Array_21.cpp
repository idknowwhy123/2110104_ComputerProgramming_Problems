#include<bits/stdc++.h>
using namespace std;

double arr[1010] = {};


int main(){

    int n;
    
    double ans;

    cin >> n;

    for(int i=0;i<n;i++){

        cin >> arr[i];

    }

    

    for(int i=n;i>=0;i--){

        double tmp = arr[i];

        for(int j=i;j>0;j--){

            tmp = arr[j-1] + (1/tmp);

        }

        //cout << "\n";

        arr[i] = tmp;

    }

    for(int i=0;i<n;i++){

        cout << setprecision(10) << arr[i] << "\n";

    }
    
    return 0;
}