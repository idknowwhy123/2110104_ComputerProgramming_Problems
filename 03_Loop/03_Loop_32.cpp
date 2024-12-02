#include<bits/stdc++.h>
using namespace std;

int main(){

    unordered_map<char,int> umap;

    umap['R'] = 1;umap['Y']=2;umap['G']=3;umap['N']=4;umap['B']=5;umap['P']=6;umap['K']=7;

    int n,scr = 0;

    scanf("%d",&n);

    cin.ignore();

    for(int i=0;i<n;i++){

        string s;

        bool chk = 0,chk1 = 0;

        getline(cin, s);

        for(int j=0;j<s.size();j++){

            if(s[j] == ' ')continue;

            if(s[j] == 'R' && s[j+2] != 'R' && chk1 == 0)scr+=umap[s[j]];

            else if(s[j-2] == 'R' && s[j]!='R' && chk1 == 0){
                
                scr+=umap[s[j]];

            }else{

                if(s[j] == 'Y' && s[j-4] =='R' && chk1 == 0){scr += umap[s[j]];chk1 = 1;}

                else if(s[j] == 'G' && s[j-2] == 'Y' && s[j-4] != 'R' && chk1 == 1)scr += umap[s[j]];

                else if(s[j] == 'N' && s[j-2] == 'G' && s[j-4] == 'Y'&& chk1 == 1)scr += umap[s[j]];

                else if(s[j] == 'B' && s[j-2] == 'N' && s[j-4] == 'G' && s[j-6] == 'Y'&& chk1 == 1)scr += umap[s[j]];

                else if(s[j] == 'P' && s[j-2] == 'B' && s[j-4] == 'N' && s[j-6] == 'G' && s[j-8] == 'Y'&& chk1 == 1)scr += umap[s[j]];

                else if(s[j] == 'K' && s[j-2] == 'P' && s[j-4] == 'B' && s[j-6] == 'N' && s[j-8] == 'G' && s[j-10] == 'Y' && chk1 == 1)scr += umap[s[j]];

                else {

                    chk = 1;

                }
        
            }

        }

        if(!chk){

            cout << scr << "\n";

            scr = 0;

        }else{

            cout << "WRONG_INPUT\n";

            scr = 0;

        }

    }



    return 0;
}