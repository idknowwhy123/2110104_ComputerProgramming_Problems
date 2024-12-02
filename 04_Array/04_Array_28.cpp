#include<bits/stdc++.h>
using namespace std;

int arr[500] = {};

int main(){

    string sen;

    getline(cin, sen);

    for(auto x : sen){

        if(!isalpha(x))continue;

        x = tolower(x);

        int i = x;

        arr[i] += 1;

    }

    for(int i=0;i<500;i++){

        char ans = char(i);

        if(arr[i] == 0)continue;

        cout << ans << " -> " << arr[i] << "\n";

    }

    return 0;
}