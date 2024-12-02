#include <iostream>
using namespace std;

int arr[1010] = {};

int S(int n, int k) {
// Stirling numbers of the second kind
    if(n == 0 && k == 0)return 1;

    else if((n == 0 && k > 0) || (k == 0 && n > 0) )return 0;

    return k*S(n-1,k)+S(n-1,k-1);

}

int B(int n) {
// Bell number
    if(n == 0)return 1;

    int sum = 0;

    for(int i=1;i<=n;i++){

        sum += S(n,i);

    }

    return sum;
}

int T(int n, int x) {
// Chebyshev polynomials
    if(n == 1)return x;
    else if(n == 0)return 1;
    else{

        return 2*x*T(n-1,x)-T(n-2,x);

    }
}
int main() {

    arr[0] = 1;

    string fn;

    int i, j;

    while (cin >> fn) {

        if (fn == "S") {

            cin >> i >> j;

            printf("S(%d, %d) = %d\n", i, j, S(i,j));

        } else if (fn == "B") {

            cin >> i;

            printf("B(%d) = %d\n", i, B(i));

        } else if (fn == "T") {

            cin >> i >> j;

            printf("T(%d, %d) = %d\n", i, j, T(i,j));

        }
    }

    return 0;
}
