#include<stdio.h>
int main(){
    int s,i,j,k;
    scanf("%d",&s);
    for(i=s;i>=1;i--)
    {
        for(j=1;j<i;j++){
            printf(" ");
        }
        for(k=i;k<=s;k++){
            printf("#");
        }
        printf("\n");
        
    }
    return 0;
}
