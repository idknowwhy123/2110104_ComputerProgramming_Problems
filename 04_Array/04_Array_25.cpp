#include<bits/stdc++.h>
using namespace std;

int arr[60] = {};

int wt[60] = {};

int main(){

    int n,mx = 0,ans = 0,tmp = 0,cnt = 0;

    cin >> n;

    for(int i=0;i<n;i++){

        cin >> arr[i];

    }


    for(int i=0;i<n;i++){

        if(mx!=0)cnt++;

        if(arr[i] >= mx){

            mx = arr[i];

            ans+=tmp;

            tmp = 0;

        }

        tmp += mx-arr[i];

    }

    //cout << ans << "\n";

    mx = 0;

    tmp = 0;

    int ans2 = 0;

    for(int i=n;i>=0;i--){

        if(arr[i] > mx){

            mx = arr[i];

            //cout << mx << " " << arr[i] << " " << tmp <<  "\n";

            ans2+=tmp;

            tmp = 0;

        }

        tmp += mx-arr[i];

    }


    cout << (ans+ans2)/(1+(ans == ans2));

    return 0;

}