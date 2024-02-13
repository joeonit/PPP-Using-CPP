#include "../std_lib_facilities.h"

constexpr double cm_m_ratio {.01};
constexpr double in_m_ratio {0.0254};
constexpr double ft_m_ratio {0.3048};
const vector<string> legal_units {"cm", "m", "in", "ft"};

bool is_legal(string unit) {
    for (string element : legal_units) {
        if (element == unit) return true;
    }
    return false;
}

double conv_to_m(double value, string unit) {
    if (unit == "cm") return value * cm_m_ratio;
    else if (unit == "m") return value;
    else if (unit == "in") return value * in_m_ratio;
    else if (unit == "ft") return value * ft_m_ratio;
    return 0; 
}


int main(){

    double input;
    bool first_valid_input = false;
    double largest = 0;
    double smallest = 0;
    double sum = 0;
    double count = 0;
    string unit;
    vector<double> values;

    while (cin >> input >> unit) {
        if (!is_legal(unit)) {
            cout << "Enter a valid unit (cm, m, in, ft).\n";
            continue; 
        }

        double input_m = conv_to_m(input, unit);
        if (!first_valid_input) {
            largest = smallest = input_m; 
            first_valid_input = true;
        } else {
            if (input_m > largest) {
                largest = input_m;
                cout << largest << "m is the largest so far.\n";
            }
            if (input_m < smallest) {
                smallest = input_m;
                cout << smallest <<  "m is the smallest so far.\n";
            }
        }
        
        sum += input_m;
        count++;
        values.push_back(input_m);
    }

    cout << "The largest number is: " << largest << endl;
    cout << "The smallest number is: " << smallest << endl;
    cout << "The sum of all numbers entered is: " << sum << endl;
    cout << "The count of all numbers entered is: " << count << endl;

    cout << "Sorted lsit of all values:\n";
    sort(values);
    for (double value: values)
        cout << '\t' << value << "\n";

   return 0;

}