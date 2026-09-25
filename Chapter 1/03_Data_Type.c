#include <stdio.h>

int main(){

    int a = 1;
    float b = 1.2;
    // Single quote is for one character 
    char c = 'S';
    //Double quote is for Word/String (might be of multiple words as well)
    char string[] = "Shrestha";

    printf("The value of a is %d\n", a);
    printf("The value of b is %f\n", b);
    printf("The value of c is %c\n", c);
    printf("The value of string is %s\n",string);

    printf("The size of string is %zu bytes\n", sizeof(string));
    // String literal means string sequence of characters written inside double quotes.
    // The size of string is 9 bytes , this is because each of the character is 1 byte and string literal includes '\0' to mark the ending of the string
    printf("The size of a is %zu bytes.\n", sizeof(a));
    printf("The size of b is %zu bytes.\n", sizeof(b));
    printf("The size of c is %zu bytes.\n", sizeof(c));

    //z -> it tells the value is of type size_t (size_t is similar to something like int, char,....)
    //u -> tells the program to print the value as an unsigned integer 
    //we dont use %d becuase the sizeof() return in size_t type which can be hold by %zu

    return 0;
    
}