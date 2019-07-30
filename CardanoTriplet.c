#include<stdio.h>
#include<math.h>

int cardano(int a,int b ,int c){
	
	int  q1,q2,q3;
	q3 = b * pow(c , 1.0 / 2.0);//printf("---<%d>---",q3);
	q3 += a;
	q1 = pow(  q3 , 1.0 / 3.0 );//printf("---<%d>---",q1);
	q3 -= (2 * a);
	q2 = pow( q3 , 1.0 / 3.0 );//printf("---<%d>---\n",q2);
	if( (q1 + q2 ) == 1) return 1;
	else return 0;
}




int main(){
	
	
	int a=0,count=0,i,j,k;
	
	for(i = 0 ; i < 1000; i++){
		
		for(j = 0; j < 1000; j++){
			
			for(k = 0; k < 1000; k++){
				
				printf("<<%d>>-<<%d>>-<<%d>>\n",i,j,k);
				
				a = cardano(i,j,k);
				if(a == 1 && (i + j + k) <= 1000){
					
					 count++;
					 printf("<<%d>>-<<%d>>-<<%d>>\n",i,j,k);
					 a = 0;
				}
			}
		}
	}
	

	printf("<C><A><R><D><A><N><O><T><R><I><P><L><E><S>-->-->-->-->--><%d>\n",count);
	
	return 0;
}
