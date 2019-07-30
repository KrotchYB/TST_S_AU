#include<stdio.h>

int main(){
	
	long int a1;
	int s1,s2,a,i;
	
	scanf("%d",&a);
	
	for(i =2 ; a != 1 ; i++){
		
		if(a%i == 0){
			
			a/=i;
			printf("%d ",i);
			i--;
		}
	}
	
	
	
	return 0;
}
