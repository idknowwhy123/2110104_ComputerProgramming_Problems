#include<bits/stdc++.h>
using namespace std;

unordered_map<long long,long long> ump;

long long arr[101010] = {};

int main(){

    long long n;

    cin >> n;

    for(long long i=0;i<n;i++){

        long long num;

        cin >> num;

        if(ump.find(num) != ump.end())ump[num]++;

        else ump[num] = 1;

        arr[i] = num;

    }

    for(long long i=0;i<n;i++){

        if(ump.find(2*arr[i]) != ump.end())cout << 1 << ' ';
        
        else cout << 0 << ' ';

    }

    return 0;
}