//SALINAS FERNANDEZ PAOLA VANESSA
//30/08/2015 FI(UNAM)
//Programa que la informacion de un archivo lo pasa a otro archivo
#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *arch_1,*arch_2;
    char c;
  /*  arch_1=fopen("arch_1.txt","w"); //Coloca informacion al primer archivo
    fprintf(arch_1,"Este programa nos ayuda a colocar la informacion de un archivo a otro");
    fclose(arch_1);*/
    arch_1=fopen("info_ticket.txt","r");
    fseek(arch_1,0,SEEK_CUR);
    c=fgetc(arch_1);
    arch_2=fopen("ticket_tortas.txt","w");
    while(c!=EOF)
    {
        fprintf(arch_2,"%c",c);
        c=fgetc(arch_1);
    }
    fclose(arch_2);
    fclose(arch_1);
    fflush(arch_1);
    fflush(arch_2);
    return 0;
}

