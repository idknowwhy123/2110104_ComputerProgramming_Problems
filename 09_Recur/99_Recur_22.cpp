#include <iostream>
#include <map>
using namespace std;

int F(int n);
int M(int n);

int H(int n) { // Tower of Hanoi

    if(n == 0)return 0;

    int ans = 2 * H(n-1)+1; 

    return ans;

}

int C(int n) { // Catalan Number

    if(n == 0)return 1;

    int catalan = 0;

    for(int i=0;i<n;i++){

        catalan += C(i) * C(n-i-1);

    }

    return catalan;
    
}


int F(int n) { // Female sequence

    if(n <= 0)return 1;

    int ans = n-M(F(n-1));

    return ans;
}

int M(int n) { // Male sequence

    if(n <= 0)return 0;

    int ans = n-F(M(n-1));

    return ans;
}

int main() {

    map<string, int(*)(int)> func = {{"H",H}, {"C",C}, {"F",F}, {"M",M}};

    string fn;

    int p;

    while (cin >> fn >> p) {

        if (func.find(fn) != func.end()){

            cout << fn << '(' << p << ") = " << func[fn](p) << "\n";

        }
        
    }

    return 0;
}
