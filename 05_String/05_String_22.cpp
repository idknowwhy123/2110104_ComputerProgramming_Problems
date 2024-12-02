#include <bits/stdc++.h>
using namespace std;

void bruteforce1(string str1, string str2) {

    int n1 = str1.size(), n2 = str2.size();

    int ans = 0, num = 0, indx = 0;

    for (int i = 0; i < n2; i++) {

        int cnt = 0;

        for (int j = 0; j < n1; j++) {

            if (i + j < n2 && str1[j] == str2[i + j]) {

                cnt++;

            }
        }
        if (cnt > ans) {

            ans = cnt;

            num = i;

            indx = 1; 
        }
    }

    for (int i = 0; i < n1; ++i) {

        int cnt = 0;

        for (int j = 0; j < n2;j++) {

            if (i + j < n1 && str2[j] == str1[i + j]) {

                cnt++;

            }
        }
        if (cnt > ans) {

            ans = cnt;

            num = i;

            indx = 2;
        }
    }

    if (indx == 1) {
     
        cout << string(num, '-') << str1 << '\n' << str2 << '\n';

    } else if (indx == 2) {
   
        cout << str1 << '\n' << string(num, '-') << str2 << '\n';

    }else{

        cout << str1 << '\n' << str2 << '\n';

    }

    cout << ans;
}

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    bruteforce1(str1, str2);

    return 0;
}
