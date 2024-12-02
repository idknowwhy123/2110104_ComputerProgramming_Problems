#include<bits/stdc++.h>
using namespace std;

bool arr[7][7] = {};

int main(){

    vector<string> v;

    string time,tmp = "";

    cin >> time;

    time += ":";

    for(int i = 0;i<time.size();i++){

        if(time[i] == ':'){

            v.push_back(tmp);

            tmp = "";

            continue;

        }

        tmp += time[i];

    }

    int h1 = v[0][0]-'0',h2 = v[0][1]-'0',m1 = v[1][0]-'0',m2 = v[1][1]-'0',s1 = v[2][0]-'0',s2 = v[2][1]-'0';

    if(h1 == 1)arr[3][0] = 1;

    else if(h1 == 2)arr[2][0] = 1;

    int n = 8;

    for(int i = 0;i<4;i++){

        for(int j = 0;j<6;j++){

            if(j == 1){

                if(h2 >= n){

                    //cout << h2 <<'\n';

                    h2 -= n;

                    arr[i][j] = 1;

                }

            }else if(j == 2){

                if(m1 >= n && i > 0){

                    //cout << m1 <<'\n';

                    m1 -= n;

                    arr[i][j] = 1;

                }

            }else if(j == 3){

                if(m2 >= n){

                    m2 -= n;

                    arr[i][j] = 1;

                }

            }else if(j == 4){

                if(s1 >= n && i > 0){

                    s1 -= n;

                    arr[i][j] = 1;

                }

            }else if(j == 5){

                if(s2 >= n){

                    s2 -= n;

                    arr[i][j] = 1;

                }

            }

        }
        
        n/=2;

    }

    for(int i=0;i<4;i++){

        for(int j=0;j<6;j++){

            if(i == 0 && (j == 0 || j == 2 || j == 4) || (i == 1 && j == 0))cout << " ";

            else cout << arr[i][j];

        }

        cout  << '\n';

    }

    return 0;
    
}