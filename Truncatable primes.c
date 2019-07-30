#include <stdio.h>
#include <math.h>

long int is_prime(long int );
long int l_word(long int );
long int new_number(long int ,long int );

int main(){
	
	long long int l_Word,new_Number;
	long long int num, i, j, a, count = 0;
	

	
	for( j = 10000000000; j < 100000000000 ; j++){
		
		printf("THE VALUE IS ==>%d\n\n",j);
		l_Word = l_word( j );
		num = j;	
		for( i = 1; i <= l_Word ; i++ ){
		
			
			a = is_prime(num);
			if( a == 1){
			
				printf(" PRIME PART ==>%d",num);
				count++;
				
				a = 0;
		
			}
			else break;
			
			if( count == 11) break;
			num = new_number(num , (l_Word - i));
		
		}
		if( count == 11) {
			
			break;
			printf("\n\n ------> %d <-----------\n",j);
		}
		printf("\n\n");
		
	}
	
	
	return 0;
}

long int new_number(long int a,long int b){
	
	long int i = pow(10 , b);
	a %= i;
	return a;	
}

long int l_word(long int num){
	
	int count = 1;
	
	for(;num > 9;){
		
		count++;
		num /= 10;
				
	}
	
	return count;
}

long int is_prime(long int num){
 
	long int  i;	
	
	if( num <= 1) return 0;
	if( num % 2 == 0 && num > 2) return 0;
	
	for(i = 3 ; i < num /2 ; i+= 2)
	{
		if ( num % i == 0)return 0;
	}
	return 1;
 }

