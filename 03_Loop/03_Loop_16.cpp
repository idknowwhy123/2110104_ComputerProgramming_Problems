#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;

    cin >> n;

    for(int i=0;i<n;i++){

        for(int j=0;j<n+i;j++){

            if(i == n-1 || j-n+1 == i || n-j == i+1)cout << '*';

            else cout << '.';

        }

        cout << "\n";

    }


    return 0;
}