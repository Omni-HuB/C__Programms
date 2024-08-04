#include<stdio.h>

void main(){
int n;
scanf("%d",&n);

printf("*\n");
for (int i=2;i<=n;i++){
        for (int j=i-1;j>0;j--){

            printf("_");
        }
    printf("*\n");

}



}