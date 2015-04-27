#include <stdio.h>
#include <stdlib.h>

#define dim1 = 100;

int inverso(int A[dim1],int dim)
{
	char B[dim1];
	int i=0,j, rep=0;
	
	j=dim;
	for (i=0;i<dim;i++){
		B[j-1]=A[i];
                if(A[i]=='e')
                rep++;
		j--;
	}	
	
	puts(B);	
        Printf("Frecuencia de e: %d",&rep);	
}