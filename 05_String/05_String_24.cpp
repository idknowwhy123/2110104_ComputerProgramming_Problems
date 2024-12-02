#include<bits/stdc++.h>
using namespace std;

vector<string> v;

int main(){

    string sen;

    getline(cin, sen);

    stringstream s(sen); 

    string word; 

    int cnt = 0;

    while (s >> word){

        v.push_back(word);

    }

    string com1 = v[0],com2 = v[v.size()-1];
    
    string com1a = "",com2a = "",com1b = "",com2b = "";

    //cout << com1 << " " << com2 << '\n';

    bool chk = 0;

    for(auto x : com1){

        if(x != 'a' && x != 'e' && x != 'i' && x != 'o' && x != 'u' && !chk){

            com1a += x;

        }else{

            com1b += x;
            
            chk = 1;


        }

    }

    chk = 0;

    for(auto x : com2){

        if(x != 'a' && x != 'e' && x != 'i' && x != 'o' && x != 'u' && !chk){

            com2a += x;

        }else{

            chk = 1;

            com2b += x;

        }

    }

    //cout << com1a << " " << com1b << " " << com2a << " " << com2b << "\n" ;

    cout << com1a+com2b+" ";

    for(int i=1;i<v.size()-1;i++){

        cout << v[i] << " ";

    }
    
    cout << com2a+com1b;

    return 0;
}