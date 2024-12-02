#include<bits/stdc++.h>
using namespace std;

set<string> v;

void permu(string s,int indx){

    if(indx == s.size()-1){

        v.insert(s);

        return;

    }

   for(int i=0;i<s.size();i++){

        swap(s[i],s[indx]);

        permu(s,indx+1);

        swap(s[indx],s[i]);
   }

}

int main(){

    string n;

    cin >> n;

    permu(n,0);

    for(auto x : v){

        cout << x << ' ';
          
    }



    return 0;
}