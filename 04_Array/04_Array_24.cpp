#include<bits/stdc++.h>
using namespace std;

vector<int> v;

vector<int> mark;

bool arr[101010] = {};

void print(){

    for(auto x : v){

        cout << x << " ";

    }

    cout << "\n";

    return ;

}

int main(){

    int n;

    cin >> n;

    for(int i=0;i<n;i++){

        int num;

        cin >> num;

        v.push_back(num);

        mark.push_back(num);

    }

    print();

    sort(mark.begin(),mark.end());
    
    int tmp = n-1,cnt = 0;

   // cout << mark[n-1] << " " << v[n-1];

    while(v != mark){
        
        for(int i=n-1;i>=0;i--){

            if(v[i] == mark[i] && v[i] == mark[tmp]){

                //cout << tmp << " " << i << "\n";

                --tmp;

                ++cnt;

                arr[i] = 1;

            }

            if(v[i] == mark[tmp]){

                //cout << tmp << " " << i << " " << v[i] << " " << mark[tmp];

                //break;

                reverse(v.begin(),v.end()-(n-i-1));

                if(n-i-1 != n-1)print();

                reverse(v.begin(),v.end()-cnt);

                if(cnt != n-1)print();

            }


        }

        //break;

        //print();
        
        //cout << v[0] << " " << mark[0] << "\n" << v[n-1] << " " << mark[n-1] << "\n"; 

    }
    
    //print();

    return 0;
}