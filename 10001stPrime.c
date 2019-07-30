#include<stdio.h>

int is_prime(long long int i);

int main(){
	
	long long int i,count = 0;
	
	
	for(i= 0 ; ; i++){
		
		if(is_prime(i)==1){
			
			count++;
			if(count == 10001) {
				
				prinf("---->10001st Prime------->%d\n",i);
				break;
			}
		}	
		
	}
	
 return 0;	
}



int is_prime(long long int num){
 
	long long int  i;	
	
	if( num <= 1) return 0;
	if( num % 2 == 0 && num > 2) return 0;
	
	for(i = 3 ; i < num /2 ; i+= 2)
	{
		if ( num % i == 0)return 0;
	}
	return 1;
 }

