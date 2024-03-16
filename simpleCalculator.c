/*
This code or program performing like a simple calculator which taking two numbers and calculate code and performing as like a calculator
*/
#include<stdio.h>
int main()
{
float a,b,c;
int n;
printf("Note This point if you want desired output \n");
printf("Press 1 for addition \n");
printf("Press 2 for subtraction \n");
printf("Press 3 for multiplication \n");
printf("Press 4 for devision \n");
printf("Enter any two number : ");
scanf(" %f%f", &a,&b);
printf("Enter the code no for calculation : ");
scanf("%d",&n);
switch (n)
{
    case 1 : c = a+b;
    printf("\n Sum of two no = %f",c);
    break;
    case 2 : c = a-b;
    printf("\n Difference of two no=%f",c);
    break;
    case 3 : c = a*b;
    printf("\n Product of two no=%f",c);
    break;
    case 4 : c = a/b;
    printf("\n Division of two no=%f",c);
    break;
    defoult : printf("\n wrong choice");

    
}   
return 0;  
}