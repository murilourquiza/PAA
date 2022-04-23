#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void x(int n, int numero_linha, int tracos_num_pares_fixo, int tracos_num_pares_variavel, int aux_metade){
    
    if(numero_linha == pow(2, n)){
        return;
    }
    
    if(numero_linha % 2 == 1){
        printf("\n%i. -\n", numero_linha);
        printf("%i. ", numero_linha+1);
        x(n, numero_linha+1, tracos_num_pares_fixo, tracos_num_pares_variavel, aux_metade);
    } else{
        printf("-");
        if(tracos_num_pares_variavel == 1){
            if(numero_linha*2 == pow(2, n)){
                aux_metade = -1;
            }
            x(n, numero_linha+1, tracos_num_pares_fixo+aux_metade, tracos_num_pares_fixo+aux_metade, aux_metade);
        } else{
            x(n, numero_linha, tracos_num_pares_fixo, tracos_num_pares_variavel-1, aux_metade); 
        }
    }
}

int main() {
    
    int n=0;
    scanf("%i", &n);
    printf("0. ");
    
    x(n, 1, 2, 2, 1);
    
	return 0;
}