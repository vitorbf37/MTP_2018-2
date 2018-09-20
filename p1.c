// Vitor Braga Ferreira

//11811EAU005

//p1.c

#include <stdio.h>

int main()
{
   int estado=0, i=0;
   char bits[256];
   scanf("%s", bits);
   while(bits[i]!='\0'){
    if(estado == 0 && bits[i]== '1'){
        estado = 1;
        i++;
    }
    if(estado == 0 && bits[i]== '0'){
        estado = 0;
         i++;
    }
    if(estado == 1 && bits[i]== '1'){
        estado = 0;
         i++;
    }
    if(estado == 1 && bits[i]== '0'){
        estado = 2;
         i++;
    }
    if(estado == 2 && bits[i]== '0'){
        estado = 1;
         i++;
    }
    if(estado == 2 && bits[i]== '1'){
        estado = 2;
         i++;
    }

   }
   if(estado==0){
   printf("%s eh multiplo de 3", bits);
}
else {
    printf("%s nao eh multiplo de 3", bits);
}

}

