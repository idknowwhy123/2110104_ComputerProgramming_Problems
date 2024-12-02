#include<bits/stdc++.h>
using namespace std;

unordered_map<string,string> umap;

int main(){

    int n;

    cin >> n;

    umap["Robert"] = "Dick"; umap["William"] = "Bill"; umap["James"] = "Jim";
    umap["John"] = "Jack"; umap["Margaret"] = "Peggy"; umap["Edward"] = "Ed";
    umap["Sarah"] = "Sally"; umap["Andrew"] = "Andy"; umap["Anthony"] = "Tony";
    umap["Deborah"] = "Debbie";umap["Dick"] = "Robert"; umap["Bill"] = "William"; 
    umap["Jim"] = "James"; umap["Jack"] = "John"; umap["Peggy"] = "Margaret"; umap["Ed"] = "Edward";
    umap["Sally"] = "Sarah"; umap["Andy"] = "Andrew"; umap["Tony"] = "Anthony";
    umap["Debbie"] = "Deborah";

    for(int i=0;i<n;i++){

        string s;

        cin >> s;

        if(umap.find(s) == umap.end()){

            cout << "Not found\n";

            continue;

        }

        cout << umap[s] << "\n";

    }



    return 0;
}