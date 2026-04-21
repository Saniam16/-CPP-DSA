#include <iostream>
using namespace std;
//Function for perimeter
int perimeter (int a)
{ 
return a + a + a + a;
}
//Function for area
int area (int a)
{ 
return  a * a;
}

int main()
{
  //initialize variable
int a;
  //User enters side length of square
cout<<"Enter a number \n";
cin>> a;
// Compute area and perimeter 
cout << "Area: " << area(a) << endl;
cout << "Perimeter: " << perimeter(a) << endl;

   return 0;
}
