#include<stdio.h>
#define MAX 4000000

int main(){
	
	long int count1=1,count2=2,count3=3,tempC;
	int i;
	if( count1 % 2 == 0) printf("--< %d >--\n",count1);
	if( count2 % 2 == 0) 	printf("--< %d >--\n",count2);
	for(i=1;count3 < MAX; i++){
		tempC =  count1;
		count1 = count2;
		count2 += tempC;
		
		if( count2 % 2 == 0) printf("--< %d >--\n",count2);
		
		count3 += count2;
	}
	
	 printf("--<SUM>----< %d >--\n",count3);
	return 0;
}

//if( count1 % 2 == 0)
