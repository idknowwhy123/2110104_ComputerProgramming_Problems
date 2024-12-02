#include<bits/stdc++.h>
using namespace std;

int arr[510] = {};

int main(){
    
    int n, mx = -1000;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){

        int sum = 0;

        for(int j = 0; j < n; j++){

            int indx = (i + j) % n;

            int com = (indx + 1) % n;

            sum += arr[indx];

            if(arr[com] < arr[indx]) break;
        }

        mx = max(sum, mx);
    }

    for(int k = 0; k < n; k++){

        vector<int> v;

        for(int i = 0; i < n; i++){

            if(i != k) v.push_back(arr[i]);

        }

        for(int i = 0; i < v.size(); i++){ 

            int sum = 0;

            for(int j = 0; j < v.size(); j++){

                int indx = (i + j) % v.size();

                int com = (indx + 1) % v.size();

                sum += v[indx];
                
                if(v[com] < v[indx]) break;

            }

            mx = max(sum, mx);
        }
    }

    cout << mx << '\n';

    return 0;
}
