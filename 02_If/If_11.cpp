#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);cin.tie(0);

    string a;

    cin >> a;


    //cout << num;

    if(a.size()>2)cout << "Error";
    else {
        int num = std::stoi(a,nullptr);
        if(a == "01" || a == "02" || a == "51" || a == "53" || a == "55" || a == "58")cout << "OK";
        else if(num >= 20 && num <= 40)cout << "OK";
        else cout << "Error";
    }
    return 0;
}