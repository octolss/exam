#include <stdio.h>

void main()
{
    char name[1000];
    int age;
    printf("Please enter your name: ");
    scanf("%s", name);
    printf("Please enter your age: ");
    scanf("%d", &age);
    printf("Hello %s, you are %d years old\n", name, age);

}