//done
#include <stdio.h>

int main(){
    float fn, sn, av;

    printf("Digite a sua primeira nota: ");
    scanf("%f", &fn);

    printf("Digite a sua segunda nota: ");
    scanf("%f", &sn);

    av = (fn * 2 + sn * 3) / 5;
    
    system("clear");
    printf("Sua 1ª nota é %1.f, sua 2ª é %1.f e portanto sua média é %1.f\n", fn, sn, av);

    return 0;
}