// done
#include <stdio.h>

int main(){
    float VET[100], total = 0;
    int i;

    for(i = 0; i < 100; i++){
        printf("Digite um valor para o vetor [%d]: ", i);
        scanf("%f", &VET[i]);
        total = total + VET[i];
    }

    system("clear");
    printf("O valor total da soma dos vetores declarados é: %.2f\n", total);

    return 0;
}