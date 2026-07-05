#include<iostream>
#include<string>
using namespace std;

struct{
    int id;
    string name;
    int age;

}person;

int main(){
    person.id=1;
    person.name="Alice";
    person.age=30;

    cout << "ID:" << person.id << "\n" << "Name:" << person.name << "\n" << "Age:" << person.age << endl;


    int rev = 12;
    int &ask= rev;

    cout << rev << endl;
    cout << &ask << endl;
    
    return 0;
}