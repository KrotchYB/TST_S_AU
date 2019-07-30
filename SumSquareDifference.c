#include<stdio.h>
#include<math.h>

int main(){
	
	int i;
	long int count1=0,count2=0;
	
	for(i =1 ; i< 101 ; i++){
		count1 += i;
	}
	count1 = pow(count1,2);
	printf("%d\n",count1);//toplam kare
	
	
	for(i = 1 ; i<101 ; i++){
		count2  += pow(i,2);
	}
	printf("%d\n",count2);
	
	printf("--->DIFFERENCE-->%d\n",(count1-count2));
	
	
	
	return 0;
}
