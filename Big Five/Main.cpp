/*
* Main.cpp
*
* Version information
* Author: Dr. Shane Wilson
* Date:28/09/2017
* Description: Copy constructor
*
///**************************************************************************
// * (C) Copyright 1992-2017 by Deitel & Associates, Inc. and               *
// * Pearson Education, Inc. All Rights Reserved.                           *
// *                                                                        *
// * DISCLAIMER: The authors and publisher of this book have used their     *
// * best efforts in preparing the book. These efforts include the          *
// * development, research, and testing of the theories and programs        *
// * to determine their effectiveness. The authors and publisher make       *
// * no warranty of any kind, expressed or implied, with regard to these    *
// * programs or to the documentation contained in these books. The authors *
// * and publisher shall not be liable in any event for incidental or       *
// * consequential damages in connection with, or arising out of, the       *
// * furnishing, performance, or use of these programs.                     *
// **************************************************************************/


#include <iostream>
#include "Array.h"
using namespace std;

void outputArray(const Array &); // prototype

int main() {
   Array integers1(7); // 7-element Array
   Array integers2; //10 elements by default

   cin >> integers1;

   //Invoke the copy constructor
   Array integers3{ integers1 };
   Array integers4 = integers1;

   //Using move semantics
   Array integers5(std::move(integers4)); //invokes move constructor

   cout << "The size of integers4 is: " << integers4.getSize() << endl;

   integers4 = integers3;
   cout << "The size of integers4 is: " << integers4.getSize() << endl;
	
   //Invoke the move assignment operator
   Array integers6 = (std::move(integers4)); 

   cout << "The size of integers4 is: " << integers4.getSize() << endl;
   cout << "The size of integers6 is: " << integers6.getSize() << endl;


}  // end main

// print Array contents
void outputArray(const Array &arrayToOutput)
{
   cout << "The Array received has " << arrayToOutput.getSize() 
      << " elements. The contents are:\n" << arrayToOutput << endl;
} // end outputArray
