#include<bits/stdc++.h>
using namespace std;

bool arr[1000000] = {};

int main(){

    int sum,mx = -10,cnt = 0;

    cin >> sum;

    int num;

    while(cin >> num){

        if(num == -1)break;

        arr[num] += 1;

        mx = max(mx,num);

    }

    //cout << mx << '\n';

    for(int i=1;i<=mx;i++){

        if(arr[i] == 0 || i == sum-i)continue;

        int j = sum - i;

        //cout << j << ' ';

        if(arr[j] == 1)cnt++;//cout << i << '+' << j << ' ' << sum << '\n';

    }

    cout << cnt/2;


    return 0;
}