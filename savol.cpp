#include <iostream>
using namespace std;

int main()
{

    string name,surname;
    int age,year;
    cout<<"Enter your Name: ";
    cin>>name;
    cout<<"Enter your Surname: ";
    cin>>surname;
    cout<<"Enter your siyvus: ";
    cin>>year;
    age=2022-year;

    if(age>17 && age<45)
        cout<< "Hello Padanalat"<<name<<" "<<surname<<", you have been hired.";
    else
        cout<<"Hello Bepadar"<<name<<surname<<", you have not been hired.";

}
