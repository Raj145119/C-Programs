#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char *ch;

    int i,j,k,val,a[10];
    scanf("%s",ch);
    for(i=0;i<=9;i++){
        j=0;
        k=0;
        while(ch[j]!='\0'){ 
           val = (int)ch[j];
           if(i==val)  
            k++;
            j++;
        }
        a[i]=k;
    }
    for(i=0;i<=9;i++)
        printf("%d ",a[i]);
    return 0;
}

