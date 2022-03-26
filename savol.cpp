#include <iostream>
using namespace std;

int main()
{

    string name,surname;
    int age,year;
    cout<<"Umari kste: ";
    cin>>name;
    cout<<"Umari shlyuha: ";
    cin>>surname;
    cout<<"dolbaebi Umar: ";
    cin>>year;
    age=2022-year;

    if(age>17 && age<45)
        cout<< "Hello Mr."<<name<<" "<<surname<<", you have been hired.";
    else
        cout<<"Hello Mr."<<name<<surname<<", you have not been hired.";

}
