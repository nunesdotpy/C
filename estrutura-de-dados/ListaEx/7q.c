#include <stdio.h>

int main(){
    float fn[20], sn[20], av[20], tav[0];
    int i;
    fflush(stdout);

    // saber média do aluno
    for(i = 0; i < 3; i++){
        printf("Digite a sua primeira nota: ");
        scanf("%f", &fn[i]);

        printf("Digite a sua segunda nota: ");
        scanf("%f", &sn[i]);

        tav[0] = tav[0] + av[i];

        av[i] = (fn[i] * 2 + sn[i] * 3) / 5;
        printf("Sua primeira nota eh %.1f, sua segunda eh %.1f e portanto sua media eh %.1f\n", fn[i], sn[i], av[i]);
        printf("%.1f\n", tav);
    }

    // definir a média da turma
    for(i = 0; i < 3; i++){
        tav[0] = tav[0] / 3;
        if (av[i] > tav[0]){
            printf("O aluno %d teve resultados acima da media\n", i);
        }else{
            printf("O aluno %d teve resultados abaixo da media\n", i);
        }
    }

    return 0;
}
