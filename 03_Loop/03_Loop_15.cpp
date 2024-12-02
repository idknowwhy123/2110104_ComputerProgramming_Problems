#include<bits/stdc++.h>
using namespace std;

int main(){

    string s1;

    getline(cin, s1);

    for(int i=0;i<s1.size();i++){

        if(s1[i] == '[')s1[i] = '(';

        else if(s1[i] == ']')s1[i] = ')';

        else if(s1[i] == '(')s1[i] = '[';

        else if(s1[i] == ')')s1[i] = ']';

    }

    cout << s1;


    return 0;
}