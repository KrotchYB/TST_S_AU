#include<stdio.h>
#define MAX  1000
#define MAX2 988




int main(){
	int aVal[MAX];
	int sumA[MAX2];
	
	int i,j;
	
	for(i = 0; i < 1000; i++){
				
			scanf("%d",&aVal[i]);
				
	}	
	
	for(i = 0; i < 988; i++){
		
		for(j = i; j < i+13; j++){
			
			sumA[i] += aVal[j];
		}
		
	}
	
	for(i = 0; i < 988; i++){
		
		for(j = i; j < i+13; j++){
			
			printf("%d->",aVal[j]);
		}
		
		printf("\n");
	}
	
	
	
	
	
	return 0;
}
