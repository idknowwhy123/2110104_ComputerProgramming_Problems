#include<bits/stdc++.h>
using namespace std;

int arr[510] = {};

int main(){

    string str;
    
    getline(cin,str);

    for(int i=0;i<str.size();i++){

        if(!isalpha(str[i]))continue;

        int indx = tolower(str[i]);

        arr[indx]++;

    }

    for(int i=0;i<510;i++){

        if(arr[i] != 0){

            cout << char(i) << " -> " << arr[i] << '\n';
            
        }

    }

    return 0;
}