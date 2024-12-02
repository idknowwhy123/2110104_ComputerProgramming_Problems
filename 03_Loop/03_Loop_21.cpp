#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;

    while(cin >> str){

        bool chk1 = 0,chk2 = 0,chk3 = 0,chk4 = 0;

        int n = str.size();

        for(int i=0;i<n;i++){

            if(str[i] >= 'A' && str[i] <= 'Z')chk1 = 1;

            if(str[i] >= 'a' && str[i] <= 'z')chk2 = 1;

            if((str[i] >= 20 && str[i] <= 47) || (str[i] >= 91 && str[i] <= 96) || (str[i] >= 123 && str[i] <= 126) || (str[i] >= 58 && str[i] <= 64))chk3 = 1;

            if(isdigit(str[i]))chk4 = 1;

        }

        if(n >= 12 && chk1 && chk2 && chk3 && chk4)cout << ">> strong";
        else if(n >= 8 && chk1 && chk2 && chk4)cout << ">> weak";
        else cout << ">> invalid";

    }

    return 0;
}