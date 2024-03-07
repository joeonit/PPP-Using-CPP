#include "../std_lib_facilities.h"
int main(){
    vector<double>distances;
    cout << "Enter each distance followed by whhite space to termnate enter *\n";
    double val;
    while (cin>>val){
        distances.push_back(val);
        if(distances.size() == 0 ) error("No distance entered\n");
    }
    double sum{distances[0]};
    double greatestDis{distances[0]};
    double smallestDis{distances[0]};
    for (double d : distances ){
        if (d < smallestDis) smallestDis=d ;
        if (d > greatestDis) greatestDis=d ;
        sum+=d;
    }
    	
    cout << "total distance " << sum << '\n';
	cout << "smallest distance " << smallestDis << '\n';
	cout << "greatest distance " << greatestDis << '\n';
	cout << "mean distance " << sum/distances.size() << '\n';
    return 0;
}    