#include<bits/stdc++.h>
using namespace std;

int main(){

    float n;

    float ans = 0;

    cin >> n;

    if(n > 1000000000){

        n /= 1000000000;

        if(n > 10)ans = round(n);

        else if(n > 100)ans = round(n*10)/10.0;

        else ans = round(n*10)/10.0;

        cout << ans << "B";

    
    }else if(n > 1000000){
        
        n /= 1000000;

        if(n > 10)ans = round(n);

        else if(n > 100)ans = round(n*10)/10.0;

        else ans = round(n*10)/10.0;

        cout << ans << "M";
    
    }else if(n > 1000){
        
        n /= 1000;

        if(n > 10)ans = round(n);

        else if(n > 100)ans = round(n*10)/10.0;

        else ans = round(n*10)/10.0;

        cout << ans << "K";
        
    }else{

        cout << n;
    }

    return 0;
}