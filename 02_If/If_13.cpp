#include<bits/stdc++.h>
using namespace std;

int main(){

    double maxx = INT_MIN, minn = INT_MAX;

    double sum = 0;

    for(int i=0;i<4;i++){

        double tmp;

        cin >> tmp;

        sum+=tmp;

        if(tmp > maxx)maxx = tmp;
        if(tmp < minn)minn = tmp;
    }

    double num = (sum-minn-maxx)/2;

    cout << round(num*100.0)/100.0 ;

    return 0;
}