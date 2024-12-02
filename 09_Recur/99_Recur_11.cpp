#include<bits/stdc++.h>
using namespace std;

string dec2hex(int d){

    if(d < 16){

        string ans;

        if(d == 0)ans += "0";

        else if(d == 1)ans += "1";

        else if(d == 2)ans += "2";

        else if(d == 3)ans += "3";

        else if(d == 4)ans += "4";

        else if(d == 5)ans += "5";

        else if(d == 6)ans += "6";

        else if(d == 7)ans += "7";

        else if(d == 8)ans += "8";

        else if(d == 9)ans += "9";

        else if(d == 10)ans += "A";

        else if(d == 11)ans += "B";

        else if(d == 12)ans += "C";

        else if(d == 13)ans += "D";

        else if(d == 14)ans += "E";

        else if(d == 15)ans += "F";

        return ans;
    }

    return dec2hex(d/16) + dec2hex(d%16); 

}

int main(){

    int d;

    while (cin >> d) {

    cout << d << " -> " << dec2hex(d) << endl;

    } 

    return 0;
}