#include<bits/stdc++.h>
using namespace std;

int indx = 0;

queue<pair<int,int>> q;

int main(){

    int n;

    pair<int,int> tmp;

    double sum = 0,cnt = 0;

    cin >> n;

    for(int i=0;i<n;i++){

        string cmd;

        int num;

        cin >> cmd;

        if(cmd == "reset"){

            cin >> indx;

        }else if(cmd == "new"){

            cin >> num;

            q.push({indx,num});

            cout << ">> ticket " << indx << '\n'; 
            
            indx++;

        }else if(cmd == "next"){

            tmp = q.front();q.pop();

            cout << ">> call " << tmp.first << '\n';

        }else if(cmd == "order"){

            cin >> num;

            cout << ">> qtime " << tmp.first << ' ' << num-tmp.second << '\n';

            sum += num-tmp.second;

            cnt++;

        }else if(cmd == "avg_qtime"){

            double avg = sum/cnt;

            avg = round(avg*100.0)/100.0;

            cout << ">> avg_qtime " << avg <<'\n';

        }

    }

    return 0;
    
}