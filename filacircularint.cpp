#include <stdio.h>
#include <stdlib.h>

const int TamanhoFila = 5;

int inicio = 0;
int elementos = 0;

int Fila[TamanhoFila];

int insere( int Valor )
{

   if( elementos < TamanhoFila )
   {
      int PReal = (inicio+elementos)%TamanhoFila; 

      Fila[PReal] = Valor;
      printf ("Adicionou[%d] = %d \n", PReal, Fila[PReal]);
      elementos++;
      return 0;
   }
   printf ("Fila cheia!!! \n");
   return 1;
}

int remover()
{
   if( elementos > 0 )
   {
      int Valor = Fila[inicio];
      printf ("Removeu[%d] = %d \n", inicio, Fila[inicio]);
      Fila[inicio] = 0;
      inicio = (inicio+1)%TamanhoFila; 
      elementos--;
      return(Valor);
   }
   printf ("Fila vazia!! \n");
   return(0);
}

int main(int argc, char *argv[]) {
   int R;
   insere(5);
   insere(10);
   insere(7);
   insere(9);
   insere(2);
   insere(2);

   printf ("\nEstado da pilha:\n");
   for( int i=0;i<5;i++)
   {
      printf ("Elemento[%d] = %d \n", i, Fila[i]);
   }
   printf ("\n");

   remover();
   remover();
   remover();
   remover();

   printf ("\n");

   insere(3);
   insere(2);
   insere(1);

   printf ("\nEstado da pilha:\n");
   for( int con=0;con<5;con++)
   {
      printf ("Elemento[%d] = %d \n", con, Fila[con]);
   }
   printf ("\n");

   remover();
   remover();
   remover();
   remover();
   remover();

   return 0;
}
