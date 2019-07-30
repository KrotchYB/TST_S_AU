#include<iostream>

using namespace std;

long int is_prime(long long int num);

int main(){
	
	long long int i1,i2;
	
	for(i1=0; i1<2000000 ;i1++){
		
		if(is_prime(i1) == 1) {cout<<"-"<<i1<<"-";}
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

