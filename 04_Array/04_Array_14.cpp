#include<bits/stdc++.h>
using namespace std;

double arr[40][40] = {};

int main(){

    int n,m;

    cin >> n >> m;

    for(int i=1;i<=n;i++){

        for(int j=1;j<=m;j++){

            cin >> arr[i][j];

        }

    }

    for(int i=1;i<=n;i++){

        for(int j=1;j<=m;j++){

            arr[i][j] = arr[i][j] + arr[i-1][j] + arr[i][j-1] - arr[i-1][j-1];

        }

    }

    for(int i=3;i<=n;i++){

        for(int j=3;j<=m;j++){

            cout << round(((arr[i][j]-arr[i-3][j]-arr[i][j-3]+arr[i-3][j-3])/9.0)*100.0)/100.0 << " ";

        }

        cout << "\n";

    }




    return 0;
}