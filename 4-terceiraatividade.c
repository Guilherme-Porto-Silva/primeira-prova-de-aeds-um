/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main (void)
{
  int lido, quantidade = 0, soma = 0, maior = 0, segundomaior =
	0, menor, segundomenor, media;
  printf
	("De-me uma quantidade indeterminada de valores.\nPararei de ler quando me deres ZERO, que nao sera considerado na contagem.\n");
  do
	{
	  scanf ("%d", &lido);
	  if (lido != 0)
		{
		  soma = soma + lido;
		  if (lido > maior)
			{
			  segundomaior = maior;
			  maior = lido;
			}
		  else
			{
			  if (maior > lido && lido > segundomaior)
				segundomaior = lido;
			  else
				{
				  if (lido <= menor)
					{
					  segundomenor = menor;
					  menor = lido;
					}
				  else
					{
					  if (menor < lido && lido <= segundomenor)
						segundomenor = lido;
					}
				}
			}
		  quantidade++;
		}
	}
  while (lido != 0);
  media = soma / quantidade;
  printf
	("Temos que:\nForam digitados %d valores\nO maior de todos eles foi %d\nO segundo maior de todos eles foi %d\nO menor de todos eles foi %d\nO segundo menor de todos eles foi %d\nA soma de todos eles foi %d\nA media de todos eles foi %d",
	 quantidade, maior, segundomaior, menor, segundomenor, soma, media);
  return 0;
}