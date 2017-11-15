/* $begin main2 */
/* main2.c */
#include <stdio.h>
#include <funcion.h>

typedef struct VECTOR
{
  int datox [2];
  int datoy [2];

} vector;  





/* int x[2] = {1, 2};
int y[2] = {3, 4};
int z[2]; */

int main() 
{
    vector v;
    int z[2]; 
    int a,b,c,d;
    
    printf("Ingrese el primer valor para el vector 1: ");
    scanf("%d",&a);
    printf("\nIngrese el segundo valor para el vector 1: ");
    scanf("%d",&b);
    printf("\nIngrese el primer valor para el vector 2: ");
    scanf("%d",&c);
    printf("\nIngrese el segundo valor para el vector 2: ");
    scanf("%d",&d);
    v.datox[0]=a;
    v.datox[1]=b;
    v.datoy[0]=c;
    v.datoy[1]=d;
    
    addvec(v.datox, v.datoy, z, 2);
    printf("z = [%d %d]\n", z[0], z[1]);
    multvec(v.datox , v.datoy, z, 2);
    printf("z = [%d %d]\n", z[0], z[1]);
    return 0; 
}
/* $end main2 */
