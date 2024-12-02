#include <bits/stdc++.h>
using namespace std;

int arr[7][7] = {};

bool chk[7][7] = {};

void floodfill(int r, int l, int e) {

        

        if(r > 6 || l > 6 || r < 0 || l < 0 || arr[r][l] == 1 || chk[l][r] == 1){

            return;

        }else{

            //cout << arr[r][l] << " ";

            arr[r][l] = e;

            chk[l][r] = 1;

            floodfill(r+1,l,e);

            floodfill(r-1,l,e);

            floodfill(r,l+1,e);

            floodfill(r,l-1,e);

            return;

        }

        return;

}

int main() {

    ios_base::sync_with_stdio(0);cin.tie(0);

    for(int i=0;i<7;i++){

        for(int j=0;j<7;j++){

            cin >> arr[i][j];

        }

    }

    int r,l,e;

    cin >> r >> l >> e;

    //cout << arr[r][l] << " ";

    //cout << r << l << e;

    floodfill(r,l,e);

    for(int i=0;i<7;i++){

        for(int j=0;j<7;j++){

            cout <<  arr[i][j] << " ";

        }
        cout << "\n";
    }
    
    return 0;
}