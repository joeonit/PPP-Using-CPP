#include "../std_lib_facilities.h"

int main(){


    cout << "Enter the name of the person you want to write to\n";
    string first_name;
    cin >> first_name;
    cout << "Dear " << first_name << ", " << "wassup?\n";

    cout << "What's your friend name?\n";
    string friend_name; 
    cin >> friend_name;
    cout << "Have you seen " << friend_name << " lately?\n";
    
char friend_sex = '0';
cout << "If your friend is male enter m, if female f\n";
cin >> friend_sex;
do {
    if (friend_sex == 'm') {
        cout << "If you see " << friend_name << ", please ask him to call me.\n";
    } else if (friend_sex == 'f') {
        cout << "If you see " << friend_name << ", please ask her to call me.\n";
    } else {
        cout << "Invalid input. Please enter 'm' for male or 'f' for female.\n";
        cin >> friend_sex;
    }
} while (friend_sex != 'm' && friend_sex != 'f');


    cout << "Enter your friend age\n";
    int age; 
    cin >> age;
    if (age < 0 || age > 110) simple_error("you're kidding!\n");
    else cout << " hear you just had a birthday and you are " << age << " years old.\n";


    return 0;
}