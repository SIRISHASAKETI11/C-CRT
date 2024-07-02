
#include <stdio.h>
 
int main() {
 
    int n,i,b[1000],c[1000],d[1000],s;
    s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d%d",&b[i],&c[i],&d[i]);
    }
    for(i=0;i<n;i++){
       if( b[i]+c[i]+d[i]>=2){
           s=s+1;
           
        
    }
}
printf("%d",s);
    return 0;
}
