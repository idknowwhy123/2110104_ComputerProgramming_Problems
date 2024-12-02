#include<bits/stdc++.h>
using namespace std;

int n;

double arr[50] = {};

double sum(double irr){

    //cout << irr << '\n';

    double ans = 0.0;

    for(int i=0;i<=n;i++){

        ans += (arr[i]/(pow((1+irr),i)));

        //cout << ans  << " ";

    }

    //cout << ans << '\n'; 

    return ans;

}

int main(){

    cin >> n;

    for(int i=0;i<=n;i++){

        cin >> arr[i];

    }

    double l = -1.0,r = n;
    
    while(l < r){

        double mid = (l+r)/2;

        double ans = sum(mid);

        double com = pow(10,-8)*max(ans,0.0);

        if(abs(ans - com) <= pow(10,-8)){

            cout << setprecision(8) << mid << '\n';

            break;

        }else if(ans > 0){

            l = mid;

        }else if(ans < 0){

            r = mid;

        }

        //cout << mid << ' ';
       
    }
    

    return 0;
}