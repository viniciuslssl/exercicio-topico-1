#include<stdio.h>
#include<math.h>
main(){
int numero1, numero2, soma, multi,sub;
float div;

printf("digite os numeros: ");
scanf("\n %d %d", &numero1, &numero2);

soma = numero1 + numero2;
multi = numero1 * numero2;
sub = numero1 - numero2;
div = (float)numero1/(float)numero2;
printf("soma: %d, \n multiplicacao: %d, \n Subtracao: %d,\n divisao: %.2f",soma,multi,sub,div);


//potencia

int potencia = pow(numero1, numero2);
printf ("\npotencia: %d", potencia);

int modulo = numero1 % numero2;
printf("\nResto da divisao: %d", modulo);
}  

































