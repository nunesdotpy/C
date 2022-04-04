//done
#include <stdio.h>

#define TAM 20

int main(){
    float fn[TAM], sn[TAM], av[TAM], tav, bav, lav;
    int i;

    for(i = 0; i < TAM; i++){
        printf("Digite a sua primeira nota: ");
        scanf("%f", &fn[i]);

        printf("Digite a sua segunda nota: ");
        scanf("%f", &sn[i]);

        av[i] = (fn[i] * 2 + sn[i] * 3) / 5;

        tav += av[i];

        printf("Sua 1ª nota é %.1f, sua 2ª é %.1f e portanto sua média é %.1f\n", fn[i], sn[i], av[i]);
    }

    tav /= TAM;

    system("clear");
    printf("Média da turma foi: %.1f\n", tav);
    for(i = 0; i < TAM; i++){
        if(av[i] > tav){
            printf("O %dº aluno teve resultados acima da média: %.1f\n", i+1, av[i]);
        }else{
            printf("O %dº aluno teve resultados abaixo da média: %.1f\n", i+1, av[i]);
        }
    }

    return 0;
}