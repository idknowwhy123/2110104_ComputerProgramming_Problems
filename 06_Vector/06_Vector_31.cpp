#include<bits/stdc++.h>
using namespace std;

struct table{
    
    int x,y;

};

unordered_map<string,table> v;

bool chk[6][6] ={};

string arr[6] = {};

string pls[6][6] = {};

string bingo(int x,int y){

    string ans = "";

    if(chk[x][0] == 1 && chk[x][1] == 1 && chk[x][2] == 1 && chk[x][3] == 1 && chk[x][4] == 1)ans += "1";

    if(chk[0][y] == 1 && chk[1][y] == 1 && chk[2][y] == 1 && chk[3][y] == 1 && chk[4][y] == 1)ans += "2";

    if(chk[0][0] == 1 && chk[1][1] == 1 && chk[2][2] == 1 && chk[3][3] == 1 && chk[4][4] == 1)ans += "3";

    if(chk[0][4] == 1 && chk[1][3] == 1 && chk[2][2] == 1 && chk[3][1] == 1 && chk[4][0] == 1)ans += "4";

    if(ans == "")ans += "0";

    return ans;

}

int main(){

    chk[2][2] = 1;

    for(int i=0;i<5;i++){

        cin >> arr[i];

    }

    for(int i=0;i<5;i++){

        for(int j=0;j<5;j++){

            string tmp;

            cin >> tmp;

            v[arr[j]+tmp] = {i,j};

            pls[i][j] = arr[j]+tmp;

        }

    }

    /*for(auto x : v){

        cout << x.num << ' ' << x.x << ' ' << x.y << '\n';

    }*/

    string ball,ans;

    int cnt = 0,x,y;

    while(cin >> ball){

        cnt++;

        if(v.find(ball)!=v.end()){

            x = v[ball].x;

            y = v[ball].y;

            chk[x][y] = 1;

            ans = bingo(x,y);   

            if(ans != "0")break;

        }
        
    }

    cout << cnt << '\n';

    for(int i=0;i<ans.size();i++){

        if((x != 2 && ans[i] == '1') || (ans[i] == '2' && y != 2)){

            if(ans[i] == '1')cout << pls[x][0] << ", " << pls[x][1] << ", " << pls[x][2] << ", " << pls[x][3] << ", " << pls[x][4] << '\n';

            else if(ans[i] == '2')cout << pls[0][y] << ", " << pls[1][y] << ", " << pls[2][y] << ", " << pls[3][y] << ", " << pls[4][y] << '\n';

            else if(ans[i] == '3')cout << pls[0][0] << ", " << pls[1][1] << ", " << pls[3][3] << ", " << pls[4][4] << '\n';

            else cout << pls[4][0] << ", " << pls[3][1] << ", " << pls[1][3] << ", " << pls[0][4] << '\n';

        }else{

            if(ans[i] == '1')cout << pls[x][0] << ", " << pls[x][1] << ", " << pls[x][3] << ", " << pls[x][4] << '\n';

            else if(ans[i] == '2')cout << pls[0][y] << ", " << pls[1][y] << ", " << pls[3][y] << ", " << pls[4][y] << '\n';

            else if(ans[i] == '3')cout << pls[0][0] << ", " << pls[1][1] << ", " << pls[3][3] << ", " << pls[4][4] << '\n';

            else cout << pls[4][0] << ", " << pls[3][1] << ", " << pls[1][3] << ", " << pls[0][4] << '\n';

        }
    }

    return 0;
}