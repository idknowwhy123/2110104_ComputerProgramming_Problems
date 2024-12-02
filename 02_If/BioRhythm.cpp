#include<bits/stdc++.h>
using namespace std;

const double pi = 3.14159265358979323846;

int arr[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

int main(){

    int d1,m1,y1,d2,m2,y2,cnt1 = 0,cnt2 = 0;

    cin >> d1 >> m1 >> y1;

    cin >> d2 >> m2 >> y2;

    y1-=543;

    y2-=543;

    if(m1 == 2 && y1 % 4 == 0)cnt1 += arr[m1-1]-d1+2;
    else cnt1 += arr[m1-1]-d1+1;

    cnt2 += d2-1;

    for(int i=m1;i<12;i++){

        if(i == 1 && y1 % 4 == 0)cnt1 += arr[i]+1;

        else{

            cnt1+=arr[i];

        }

    }

    for(int i=m2-2;i>=0;i--){

        if(i == 1 && y2 % 4 == 0)cnt2 += arr[i]+1;

        else{

            cnt2+=arr[i];

        }

    }
    int ans = 0;

    if((y2 - y1) == 1 && d1 == 1 && d2 == 1)ans = cnt1;

    else ans = cnt1 + cnt2 + (y2-y1-1)*365;

    //cout << ans;
    double ans1,ans2,ans3;

    ans1 = round(sin((2*pi*ans)/23)*100)/100.0;
    
    ans2 = round(sin((2*pi*ans)/28)*100)/100.0;

    ans3 = round(sin((2*pi*ans)/33)*100)/100.0;

   // cout << cnt1 << " " << cnt2 << " " << ans;

    cout << ans << " " << ans1 << " " << ans2 << " " << ans3;

    return 0;
}