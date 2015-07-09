// Cho-Assignment-2

#include <iostream>
using namespace std;


int main()
{
   double intresult, doubleresult;
   int studID = 20207674;
   int numLet = 3;

   cout << "My last (family) name is Cho.\n";
   cout << "My student I.D. is " << studID << endl;
   cout << "The number of digits in my last name is " << numLet << endl;

   intresult = studID % 2;
      cout << "Expression #1 is: " << intresult << endl;

   intresult = studID % numLet;
      cout << "Expression #2 is: " << intresult << endl;

   doubleresult = studID / numLet;
      cout << "Expression #3 is: " << doubleresult << endl;

   intresult = 1 + 2 + 3;
      cout << "Expression #4 is: " << intresult << endl;

   intresult = (studID - 54321) / (numLet + 30)*(numLet + 30);
   doubleresult = 100000 / (99 + intresult);
      cout << "Expression #5 is: " << doubleresult << endl;

	return 0;
}

