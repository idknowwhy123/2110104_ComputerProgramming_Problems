#include<bits/stdc++.h>
using namespace std;

struct student{

    string id;

    double gpax;

    char s1,s2,s3;

};

int main(){

    student n,m;

    bool chk = 0;

    cin >> n.id >> n.gpax >> n.s1 >> n.s2 >> n.s3;

    cin >> m.id >> m.gpax >> m.s1 >> m.s2 >> m.s3;

    if(n.s1 == m.s1 && n.s2 == m.s2 && n.s3 == m.s3 && n.gpax == m.gpax)cout << "Both";

    else if(n.s1 == 'A' && n.s2 <= 'C' && n.s3 <= 'C' && (m.s1 != 'A' || m.s2 > 'C' || m.s3 > 'C'))cout << n.id;

    else if(m.s1 == 'A' && m.s2 <= 'C' && m.s3 <= 'C' && (n.s1 != 'A' || n.s2 > 'C' || n.s3 > 'C'))cout << m.id;

    else if(n.s1 == 'A' && m.s1 == 'A' && n.s2 <= 'C' && n.s3 <= 'C' && m.s2 <= 'C' && m.s3 <= 'C')chk = 1;

    else cout << "None";

    if(chk){
        
        if(m.gpax > n.gpax)cout << m.id;

        else if(n.gpax > m.gpax)cout << n.id;

        else if(n.s2 < m.s2)cout << n.id;

        else if(m.s2 < n.s2)cout << m.id;

        else if(n.s3 < m.s3)cout << n.id;

        else if(m.s3 < n.s3)cout << m.id;

    }

    return 0;
}