#include<stdio.h>
#define MAX 1000

int main(void){
	int count=0;
	int i;
	
	for(i=0;i<1000;i++){
		
		if((i%3) == 0 || (i%5) == 0){
			count += i;
		}
	}
	
	printf("COUNT-> THE SUM OF ALL THE MULTIPLES OF 3 OR 5 BELOW 1000---> %d\n", count);
	
	
	return 0;
}
