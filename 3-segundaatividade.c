/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main (void)
{
  long int numero = 1998, produto = 1;
  for (numero = 1998; numero > 11; numero--)
	{
	  if (numero % 4 == 0 || numero % 6 == 0)
		{
		  produto = produto * numero;
		}
	}
  printf
	("O produto de todos os numeros pares abaixo de dois mil que sao multiplos de quatro ou de seis eh %ld",
	 produto);
  return 0;
}
