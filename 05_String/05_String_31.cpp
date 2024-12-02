#include<bits/stdc++.h>
using namespace std;

unordered_map<int,string> umap;

string plusstr(string str,int len){

    int i = 0,cnt = 0;

    for(auto x : str){

        if(isalpha(x))cnt++;

    }

    while(cnt != len*4){

        str += str[i];

        if(isalpha(str[i]))cnt++;

        i++;

        if(i > str.size())i = 0;

    }

    return str;

}

string enstr(string code){

    string en = "";

    int i = 0;

    for(auto x : code){

        if(isdigit(x))i = x-'0';

        else if(x == '-')i = 10;

        else i = 11;

        en += umap[i];

    }

    return en;

}

string encode(string code,string enformat){

    int cnt = 0;

    for(int i=0;i<code.size();i++){

        if(!isalpha(code[i]))continue;

        if(enformat[cnt] == 'U'){
            
            code[i] = toupper(code[i]);

            cnt++;
            
        }else if(enformat[cnt] == 'L'){
            
            code[i] = tolower(code[i]);

            cnt++;
        }

    }

    return code;
}

string decode(string code){

    string def = "",tmp = "",ans = "";

    for(auto x : code){

        if(!isalpha(x))continue;

        if(isupper(x))def += 'U';

        else def += 'L';

    }

    for(auto x : def){

        tmp += x;

        if(tmp.size() == 4){

            for(auto i : umap){

                if(i.second == tmp){

                    if(i.first == 10)ans += "-";

                    else if(i.first == 11)ans += ",";

                    else ans += to_string(i.first);

                }

            }

            tmp = "";

        }

    }

    return ans;

}

int main(){

    umap[0] = "UUUU";umap[1] = "UUUL";umap[2] = "UULU";umap[3]="UULL";umap[4]="ULUU";umap[5]="ULUL";
    umap[6] = "ULLU";umap[7] = "ULLL";umap[8] = "LUUU";umap[9]="LUUL";umap[10]="LULU";umap[11] ="LULL";

    string fake,com,cd;

    getline(cin, fake);

    while(cin >> com){

        cin.ignore();

        if(com == "E"){

            getline(cin, cd);

            int n = cd.length();

            string fakedup = plusstr(fake,n);

            string en = enstr(cd);

            cout << encode(fakedup, en) << "\n";

        }else{

            getline(cin, cd);

            cout << decode(cd) << "\n";

        }

    }
    
    return 0;
}