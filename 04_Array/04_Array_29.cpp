#include<bits/stdc++.h>
using namespace std;

struct dot{

    int x1,y1,x2,y2,num;

};

dot arr[1010] = {};

int overlap(int x1,int x2,int y1,int y2,int x3,int x4,int y3,int y4){

    int l = max(x1,x2);

    int r = min(x3,x4);

    int b = max(y1,y2);

    int t = min(y3,y4);

    if(r < l || t < b)return 0;

    else return((r - l) * (t - b));

}


int main(){

    int n;

    cin >> n;

    for(int i=0;i<n;i++){

        cin >> arr[i].x1 >> arr[i].y1 >> arr[i].x2 >> arr[i].y2; 

        arr[i].num = i;

    }

    int chk[500][500] = {};

    int mx = 0;

    for(int i = 0;i<n;i++){

        for(int j = i+1;j<n;j++){

            int tmp = overlap(arr[i].x1 ,  arr[j].x1 , arr[i].y1 , arr[j].y1 , arr[i].x2 , arr[j].x2 , arr[i].y2 , arr[j].y2);

            chk[i][j] = tmp;

            mx = max(tmp,mx);
            
        }
    }

    if(mx == 0)cout << "No overlaps";
    else{
        cout << "Max overlapping area = "<< mx << '\n';
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(chk[i][j] == mx)cout << "rectangles " << i << " and " << j << '\n';
            }
        }

    }





    return 0;
}