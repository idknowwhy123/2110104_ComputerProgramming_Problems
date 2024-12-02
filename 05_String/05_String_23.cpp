#include<bits/stdc++.h>
using namespace std;

int main(){

    string lp;

    int n;

    cin >> lp >> n;

    string st = "", nd = "", rd = "";

    for(int i=0;i<lp.size();i++){

        if(i == 0)st+=lp[i];

        else if(i > 0 && i < 3)nd += lp[i];

        else if(i > 3 && i < 7)rd += lp[i];

    }

    int num = stoi(rd);

    for(int i=0;i<n;i++){

        num+=1;

        if(num > 999){

            num = 0;

            nd[1] += 1;

            if(nd[1] > 'Z'){
                
                nd[1] = 'A';

                nd[0] += 1;

                if(nd[0] > 'Z'){

                    nd[0] = 'A';

                    lp[0] += 1;

                }
            }
        }
    }

    rd = to_string(num);

    while(rd.size()!=3)rd = "0"+rd;

    cout << lp[0] << nd << "-" << rd;


    /*
    int num1 = n%1000;

    int num2 = (n/1000)%26;

    int tmp = ((n/1000.0)+num2)/26.0;

    int num3 = ((tmp)%26);

    int num4 = (((n/1000.0)/26.0)/26.0);

    cout << num1 << " " << num2 << " " << num3 << " " << num4;

    

    int ans1 = stoi(st)+num4;

    int ans2 = stoi(rd)+num1;

    nd[0] = char((nd[0]+num3+'A')%91);

    nd[1] = char((nd[1]+num2+'A')%91);

    cout << ans1 << nd << "-" << ans2;

    */

    return 0;
}