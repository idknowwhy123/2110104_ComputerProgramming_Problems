#include<bits/stdc++.h>
using namespace std;

int arr[1010];

struct indx{

    int num,st,en,range;

    bool operator < (const indx &x)const{

        if(range == x.range)return num < x.num;

        else if(num == x.num)return st < x.st;

        else return range > x.range;
    }

};

vector<int> v;

vector<indx> res;

int main(){

    int cnt = 0,sti = 0,eni = 0,tmp = 0,mx = INT_MIN;

    string str,num;

    getline(cin, str);

    stringstream s(str);

    while(s >> num){

        v.push_back(stoi(num));

    }

    v.push_back(INT_MAX);

    for(int i=0;i<v.size()-1;i++){
        
        if(v[i] == v[i+1]){

            eni = i+2;

            cnt++;

        }else{

            tmp = i;

            if(cnt == 0){

                eni = tmp + 1;

                mx = max(mx,eni-tmp);

                //cout << v[i] << " " << tmp << " " << eni << "\n";

                res.push_back({v[i],tmp,eni,eni-tmp});

            }else{

                sti = eni - cnt -1;

                mx = max(mx,eni-sti);
                            
                //cout << v[i] << " " << sti << " " << eni << "\n";

                res.push_back({v[i],sti,eni,eni-sti});

            }

            cnt = 0;

        }

    }

    sort(res.begin(),res.end());
    
    for(auto x : res){

        if(x.range == mx)cout << x.num << " --> x[ " << x.st << " : " << x.en << " ]\n";

    }
    
    return 0;
}