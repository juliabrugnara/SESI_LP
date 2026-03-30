#include <stdio.h>

int main (){
   float nota1, nota2, nota3, media;
   
   printf("\ncoloque primeira nota: ");
   scanf("%f", &nota1);
   
   printf("\ncoloque segunda nota: ");
   scanf("%f", &nota2);
   
   printf("\ncoloque terceira nota: ");
   scanf("%f", &nota3);
   
   media = (nota1 + nota2 + nota3) / 3;
   
   printf("%.1f + %.1f + %.1f / 3 = %.1f : ", nota1, nota2, nota3, media );
   
   if(media >= 7.0){
       printf("\nAPROVADO");
   }else if(media <= 6.9){
       printf("\nRECUPERAÇÃO");
   }else{printf("\nREPROVADO");}
}