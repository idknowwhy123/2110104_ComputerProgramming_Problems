#include<bits/stdc++.h>
using namespace std;

//vector<pair<int,int>> arr;

int arr[5500] = {};

int main(){

    int n,m,sum = 0;

    cin >> n >> m;

    for(int i = 0;i<n;i++){

        cin >> arr[i];

        sum += arr[i];

    }

    sum -= m;

    int l,r;

    for(int i=0;i<n;i++){

        for(int j=i+1;j<n;j++){

            if(arr[i] + arr[j] == sum){

                l = i;

                r = j;

            }

        }

    }

    if(l > r){

        int tmp = l;

        l = r;

        r = tmp;
    }

    cout << l << ' ' << arr[l] << '\n' << r << ' ' << arr[r];

    return 0;
}