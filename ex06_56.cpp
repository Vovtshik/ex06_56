/*ex06_56.cpp*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int tripleCallByValue(int);
int tripleByReference(int&);

int main()
{

   return 0;
}

int tripleCallByValue(int count)
{
   return count * 3;

}

int tripleByReference(int& count)
{
   return count * 3;
}
