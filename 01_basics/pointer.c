#include <stdio.h>

int main (){
    int uesaka = 12;
    int sumire = 19;
    int *uesaka_p;

    printf("uesaka..%d\nsumire..%d\n*uesaka_p..int type pointer\n", uesaka, sumire);

    printf("&uesaka..%p\n", (void*)&uesaka);
    printf("&sumire..%p\n", (void*)&sumire);
    printf("&uesaka_p..%p\n", (void*)&uesaka_p);

    uesaka_p = &uesaka;
    printf("substitute pointer of uesaka for uesaka_p\n");
    printf("&uesaka_p..%p\n", (void*)uesaka_p);

    printf("*uesaka_p..%d\n", *uesaka_p);

    *uesaka_p = 13;
    printf("uesaka..%d\n", uesaka);

    return 0;

}
