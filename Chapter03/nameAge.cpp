#include "../std_lib_facilities.h"

int main(){
    cout << "Enter your name and age\n";
    string name;
    int age; 
    cin >> name >> age ;
    cout << "Hello, " << name << " (age = " << age * 12 << ")"; 
    return 0;
}