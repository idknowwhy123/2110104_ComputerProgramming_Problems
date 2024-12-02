#include<stdio.h>

int main(){

    int n, d = 2;

    scanf("%d",&n);

    while(n != 1){

        if(n%d == 0){

            n/=d;

            printf("%d ",d);

        }else{

            d++;

        }
    }
    
    return 0;
}