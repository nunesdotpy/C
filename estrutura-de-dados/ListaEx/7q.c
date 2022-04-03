#include <stdio.h>

int main(){
    float fn[100], sn[100], av;
    int i, al;

    printf("Quantidade de alunos na turma: ");
    scanf("%d", &al);
    
    for(i = 0; i < al; i++){
        printf("Digite a sua primeira nota: ");
        scanf("%f", &fn[i]);

        printf("Digite a sua segunda nota: ");
        scanf("%f", &sn[i]);

        av = (fn[i] * 2 + sn[i] * 3) / 5;
        printf("Sua 1ª nota é %1.f, sua 2ª é %1.f e portanto sua média é %1.f\n", fn[i], sn[i], av);
    }
    
    system("clear");
    printf("Sua 1ª nota é %1.f, sua 2ª é %1.f e portanto sua média é %1.f\n", fn, sn, av);

    return 0;
}