/*
This code is taking an integer number from the user and printing their cube using function
*/
#include<stdio.h>

int findcube();



int main(){
    findcube();
    return 0;
}
int findcube(){
    int a;
    printf("enter the no : \n");
    scanf(" %d", &a);
    printf("\n cube = %d", a*a);
}