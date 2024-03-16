/*
This code taking value and storing into in an array using an index number and printing value using an index number
*/

#include<iostream>
using namespace std;
int main (){
    int array[5];

    for(int i = 0;i<5;i++){
        cout<<"Enter the value of "<<i<<"th index = "<<endl;
        cin>>array[i];
    }

    for(int i = 0;i<5;i++){
        cout<<"Value of "<< i <<"th index = "<<array[i] <<endl;
    }
    
    return 0;
}