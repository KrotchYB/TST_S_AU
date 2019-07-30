#include<stdio.h>

int getLargePrime(int a[],int b);

int is_prime(int num);

int main(void){
	int a[12];
	
 	long long int getV = 600851475143;
	int i;
	for(i = 0; i<12 ; i++ ){
		
		a[i] = (getV%10);
		getV /= 10;
	}
	
	for(i=11 ; i>=0 ; i--){
		printf("-%d-",a[i]);
	}
	
	printf("\nLargestPrimeFactor => %d\n",getLargePrime(a,12));
	
	
	
}


int getLargePrime(int a[],int b){
	
	int i,j,test;
	int count = 0;
	int count2 = 0;
	for(i=0; i<b ; i++){
		count += a[i];	
	}
	
	for (i =0 ; i < 10; i++){
			
			for(j = 0; j < 12 ; j++){
			
				if(a[j] == i){
					count -= a[j];
					if( is_prime(count) == 1) {
			
			 return count;
			}
					a[j] = 0;
				
					break;
				}
			}
			
			
		}
	
}
	
int is_prime(int num){
 
	int i;	
	
	if( num <= 1) return 0;
	if( num % 2 == 0 && num > 2) return 0;
	
	for(i = 3 ; i < num /2 ; i+= 2)
	{
		if ( num % i == 0)return 0;
	}
	return 1;
 }


