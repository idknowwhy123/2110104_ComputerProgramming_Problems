#include<bits/stdc++.h>
using namespace std;

int main(){

    string sen,tmp = "",tmp2 = "";

    bool chk = 0;

    cin >> sen;

    for(int i=0;i<=sen.size();i++){

        if(isdigit(sen[i])){

            tmp2+=sen[i];

        }

        if(isupper(sen[i]) && i!=0 || isdigit(sen[i])){

            if(tmp!=""){
                
                cout << tmp << ", ";

                tmp = "";

            }

        }
        
        if(isalpha(sen[i])){
            
            tmp+=sen[i];

            if(tmp2!=""){

            cout << tmp2 << ", ";

            tmp2 = "";
            
            }
            
        }

    }

    if(tmp2 != "")cout << tmp2;
    
    if(tmp != "")cout << tmp;


    return 0;
}