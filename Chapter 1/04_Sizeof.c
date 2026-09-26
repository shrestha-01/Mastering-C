#include <stdio.h>
int main(){

    int a;
    a = 1;
    float b;
    b = 1.1;
    char name;
    name = 'x';
    char word[] = "Shrestha";
    printf("The size of integer a is %zu.\n",sizeof(a));
    printf("The size of float integer b is %zu.\n",sizeof(b));
    printf("The size of character name is %zu.\n",sizeof(name));
    printf("The size of character word is %d.",sizeof(word));

    return 0;
}