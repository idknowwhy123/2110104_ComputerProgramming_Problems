#include<bits/stdc++.h>
using namespace std;

int arr[1010] = {};

int main(){

    int n,pos;

    cin >> n;

    for(int i=0;i<n*n;i++){

        cin >> arr[i];

        if(arr[i] == 0){

            pos = (i/n);

        }

    }

    int cnt = 0;

    for(int i=0;i<n*n;i++){

        for(int j=i;j<n*n;j++){

            if(arr[i] > arr[j] && arr[i] != 0 && arr[j] != 0){
                
                cnt++;
            }

        }

    }

    bool chk = 0;

    if(n%2 != 0 && cnt%2 ==0){

        cout << "YES";

    }else if(n%2 == 0 && cnt%2 == 0 && pos%2 != 0){

        cout << "YES";

    }else if(n%2 == 0 && cnt%2 != 0 && pos%2 == 0){

        cout << "YES";

    }else{

        cout << "NO";

    }
   
    return 0;
}