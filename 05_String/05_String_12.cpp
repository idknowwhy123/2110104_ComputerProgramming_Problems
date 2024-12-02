#include<bits/stdc++.h>
using namespace std;

string cal(string num1,string num2){

    string ans = "";

    int ln1 = num1.size(),ln2 = num2.size();

    if(ln1 > ln2){

        for(int i =0;i<ln1-ln2;i++){

            num2 = "0" + num2;

        }

    }else if(ln2 > ln1){

        for(int i =0;i<ln2-ln1;i++){

            num1 = "0" + num1;

        }

    }

    int n1,n2,tod = 0;

    for(int i=num1.size()-1;i>=0;i--){

        n1 = num1[i]-'0';

        n2 = num2[i]-'0';

        int chk = (n1+n2+tod)%10;

        ans += to_string(chk);

        tod = (n1+n2+tod)/10;

    }

    if(tod != 0)ans += to_string(tod);
        
    reverse(ans.begin(),ans.end());

    return ans;

}


int main(){

    string num = "",ans = "";

    while(1){

        cin >> num;

        if(num == "END")break;

        if(ans == "" && num!=""){
            
            ans = num;

            continue;

        }

        ans = cal(num,ans);

    }

    cout << ans;

    return 0;
}