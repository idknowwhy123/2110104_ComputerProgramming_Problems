#include<bits/stdc++.h>
using namespace std;

int arr[510] = {};

vector<int> v;

int main(){

    int n,mx = -1000;

    cin >> n;

    for(int i=0;i<n;i++){

        cin >> arr[i];

    }

    for(int i=0;i<n;i++){

        int sum = 0;

        for(int j = i;j<n+i;j++){

            int indx = j;

            if(indx >= n)indx = j-n-1;

            int com = indx + 1;

            if(com == n)com = 0;
            
            sum += arr[indx];

            if(arr[com] < arr[indx])break;

        }

       // cout << sum << ' ';

        mx = max(sum,mx);

    }

    //cout << '\n';

    for(int k=0;k<n;k++){

        vector<int> v;

        for(int i=0;i<n;i++){

            if(i == k)continue;

            v.push_back(arr[i]);

        }

        for(int i=0;i<v.size();i++){

            int sum = 0;

                for(int j = i; j<v.size()+i ;j++){

                    int indx = j;

                    if(indx >= v.size())indx = j-v.size();
                    
                    //cout << indx << ' ';

                    int com = indx + 1;

                    if(com == v.size())com = 0;
            
                    sum += v[indx];

                    //cout << v[indx] << ' ';

                    if(v[com] < v[indx])break;

                }//cout << '\n';

            mx = max(sum,mx);

            //cout << sum << ' ';

        }
        
        //cout << '\n';
        
        v.clear();

    }

    cout << mx;

    return 0;
}