#include<stdio.h>
int main(){
	int am=1000;
	int n,m,dm,wd;
	scanf("%d",&n);
	switch(n){
		case 1:
			printf("yourr avl bal is %d",am);
			break;
		case 2:
			printf("enter money to deposit");
			scanf("%d",&dm);
			am=am+dm;
			break;
		case 3:
			printf("enter money to withdrawl:");
			scanf("%d",&wd);
			if(wd>am && wd==0){
			
			   printf("insufficient");
		   }
			am=am-wd;
			printf("%d",am);
			break;
       		
        case 4:
        	printf("exit");
        	break;
        default:
        	printf("invalid");
				
			
	}
	return 0;
}
