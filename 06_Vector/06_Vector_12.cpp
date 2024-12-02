#include<bits/stdc++.h>
using namespace std;

deque<int> deq;

int main(){

    int n;

    cin >> n;

    //deq.push_back(n);

    while(n != 1){

        if(deq.size() >= 15){

            deq.pop_front();

        }

        deq.push_back(n);

        if(n%2 == 0){

            n = n/2;

        }else{

            n = 3*n+1;

        }

        //cout << n <<  " ";

    }

    deq.push_back(n);

    if(deq.size() >= 15){

        deq.pop_front();

    }

    while(!deq.empty()){

        if(deq.size() != 1)cout << deq.front() << "->";
        else cout << deq.front();

        deq.pop_front();

    }



    return 0;
}