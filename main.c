#include <stdio.h>
#include <stdlib.h>

int fatorial(int n)
{
   /*
   FATORIAL COM "IF"
   */
   if (n <= 1)
      return 1 ;
   else
      return (n * fatorial(n-1) ) ;
}

int main ()
{
   printf ("fat(100): %d\n", fatorial(100)) ;
   return (0) ;
}

