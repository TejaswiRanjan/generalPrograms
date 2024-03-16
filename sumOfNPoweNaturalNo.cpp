/*
This code or program calculates the sum of squares of n natural number in which the n natural no will be entered by the user
*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   int a;
   cout<<"Enter the last value : ";
   cin>>a;
int i;
int sum = 0;
int value;


for(i=0;i<=a;i++){
   value = pow(i,2);
   sum = sum + value;
}
cout<<"The Sum of squares of N natural no till "<<a<<" is : "<<sum;
return 0;
}