#include<bits/stdc++.h>
using namespace std;

int main(){

    double tmp = 0,sum = 0,cnt = 0;

    while(1){

        cin >> tmp;

        if(tmp == -1)break;

        sum+=tmp;

        cnt++;

    }

    if(cnt == 0)cout << "No Data";
    else cout << round((sum/cnt)*100.0)/100.0;

    return 0;
}