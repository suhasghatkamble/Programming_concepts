#include <stdio.h>

struct Product
{
    int id;
    char name[50];
    float price;
};

int main()
{
    struct Product p1;

    printf("Enter id, name and price for the product. \n");
    scanf("%d%s%f", &p1.id, p1.name, &p1.price);

    printf("Id = %d, Name = %s, Price=%0.2f", p1.id, p1.name, p1.price);

    return 0;
}