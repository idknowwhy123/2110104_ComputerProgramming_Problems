#include <bits/stdc++.h>
using namespace std;

int F(int n) { // Fibonacci number

    if(n == 0)return 0;

    else if(n == 1)return 1;

    int ans = 0;

    if(n%2 == 0){

        int k = n/2;

        ans += (2*F(k-1) + F(k)) * F(k);

    }else{

        int k = (n+1)/2;

        ans += F(k) * F(k) + F(k-1) * F(k-1);
 
    }

    return ans;

}

int M(int n) { // Motzkin number

    if(n == 0 || n == 1)return 1;

    int ans = 0;

    ans += M(n-1);

    for(int i=0;i<=n-2;i++){

        ans += M(i) * M(n-2-i);

    }

    return ans;

}

int S(int n) { // Schröder–Hipparchus Number

    if(n <= 2)return 1;

    int ans = (((6*n-9) * S(n-1)) - ((n-3) * S(n-2)))/n;

    return ans;

}

int D(int n) { // Derangement

    if(n < 1)return 1;

    int ans = n*D(n-1) + pow(-1,n);

    return ans;

}

int main() {

    map<string, int(*)(int)> func = {{"F",F}, {"M",M}, {"S",S}, {"D",D}};

    string fn;

    int p;

    while (cin >> fn >> p) {

        if (func.find(fn) != func.end()){

            cout << fn << '(' << p << ") = " << func[fn](p) << '\n';

        }
    }

    return 0;

}
