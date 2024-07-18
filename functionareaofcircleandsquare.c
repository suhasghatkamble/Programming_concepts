#include<stdio.h>
int square(int side)
{
    return side*side;
}

float circle(float radius)
{
    return 3.14*radius*radius;
}




int main()
{
    int sq;
    float cir;

    sq=square(5);
    printf("%d\n",sq);

    cir=circle(5);
    printf("%f",cir);
}