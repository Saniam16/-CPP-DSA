#include<iostream>
#include <string>
using namespace std;
int main()
{
int num[5];
int count;
int sum = 0;
 //user input 5 values to populate using an array 
cout<<"Enter five numbers";
for(count=0;count<5;count=count+1)
{
    cin>>num[count];
    sum = sum + num[count];
}

//Display the 5 values 
cout<<"The values you entered are:"<<endl;
for(count=0;count<5;count=count+1)
{
cout<<num[count]<<endl;
}

 // calculate average
 int average = sum / 5.0; 
 cout << "Average = " << average << endl;
 
return 0;
}
