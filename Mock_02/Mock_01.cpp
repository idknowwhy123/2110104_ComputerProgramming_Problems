#include<bits/stdc++.h>
using namespace std;

unordered_map<long long,long long> arr1;

unordered_map<long long,long long> arr2;

int main(){

    long long m,k,a,b,mx = -1;

    cin >> m >> k >> a >> b;

    for(long long i=0;i<m;i++){

        long long a1,a2;

        cin >> a1 >> a2;

        arr1[a1] = a2;

        mx = max(mx,a1);

    }

    for(long long i=0;i<k;i++){

        long long a1,a2;

        cin >> a1 >> a2;

        arr2[a1] = a2;

        mx = max(mx,a1);

    }

    for(long long i=a;i<=b;i++){

        long long sum = 0;

        for(long long j=0;j<=mx;j++){
            
            if(arr1.find(j) != arr1.end() && arr2.find(i-j) != arr2.end()){

                sum += arr1[j] * arr2[i-j];

            }

        }

        cout << sum << ' ';

    }
    



    return 0;
}