#include<bits/stdc++.h>
using namespace std;

set<int> su;

vector<int> v(500000, 0);

set<int> sd;

int main(){

    string nums;
    
    bool chk = 0;

    int cnt = 0;

    while(getline(cin, nums)){

        if(nums == "end")break;

        stringstream s(nums);

        string n;

        cnt++;

        while(s >> n){

            int num = stoi(n);

            su.insert(num);

            v[num]++;

            if(!chk)sd.insert(num);

            else if(sd.find(num)!=sd.end())sd.erase(sd.find(num));

        }

        
        chk = 1;
        
    }

    std::cout << "U:";

    if(su.empty())cout << " empty set";

    for(auto x : su){

        std::cout << " " << x;

    }

    std::cout << "\nI:";

    for(int i=0;i<v.size();i++){

        if(v[i] >= cnt){
            
            std::cout << " " << i;

            chk = 0;

        }

    }

    if(chk)cout << " empty set";

    std::cout << "\nD:";

    for(auto x : sd){

        std::cout << " " << x;

    }

    if(sd.empty())cout << " empty set";

    return 0;
}