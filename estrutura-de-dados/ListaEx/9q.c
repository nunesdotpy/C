// done
#include <stdio.h>

#define TAM 10

int main(){
    int i, vet[TAM], val, arr, mval, marr;

    for(i = 0; i < TAM; i++){
        printf("Digite o %do numero: ", i+1);
        scanf("%d", &vet[i]);

        if(i != 0){
            printf("A diferenca entre %d e %d eh de %d\n", vet[i-1], vet[i], abs(vet[i-1] - vet[i]));
        }
    }

return 0;
}
