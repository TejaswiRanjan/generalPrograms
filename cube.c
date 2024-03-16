/*
This code or program is calculating cube of a number in  which the number is entered by the user
*/
#include<stdio.h>
int main () {
    int a;
    
    printf("Enter a no : ");
    scanf("%d", &a);

    a=a*a*a;

    printf("\n The Cube of no is  : %d", a);

    return 0;
}