/*
Exercise 6: Make a vector holding the ten string values "zero", "one", .. "nine".
Use that in a program that converts a digit to its corresponding spelled out value;
e.g., the input 7 gives the output seven. Have the same program,
using the same input loop, convert spelled out numbers into their digit form; e.g., the input seven gives the output 7.
*/
#include "../std_lib_facilities.h"
const vector<string> values{"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

string numToStr(int num)
{
    string str;

    if (num >= 0 || num < 10)
    {
        str = values[num];
        return str;
    }
    return "invalid input";
}

int strToNum(string str)
{
    for (int i = 0; i <= values.size(); ++i)
    {
        if (values[i] == str)
            return i;
    }
}

int main()
{
    int num{0};
    string str{" "};
    bool quit{false};

    cout << "Enter as a name or a value only except values form 0 - 9 (to quit enter *)\n";

    while (!quit)
    {
        if (cin >> num)
        {
            cout << numToStr(num) << "\n";
        }

        else
        {
            cin.clear();
            cin >> str;
            if (str == "*")
                quit = true;
            else
            {
                int result = strToNum(str);
                if (result != -1)
                {
                    cout << result << "\n";
                }
                else
                {
                    cout << "Invalid input"
                         << "\n";
                }
            }
        }
    }
}
