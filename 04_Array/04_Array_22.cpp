#include<bits/stdc++.h>
using namespace std;

pair<int,string> arr[70] = {};

int n;

void cut(){

    for(int i=0;i<n;i++){

        if(i < n/2){

            arr[i].first+=(n/2);

        }else{

            arr[i].first-=(n/2);

        }

    }

    sort(arr,arr+n);

    return ;
}

void shuffle(){

    int cnt = 0;

    for(int i=0;i<n/2;i++){

       arr[i].first += i;

    }
    
    for(int i=n-1;i>=n/2;i--){

        arr[i].first -= cnt;

        cnt++;

    }

    sort(arr,arr+n);

    return;

}

int main(){

    cin >> n;

    for(int i=0;i<n;i++){

        string tmp;

        cin >> tmp;

        arr[i] = {i,tmp};

    }

    cin.ignore();

    string com;

    getline(cin, com);

    for(int i=0;i<com.size();i++){

        if(com[i] == 'C')cut();

        else if(com[i] == 'S')shuffle();

        else continue;

    }

    for(int i=0;i<n;i++){

        cout << arr[i].second << " ";

    }


    return 0;
}