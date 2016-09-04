#include<stdio.h>

int main() {
  int entero;
   int i;
  entero = fork();
  if (p == 0) {
    sleep(3);
      printf("Soy el proceso hijo numero %d \n", getpid());
  }
  else {
    i = fork();
    if(i==0){
      sleep(5);
	    printf("Soy el proceso padre numero %d \n", getpid());
	}else{
	puts("Hola");
	}
}
  puts("Fin de los procesos \n");
}
