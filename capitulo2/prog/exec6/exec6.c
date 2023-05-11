/*

6 . O arquivo de cabeçalho <limits.h>, que faz parte da biblioteca padrão de c, define constantes simbólicas que representam
valores limites (máximos e mínimos) dos tipos inteiros primitivos da linguagem C, bem como outros valores dependentes de implementação.

    a) Que constante simbólica representa:
        i) O número de bits em um byte? Será que esta constante é realmente necessária?
        ii) O valor mínimo do tipo short?
        iii) O valor máximo do tipo short?
        iv) O valor mínimo do tipo unsigned short?
        v) O valor máximo do tipo unsigned short?
        vi) O valor mínimo do tipo long?
        vii) O valor máximo do tipo long?
        viii) O valor mínimo do tipo unsigned long?
        ix) O valor máximo do tipo unsigned long?
        x) O valor mínimo do tipo unsigned long long?
        xi) O valor máximo do tipo unsigned long long?

    b) Escreva um programa em C que imprima os valores das constantes encontradas no item A. 

*/

#include <limits.h>
#include <stdio.h>

int main(){
    printf("O numero de bits em um byte:                 %d \n", CHAR_BIT);
    printf("O valor minimo do tipo short e:              %d \n", SHRT_MIN);
    printf("O valor maximo do tipo short e:              %d \n", SHRT_MAX);
    printf("O valor minimo do tipo unsigned short e:     %d \n", 0);
    printf("O valor maximo do tipo unsigned short e:     %d \n", USHRT_MAX);
    printf("O valor minimo do tipo long e:               %ld \n", LONG_MIN);
    printf("O valor maximo do tipo long e:               %ld \n", LONG_MAX);
    printf("O valor minimo do tipo unsigned long e:      %lu \n", 0);
    printf("O valor maximo do tipo unsigned long e:      %lu \n", ULONG_MAX);
    printf("O valor minimo do tipo unsigned long long e: %Lu \n", 0);
    printf("O valor maximo do tipo unsigned long long e: %Lu \n", ULLONG_MAX);

    return 0;
}