#include<stdio.h>
int main(){
    int a,q;
    scanf("%d",&a);
    q=a/5;
    if(a%5==0){
        printf("%d",q);
        
    }
    else{
        printf("%d",q+1);
    }
    return 0;
}
