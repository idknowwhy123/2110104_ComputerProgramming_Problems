#include<bits/stdc++.h>
using namespace std;

pair<int,int> arr[100000] = {};

int n;

int solve(int st,int en){

    int min = INT_MAX;

    int ans;
    
    for(int i=1;i<=n;i++){

        int tmp = 0;

        if(st < en){

            if(arr[i].first <= st && arr[i].second >= en){

                tmp = 0;

                ans = i;

            }else if(arr[i].first <= st && arr[i].second < en){

                tmp = abs(st - arr[i].second) + abs(en - st) ;

            }else if(arr[i].first > st && arr[i].second < en){

                tmp = abs(st - arr[i].second) + abs(en - st);

            }

        }else{

            if(arr[i].first >= st && arr[i].second <= en){

                tmp = 0;

                ans = i;

            }else if(arr[i].first >= st){

                tmp = abs(arr[i].first - en) + (arr[i].first + arr[i].second);

            }else if(arr[i].first < st && arr[i].second > en){

                tmp = abs(en - arr[i].first) + abs(arr[i].second - arr[i].first);
                
            }
            
        }
        
            if(tmp<min){

                ans = i;

                min = tmp;
            }

       cout << tmp << " ";

    }
    cout << "\n";

    return ans;

}



int main(){

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        int m,st,en;

        scanf("%d %d %d",&m,&st,&en);

        arr[m] = {st,en};

    }

    int m;

    scanf("%d",&m);

    for(int i=0;i<m;i++){
        
        int st,en;

        scanf("%d %d",&st,&en);

        int ans = solve(st,en);

        cout << ans << "\n";

    }

    return 0;
}