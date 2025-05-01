#include <stdio.h>
 
int main() {
 
   	int cod1, n1, cod2, n2;
   	double v1, v2, total;
   
   	scanf("%d %d %lf", &cod1, &n1, &v1);
   	scanf("%d %d %lf", &cod2, &n2, &v2);
  
   	total = (v1 * n1) + (v2 * n2);
   
   	printf("VALOR A PAGAR: R$ %.2lf\n", total);
   
  	 return 0;
}
