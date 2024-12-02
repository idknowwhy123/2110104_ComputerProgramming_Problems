#include<bits/stdc++.h>
using namespace std;

long gcd(long a, long b) {

    if (b == 0) return a;

    return gcd(b, a%b);

}

int main(){

    string n,m,p,dwn = "";

    cin >> n >> m >> p;

    if(m == "0" && p == "0"){

        cout << n << " / 1";

        return 0;

    }

    string tmp1 = m + p;

    long up = 0;

    if(m != p){

        up = stoi(tmp1) - stoi(m);

        for(int i=0;i<p.size();i++){

            dwn += '9';

        }
    
        for(int i=0;i<m.size();i++){

         dwn += '0';

        }

    }else{

        up = stoi(tmp1);

        for(int i=0;i<p.size()+m.size();i++){

            dwn += '9';

        }

    }

    long dwn1 = stoi(dwn);

    long fnt = stoi(n);

    long up1 = (dwn1 * fnt) + up;

    long num = gcd(up1,dwn1);

    up1/=num;

    dwn1/=num;

    cout << up1 << " / " << dwn1;

    return 0;
}