/*ex06_56.cpp*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int tripleCallByValue(int);
int tripleByReference(int&);

int main()
{
   int count;
   
   cout << "Enter any integer:\n";
   cin >> count;
   
   cout << "Initially count = " << count << endl;
   cout << "After passing count to a function by value;\n"
	<< "count = " << count << endl << endl;

   cout << "Initially count = " << count << endl;
   cout << "After passing count to the function by reference;\n"
        << "count = " << count << endl << endl;

   return 0;
}

int tripleCallByValue(int count_v)
{
   return count_v * 3;

}

int tripleByReference(int& count_r)
{
   return count_r * 3;
}
