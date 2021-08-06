/*ex06_56.cpp*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void tripleCallByValue(int);
void tripleByReference(int&);

int main()
{
   int count;
   
   cout << "Enter any integer:\n";
   cin >> count;
   
   cout << "Initially count = " << count << endl;

   tripleCallByValue(count);
   cout << "After passing count to a function by value;\n"
	<< "count = " << count << endl << endl;

   cout << "Initially count = " << count << endl;

   tripleByReference(count);
   cout << "After passing count to the function by reference;\n"
        << "count = " << count << endl << endl;

   return 0;
}

void tripleCallByValue(int count_v)
{
   count_v = count_v * 3;
}

void tripleByReference(int& count_r)
{
   count_r = count_r * 3;
}
