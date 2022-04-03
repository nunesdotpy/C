// done
#include <stdio.h>

int main(){
    int A[5], B[5], C[5], i;

    for(i = 0; i < 5; i++){
        printf("Digite o %dº numero de A: ", i+1);
        scanf("%d", &A[i]);
    }

    for(i = 0; i < 5; i++){
        printf("Digite o %dº de numero de B: ", i+1);
        scanf("%d", &B[i]);
    }

    for(i = 0; i < 5; i++){
        C[i] = A[i] + B[i];
    }

    system("clear");
    printf("C[] = {%d, %d, %d, %d, %d}\n", C[0], C[1], C[2], C[3], C[4]);

    return 0;
}