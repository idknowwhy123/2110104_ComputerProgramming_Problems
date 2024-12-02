#include<bits/stdc++.h>
using namespace std;

unordered_map<string,string> ump;

int main(){

    int n,m;

    cin >> n;

    for(int i=0;i<n;i++){

        string name,surname,phone;

        cin >> name >> surname >> phone;

        ump[name + " " + surname] = phone;

        ump[phone] = name + " " + surname;

    }

    cin >> m;

    cin.ignore();

    for(int i=0;i<m;i++){

        string ord;

        getline(cin, ord);

        if(ump.find(ord)!=ump.end())cout << ord << " --> " << ump[ord] << '\n';

        else cout << ord << " --> Not found\n";

    }

    return 0;
}