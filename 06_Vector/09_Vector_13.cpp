#include <bits/stdc++.h>
using namespace std;

vector<string> split(string line, char delimiter){

    vector<string> ans;

    string tmp = "";

    for(auto x : line){

        if(x == delimiter){

            if(!tmp.empty())ans.push_back(tmp);

            tmp = "";

            continue;

        }

        tmp += x;

    }

    if(!tmp.empty())ans.push_back(tmp);

    return ans;

}

int main(){

    string line;

    getline(cin, line);

    string delim;

    getline(cin, delim);

    for (string e : split(line, delim[0])){

        cout << '(' << e << ')';
        
    }

    return 0;
}
