/*
This code is taking name and roll no of the student from the user and printing their name and roll no using function
*/
#include <iostream>
using namespace std;
class student
{
    char name[30];
    int roll;

public:
    void get()
    {
        cout << "Enter the name of student: ";
        cin >> name;
        cout << " Enter the roll no student: ";
        cin >> roll;
    }

    void result()
    {
        cout << "Name : " << name << endl;
        cout << "Roll no : " << roll << endl;
    }
};

int main()
{
    student obj;
    obj.get();
    obj.result();
    return 0;
}