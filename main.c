#include <stdio.h>
#include <stdlib.h>

int Factorielle(int n){
 int f=1,i;
 for(i=1;i<n+1;i++){
    f=f*i;
 }
 return f ;
}

int main()
{
    int x ,i,m,factoriel;

     printf ("sasir un nombre:\n");
     scanf  ( "%d",&x);
     m=1    ;
      for(i=1;i<x+1;i++){
            m=m*i;
      }
        printf ("%d\n",m);
      printf ("sasir un nombre:\n");
     scanf  ( "%d",&x);
     factoriel= Factorielle(x);
     printf ("%d",factoriel);

    return 0;
}
