#include <stdio.h>
/* pedro */
int main (void )
{
  int operacao;
  int p;
  int q;
  
  printf ("MENU\n");
  printf ("1. ~p\n");
  printf ("2. p ^ q\n");
  printf ("3. p v q\n");
  printf ("4. p _v q\n");
  printf ("5. p -> q\n");
  printf ("6. p <-> q\n\n");
  
  scanf("%d", &operacao);
  
  switch (operacao)
  {
    case 1 :
    printf ("p = Digite 1 para verdadeiro ou 0 para falso:\n");
    scanf("%d", &p);
    printf("%d\n", !p);
    
    break;
    
    case 2 :
    printf ("p = Digite 1 para verdadeiro ou 0 para falso:\n");
    scanf("%d", &p);
    printf ("q = Digite 1 para verdadeiro ou 0 para falso:\n");
    scanf("%d", &q);
    printf("%d\n", p&&q);
    //FAZER A LOGICA
    //IMPRIMIR O RESULTADO
    break;
    
    case 3 :
    printf ("p = Digite 1 para verdadeiro ou 0 para falso:\n");
    scanf("%d", &p);
    printf ("q = Digite 1 para verdadeiro ou 0 para falso:\n");
    scanf("%d", &q);
    printf("%d\n", p||q);
    //FAZER A LOGICA
    //IMPRIMIR O RESULTADO
    break;
    
    case 4 :
    printf ("p = Digite 1 para verdadeiro ou 0 para falso:\n");
    scanf("%d", &p);
    printf ("q = Digite 1 para verdadeiro ou 0 para falso:\n");
    scanf("%d", &q);
    printf("%d\n", !((p&&q)||!(p||q)));
    //FAZER A LOGICA
    //IMPRIMIR O RESULTADO
    break;
    
    case 5 :
    printf ("p = Digite 1 para verdadeiro ou 0 para falso:\n");
    scanf("%d", &p);
    printf ("q = Digite 1 para verdadeiro ou 0 para falso:\n");
    scanf("%d", &q);
    printf("%d\n", !p||q);
    //FAZER A LOGICA
    //IMPRIMIR O RESULTADO
    break;
    
    case 6 :
    printf ("p = Digite 1 para verdadeiro ou 0 para falso:\n");
    scanf("%d", &p);
    printf ("q = Digite 1 para verdadeiro ou 0 para falso:\n");
    scanf("%d", &q);
    printf("%d\n", ((p&&q)||!(p||q)));
    //FAZER A LOGICA
    //IMPRIMIR O RESULTADO
    break;
    

 

    default :
    printf ("Invalido!\n");
  }
  
  return 0;
}
