#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "extra.h"

/*
 * 
 */ 
  int main (int argc, char **argv)
{
  
 
Lista minhaLista;
Lista minhaLista_02;
Lista minhaLista_03;
Lista minhaLista_04;
int valor, op;
  
criarLista (&minhaLista);
criarLista (&minhaLista_02);  
criarLista (&minhaLista_03);
criarLista (&minhaLista_04);
while (1)
    {
  
printf
	   ("1 - Inserir elemento em ordem (so se a lista estiver ordenada)\n");
      
printf ("2 - Remover elemento no inicio\n");
      
printf ("3 - Mostrar lista\n");

printf ("4 - Copia\n");

printf ("5 - Intercala\n");

printf ("6 - Concatena\n");
      
printf ("7 - Sair\n");
      
printf ("Opcao? ");
      
scanf ("%d", &op);
      
switch (op)
	{
	
 

	
 
case 1:		// inserir elemento ordenado
	  printf ("Valor? ");
	  
scanf ("%d", &valor);
	  
inserirOrdenado (&minhaLista, valor);
	  
break;
	
 
case 2:		// remover o primeiro
	  
removerInicio (&minhaLista);
removerInicio (&minhaLista_02);
	  
break;
	
case 3:		// mostrar lista
	  
if (estaVazia (&minhaLista))
	    {
	      
printf ("Lista vazia");
	    
 
}
	  
	  else
	    {
	      
 
mostrarLista (&minhaLista);
	    
 
}
	  
break;

case 4:	

    copia(&minhaLista, &minhaLista_02);
    break;
case 5: 
    intercala(&minhaLista, &minhaLista_02, &minhaLista_03);
        break;
case 6:       
    concatena(&minhaLista, &minhaLista_02, &minhaLista_04);

break;


case 7:		// abandonar o programa
	  
exit (0);
	
 
}
    
}




 
 
 
 
return (EXIT_SUCCESS);

}


