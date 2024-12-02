#include<bits/stdc++.h>
using namespace std;

string arr[28]= { 
        "zero ","one " , "two ","three ","four ","five ","six ","seven ","eight ","nine ","ten ",
        "eleven " , "twelve ", "thirteen ","fourteen ","fifteen ","sixteen ","seventeen ","eighteen ","nineteen ",
        "twenty ", "thirty ", "forty " ,"fifty ","sixty ","seventy ","eighty ","ninety "
};

    string solve(string num){

        string ans = "";

        int cnt = -1;

        for(int i=0;i<num.size();i++){

            cnt++;

            if(num[i]=='0')continue;         

            if(cnt == 0){

                ans+=arr[num[i]-'0']; 

                ans+="hundred ";

            }else if(cnt==1){

                if(num[i] == '1'){

                    ans+=arr[10+num[i+1]-'0'];

                    break;

                }else{

                    ans += arr[num[i]-'0'+18];

                }

            }else{

                 ans+=arr[num[i]-'0'];

            }

        }

        return ans;

    }


    int main(){
        
        string prob = "";
        
        cin >> prob;

        if(prob == "0")cout << "Zero";
        
        string ans = "";

        string tmp = "";

        int cnt = 0;

        for(int i=prob.size()-1;i>=0;i--){

            tmp = prob[i] + tmp;

            //cout << tmp << " ";

            if(tmp.size()==3){

                if(cnt == 1 && tmp != "000")ans = "thousand " + ans;
                else if(cnt == 2&& tmp != "000")ans = "million " + ans;
                else if(cnt == 3&& tmp != "000")ans = "billion " + ans;
                else if(cnt == 4&& tmp != "000")ans = "trillion " + ans;

                ans = solve(tmp) + ans;

                tmp = "";

                cnt++;

            }else if(tmp.size()!=3 && i==0){

                for(int j=tmp.size();j<3;j++){
                    tmp = "0"+tmp;
                }

                if(cnt == 1&& tmp != "000")ans = "thousand " + ans;
                else if(cnt == 2&& tmp != "000")ans = "million " + ans;
                else if(cnt == 3&& tmp != "000")ans = "billion " + ans;
                else if(cnt == 4&& tmp != "000")ans = "trillion " + ans;

                cnt++;

                ans = solve(tmp) + ans;

                tmp = "";

            }

        }


    //cout << ans;
    ans.pop_back();
    cout <<  ans;

    }