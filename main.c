#include <stdio.h>

void swap(int, int); //a <-> b

int main() {
    int a_en_main = 12;
    int b_en_main = -5;

    swap(a_en_main,b_en_main);

    printf("%d %d\n",a_en_main,b_en_main);

    return 0;
}

void swap(int a, int b)
{
    int pivote = a;
    a = b;
    b = pivote;

    printf("%d %d\n", a,b);

}
