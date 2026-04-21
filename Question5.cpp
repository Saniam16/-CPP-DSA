#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
    //initiliaze variables 
    int radius;
    double volume;
    const double PI = 3.141592653589793;
    
    // Input radius
	cout<<"Enter the radius:\t";
	cin>>radius;
	
	//Compute volume 
    volume = (4.0/3.0) * PI * pow(radius, 3);
    cout<<"Volume of sphere:"<< volume << "\n";
    
}
