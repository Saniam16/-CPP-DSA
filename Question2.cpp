#include <iostream>
using namespace std;

int main() {
    //SET x TO 0, y TO 20 
   int x = 0;
   int y = 20;
  //REPEAT SUBTRACT 4 FROM y ADD 2/y TO x UNTIL y IS LESS THAN 6 
    do {
        y = y - 4;
        x = x + 2 / y;
    } while (y >= 6);

   //DISPLAY x 
    cout << "x = " << x << endl;
   
    return 0;
}
