#include <stdio.h>

int main(){
    float fn[20], sn[20], av[20], tav;
    int i;
    fflush(stdout);

    // saber média do aluno
    for(i = 0; i < 3; i++){
        printf("Digite a sua primeira nota: ");
        scanf("%f", &fn[i]);

        printf("Digite a sua segunda nota: ");
        scanf("%f", &sn[i]);

        av[i] = (fn[i] * 2 + sn[i] * 3) / 5;
        printf("Sua primeira nota eh %.1f, sua segunda eh %.1f e portanto sua media eh %.1f\n", fn[i], sn[i], av[i]);
    }

    for(i = 0; i < 3; i++){
        if(i != 0){
            av[0] += av[i];
        }
    }

    printf("%f", av[0]);

    // definir a média da turma
    for(i = 0; i < 3; i++){
        tav = tav / 3;
        if (av[i] > tav){
            printf("O aluno %d teve resultados acima da media\n", i);
        }else{
            printf("O aluno %d teve resultados abaixo da media\n", i);
        }
    }

    return 0;
}
