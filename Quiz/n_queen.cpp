#include<bits/stdc++.h>
using namespace std; 

int n;

char arr[25][25] = {};

char arr2[25][25] = {};

void queen(int stx,int sty){

    for(int x=stx+1;x<n;x++){
        
        if(arr[x][sty] == 'Q')arr2[stx][sty] = '-';

    }

    for(int x=stx-1;x>=0;x--){
        
        if(arr[x][sty] == 'Q')arr2[stx][sty] = '-';

        //cout << stx << sty << "\n";

    }

    for(int y=sty+1;y<n;y++){
        
        if(arr[stx][y] == 'Q')arr2[stx][sty] = '-'; 

    }

    for(int y=sty-1;y>=0;y--){
       
        if(arr[stx][y] == 'Q')arr2[stx][sty] = '-';

    }

    //////////////////////////////////////

    int cnt1 = 0,cnt2 = 0,cnt3 = 0,cnt4 = 0;

    for(int x=stx+1;x<n;x++){

        cnt1++;

        if(arr[x][sty+cnt1] == 'Q')arr2[stx][sty] = '-';

        if(cnt1>n)break;

    }

    for(int x=stx-1;x>=0;x--){
        
        cnt2++;

        if(arr[x][sty-cnt2] == 'Q')arr2[stx][sty] = '-';
        
        //cout << stx << " " << sty << " " << cnt2 << "\n";

        if(sty-cnt2<0)break;

    }

    for(int y=sty+1;y<n;y++){

        cnt3++;

        if(arr[stx-cnt3][y] == 'Q')arr2[stx][sty] = '-';

        if(stx-cnt3<0)break;

    }

    for(int y=sty-1;y>=0;y--){

        cnt4++;

        if(arr[stx+cnt4][y] == 'Q')arr2[stx][sty] = '-';

       // cout << stx << " " << y << " " << cnt4 << "\n";

        if(cnt4>n)break;

    }

    return ;

}

int main(){

    scanf("%d",&n);
    
    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){

            char tmp;

            cin >> arr[i][j];

            arr2[i][j] = arr[i][j];
        }
    }

   for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){

            if(arr[i][j]=='Q') queen(i,j);

        }
    }

    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){

           cout << arr2[i][j];

        }

        cout << "\n";
    }

    return 0;
}