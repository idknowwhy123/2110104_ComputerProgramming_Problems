#include<bits/stdc++.h>
using namespace std;

int arr[10010] = {};



int main(){

    int k,n,m;

    cin >> k >> n >> m;

    for(int i=0;i<m;i++){

        int a,b;

        cin >> a >> b;

        arr[a] = b;

    }

    for(int i=0;i<n;i++){

        pair<int,int> cnt[10000] = {};

        int j;

        int mx = INT_MIN,ans = 0;

        if(k - i < 0)j = 0;

        else j = k - i;

        for(j;j<k+i;j++){

            if(arr[j] > 0){

                cnt[arr[j]].first++;

                if(cnt[arr[j]].first > mx){
                    
                    mx = cnt[arr[j]].first;

                    ans = arr[j];

                }

            }else if(arr[j] < 0){

                cnt[arr[j]].second++;

                if(cnt[arr[j]].second > mx){
                    
                    mx = cnt[arr[j]].second;

                    ans = arr[j];

                }

            }else{

                cnt[arr[j]].first++;

                if(cnt[arr[j]].first > mx){
                    
                    mx = cnt[arr[j]].first;

                    ans = arr[j];

                }

            }

        }

        cout << ans << ' ';

    }

    return 0;
}