#include <stdio>
#include <conio>
#include <fstream>
#include <iostream>

void main()
   {
   int n,p,a,j,lp,f;
   int m[5][5];

   printf("Ingrese eL numero de entradas: \n");
   scanf("%d",&n);

   printf("Ingrese la operacion a realizar:\n");
    printf("\n\t1. And");
    printf("\n\t2. Or");
    printf("\n\t3. Not");
    printf("\n\t4. XOR");
    printf("\n\t5. Salir");
    printf("\n");
    scanf("%d",&a);
