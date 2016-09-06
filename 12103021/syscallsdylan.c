#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

main(int argc, char **argv[])
{
	
int archivo;
char *variable;
archivo = open("documento.txt",O_WRONLY|O_CREAT,S_IRUSR|S_IWUSR); //abre el doc en modo escritura, creat lo crea si no existe aún
//S_IRUSR|S_IWUSR lectura y escritura para el usuario (Seleccion)

scanf("%s",&variable); //agrego al archivo lo que deseo por teclado
 
printf("el tamano del texto que agregue es %d\n",sizeof(variable)); //muestro el tamaño del texto que se digito
 
write(archivo,&variable,sizeof(variable)); //guardamos lo que se digito en el archivo
 
close(archivo);
}

