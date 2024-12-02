#include<bits/stdc++.h>
using namespace std;

struct party{

    string name;

    long long score,lst;
    
    double left;

    bool operator < (const party &x)const{

        if(lst == x.lst)return score > x.score;

        else return lst > x.lst;

    }
};

bool comp(party &x,party&y){

    return x.left > y.left;

}

vector<pair<long long,string>> v;

vector<party> ans;

int main(){

    double cnt = 0,sum = 0,mx;

    string name;

    long long score;

    while(1){

        cin >> name;

        if(name == "END")break;

        cin >> score;

        sum += score;

        v.push_back({score,name});

    }

    int sapa = 100;

    double avg = sum/100;

    for(auto x : v){

        long long tmp = (x.first/avg);

        sapa -= tmp;

        double lft = (x.first/avg)-floor(x.first/avg);

        ans.push_back({x.second,x.first,tmp,lft});

    }

    //cout << sapa << '\n';

    if(sapa > 0){

        sort(ans.begin(),ans.end(),comp);

        for(int i=0;i<ans.size();i++){

            sapa--;

            ans[i].lst = ans[i].lst+1;

            if(sapa == 0)break;

        }

    }
    
    sort(ans.begin(),ans.end());

    for(auto x : ans){

        if(x.lst == 0)continue;

        else cout << x.name << ' ' << x.lst << ' ' << x.score <<  '\n';

    }

    return 0;
}
/*
ANT 81718    
CC 7759
CPK 212676
CRR 4433
CTP 192497
GRE 22047
KK 14438851
KLT 7959
KTP 175182
KVM 10891
MAI 249731
MTM 33558
NTM 10875
PAK 23381
PCC 602645
PCH 59571
PCM 273428
PCP 925349
PCT 134833
PCW 17686
PDT 10690
PJT 1138202
PKK 58010
PKT 57098
PLE 53706
PLG 156493
PLK 10158
PLS 17076
PPC 5022
PPC 8818
PPR 537625
PPT 44131
PRP 3455
PRT 32428
PSK 5534
PSM 177379
PSN 10001
PT 10962522
PTC 9174
PTH 184817
PTM 33770
PTR 67692
RJT 72719
RPD 11010
RPL 33844
RPT 12601
RSC 130147
RTS 4766408
RVT 6172
SD 10410
SKP 5860
SMC 6509
SMP 11816
SRT 351376
TCN 45321
TGK 5561
TKN 35094
TLM 79190
TPD 103472
TPN 13605
TPR 82965
TRT 72988
TSL 23721
TSM 10463
TST 340178
TTM 21022
TTT 201411
END
*/