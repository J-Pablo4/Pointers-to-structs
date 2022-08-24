#include <stdio.h>

typedef struct {
    float x;
    float y;
}Vector_2d;

void square_vector(Vector_2d *);

int main(void)
{
    Vector_2d mi_vector_chilo = {5, 6.0};

    printf("desde main: %p\n", &mi_vector_chilo);

    square_vector(&mi_vector_chilo);

    printf("%f %f", mi_vector_chilo.x, mi_vector_chilo.y);
    return 0;
}

void square_vector(Vector_2d *vector)
{
    printf("desde square_vector: %p\n", vector);
    (*vector).x = (*vector).x * (*vector).x; //importante los parentesis para obtener el valor de dereferencia
//    vector->x = vector->x * vector->x; Es una simplificacion de las referencias. Solo funciona a apuntadores de structs.
    (*vector).y = (*vector).y * (*vector).y;
}