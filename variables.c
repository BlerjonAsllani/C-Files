#include <stdio.h>

int main() {

    /* variable =   Allocated space in memory to stroe a value.
                    We refer to a variable's name to access the stored value.
                    A variable's name must be unique within the scope of its declaration.
                    A variable's name cannot be a reserved word.
                    A variable's name should be descriptive.
                    BUT a variable has to be declared what type of data it will store.
    */

    int x;          // decleration
    x = 123;        // initialization
    int y = 321;    // decleration and initialization

    int age = 21;               // integer - %d
    float gpa = 5.5;            // floating point number - %f
    char grade = 'A';           // single character - %c
    char name[] = "Blerjon";    // array of characters - %s

    printf("My name is %s,\n",name);
    printf("I am %d years old.",age);

    return 0;
}