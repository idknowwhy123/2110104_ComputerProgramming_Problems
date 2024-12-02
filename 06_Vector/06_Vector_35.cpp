#include<bits/stdc++.h>
using namespace std;

unordered_map<string,int> umap;

int main(){

    umap["soon"] = 0 ; umap["neung"] = 1 ; umap["song"] = 2 ; umap["sam"] =  3 ; umap["si"] =  4 ; umap["ha"] = 5 ; umap["hok"] = 6;
    umap["chet"] = 7; umap["paet"] = 8 ; umap["kao"] = 9 ; umap["et"] = 1 ; umap["yi"] = 2 ; umap["sip"] = 10 ; umap["roi"] = 100;
    umap["phan"] =  1000 ; umap["muen"] = 10000 ; umap["saen"] = 100000 ; umap["lan"] = 1000000;

    while(true){

        bool chk = 0;

        string th = "",num = "";

        int cnt = 0,tmp = 0,ans = 0;

        getline(cin, th);

        if(th == "q")break;

        stringstream s(th);

        while(s >> num){

            cnt++;

            if(cnt%2 == 1){

                if(num == "sip" && tmp == 0){

                    chk = 1;

                }

                tmp = umap[num];

            }else{  

                if(!chk)tmp = tmp*umap[num];

                //cout << tmp << ' ';

                ans += tmp;

                tmp = 0;

            }

        }

        //cout << num << ' ' << umap[num] << ' ';

        if(!chk)ans += umap[num]%10;
        else ans += umap[num];

        cout << ans << '\n';

    }

    return 0;
}