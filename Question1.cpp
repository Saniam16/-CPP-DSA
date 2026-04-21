#include <iostream>
using namespace std;
int main()
{
  // initializing variables 
    int day;
    int seconds;
  // Prompts the user to enter days
	cout<<"Enter the number of days:\t";
	cin>>day;
  // Converts days into seconds (1 day = 86400 seconds)
    seconds = day * 86400;
  // Displays the result
    cout<<"The total number of seconds is:"<< seconds << "\n";
    return 0;
}
