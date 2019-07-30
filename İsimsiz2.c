#include <stdio.h>
#include <stdlib.h>


int max(int a[]){
	
	int i,x;
	x=a[0];
	for(i = 0; i < 10 ; i++){
		
		if(a[i] > x){
			
			x = a[i];
		}
	}
	
	return x;
}

int min(int a[]){
	
	int i,x;
	x=a[0];
	for(i = 0; i < 10 ; i++){
		
		if(a[i] < x){
			
			x = a[i];
		}
	}
	
	return x; 
}


int main(){
	
	FILE *ptr;
	int a[10];
	int i,max1,min1;
	
	ptr=fopen("deneme.txt","w");
	
	if(ptr == NULL){
		printf("ERROR!");
		exit(1);
	}
	else{
		printf("CORRECT!");
		
	}
	
	for(i = 0; i < 10; i++){
		
		a[i]=10+rand()&90;
		fprintf(ptr,"--->%d	a[%d]\n",a[i],i);
	}
	
	max1 = max(a);
	min1 = min(a);
	

	
	fprintf(ptr,"------->MAX-->%d\n",max1);
	fprintf(ptr,"------->MIN-->%d\n",min1);
	
	fclose(ptr);
	
	return 0;	
}







