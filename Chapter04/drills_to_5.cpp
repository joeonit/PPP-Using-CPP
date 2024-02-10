#include "../std_lib_facilities.h"
int main(){

    double i1, i2;
    const double tolerance = 0.01;

    while (cin >> i1 >> i2)
    {
        if (i1 == i2) cout << "The two numberes are equal" << endl; 
        else if (abs(i1 - i2) < tolerance) cout << "The numbers are almost equal" << endl;        
        else if (i1 > i2) cout << "The largest value is: " << i1 << "  The smallest value is: " << i2 << endl; 
        else cout << "The largest value is: " << i2 << "  The smallest value is: " << i1 << endl;
    }
   return 0;

}