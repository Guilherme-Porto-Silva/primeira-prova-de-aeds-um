/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n=0;
    int i=0;
    int qdiv = 0;
    
    printf("me de o valor de N: ");
    scanf("%d",&n);
   for(;n>1;n--){
   		qdiv = 0;
	   	for(i=n; i>1; i--){
		
		        if((n%i)==0){
		            printf("%d eh um divisor de %d\n",i,n);
		            qdiv++;
		        }
		    }
		    if(qdiv==1){
		    	printf("%d eh um numero primo\n", n);
			}
   }
 return 0;  
}



