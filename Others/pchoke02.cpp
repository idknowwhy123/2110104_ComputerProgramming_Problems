#include<bits/stdc++.h>
using namespace std;

int main(){

    string str,tmp = "0";

    cin >> str;

    str += 'x';

    int r = 0,c = 0,g = 0;

    char p;

    for(int i=0;i<str.size();i++){

        if(isdigit(str[i]))tmp += str[i];

        else{

            if(p == 'R')r += stoi(tmp);
            
            else if(p == 'C')c += stoi(tmp);

            else if(p == 'G')g += stoi(tmp);

            tmp = "";

        }

        if(str[i] == 'R'){
            
            p = str[i];

        }else if(str[i] == 'C'){

            p = str[i];

        }else if(str[i] == 'G'){

            p = str[i];

        }

    }

    cout << r << ' ' << c << ' ' << g;

    return 0;
}