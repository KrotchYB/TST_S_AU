#include<stdio.h>
#include<stdlib.h>

int max(int a[]){
	
	int b= a[0];
	int i;
	
	for(i=0; i<10 ; i++){
		
		if(a[i]>b){
			b=a[i];
		}
	}
	
	return b;
	
}

int min(int a[]){
	
	int b= a[0];
	int i;
	
	for(i=0; i<10 ; i++){
		
		if(a[i]<b){
			b=a[i];
		}
	}
	
	return b;
	
}





int main(){
	
	int a[10];
	
	int l,i;
	
	for(i=0; i<10; i++){
	
	a[i] = 10 + rand()%90;
	printf("--->%d	a[%d]\n",a[i],i);
	
}

	l=a[9];
	printf("LastNumber-->%d\n",l);
	
	for(i=0; i<10; i++){
	
	if(a[i] < l){
		printf("-->%d\n",a[i]);
	}
}
	
	
	printf("------------>MIN %d\n",min(a));
	printf("------------>MAX %d\n",max(a));
	
	
	//getch();
	return 0;
}
