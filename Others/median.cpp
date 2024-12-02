#include<bits/stdc++.h>
using namespace std;

int arr[6]= {};

int main(){
  
  cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] ;
  
  sort(arr,arr+5);
  
  cout << arr[2];
  
  return 0;
}