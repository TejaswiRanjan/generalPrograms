/*
This code is taking a code number of the day and printing the name of the day
*/
#include <stdio.h>

int main()
{
    int d;
    printf("Enter the no of Day : ");
    scanf("%d",&d);
    switch (d)
    {
    case 1:
        printf("MONDAY");
        break;
    case 2:
        printf("TUESDAY");
        break;
    case 3:
        printf("WEDNUSDAY");
        break;
    case 4:
        printf("THRUSDAY");
        break;
    case 5:
        printf("FRIDAY");
        break;
    case 6:
        printf("SATURDAY");
        break;
    case 7:
        printf("SUNDAY");
        break;
    default:
        printf("You have entered wrong no of the day");
        
    }

    return 0;
}


