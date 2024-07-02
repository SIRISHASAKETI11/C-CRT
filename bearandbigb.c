#include <stdio.h>
 
int main() {
    int a,b,c,d,s=0;
    scanf("%d\n%d",&a,&b);
    while(a<=b){
        b*=2;
        a*=3;
        s++;
      
    }
    printf("%d",s);
    
    
 
 
    return 0;
}
