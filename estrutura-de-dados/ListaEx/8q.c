// done
#include <stdio.h>

int main(){
    int Vet[9], i, val, arr, mval, marr;
    
    for(i = 0; i < 10; i++){
        printf("Digite o valor para o vetor [%d]: ", i);
        scanf("%d", &Vet[i]);
    }

    for(i = 0; i < 10; i++){
        if(i == 0){
            val = Vet[i];
            arr = i;
        // maior valor
        }else if(Vet[i] > val){
            val = Vet[i];
            arr = i;
        }
    }

    for(i = 0; i < 10; i++){
        if(i == 0){
            mval = Vet[i];
            marr = i;
        // menor valor        
        }else if(Vet[i] < mval){
            mval = Vet[i];
            marr = i;
        }
    }

    system("clear");
    printf("O maior valor é %d localizado no array %d\nO menor valor é %d localizado no array %d\n", val, arr, mval, marr);

    return 0;
}