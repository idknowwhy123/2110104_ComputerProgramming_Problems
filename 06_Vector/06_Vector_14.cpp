#include<bits/stdc++.h>
using namespace std;

vector<int> v(100000, 0);

int main(){

    int mx = 0,cnt = 0,k = 0;

    string num,n;

    getline(cin, num);

    stringstream s(num);

    while(s >> n){

        int i = stoi(n);
        
        if(v[i] == 0)cnt++;

        v[i]+=1;        

        if(i > mx)mx = i;

    }

    cout << cnt << '\n';

    for(int i=0;i<=mx;i++){

        if(v[i] == 0)continue;

        else{

            k++;
        
            cout << i << " ";

        }

        if(k >= 10)break;

    }

    return 0;
}