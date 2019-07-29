#include<stdio.h>

int pow(int a,int b){
	int c;
	for(c=0;c>1000;c++){
	
	if(a == 1){
		return b;
		break;
	}
	b++;
	a/=2;
}
	
}

int main(){
	
	int i,j,z = 0;
	
	scanf("%d",&i);
	
	z = pow(i,j);
	
	
	return 0;
}
