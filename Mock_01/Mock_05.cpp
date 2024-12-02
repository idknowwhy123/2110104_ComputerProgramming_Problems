#include<bits/stdc++.h>
using namespace std;

int arr[210] = {};

set<int> v;

int main(){

    int n,ans = 0,mx = INT_MIN;

    cin >> n;

    for(int i=1;i<=n;i++){

        cin >> arr[i];

        mx = max(arr[i],mx);

    }

    for(int i=1;i<=mx;i++){

        v.insert(i);
        
        for(int j=1;j<=n-i+1;j++){

            int cnt = 0;
            
            bool chk[220] = {};

            for(int k=0;k<i;k++){

                if(find(v.begin(),v.end(),arr[j+k]) != v.end() && chk[arr[j+k]] != 1){

                    chk[arr[k+j]] = 1;

                    cnt++;
                }

            }

            if(cnt == i)ans++;

        }
        
    }

    cout << ans;


    return 0;
}