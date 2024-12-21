#include <iostream>
#include <string>
using namespace std;
int main()
{

   string s0;
   string s1("hello");
   string s2 = "hello world";
   string s3(s2);
   string s4 = s3;

   char a[] = {'a', 'b', 'c'};
   string s5(a);
   cout << s0 << endl;
   cout << s1 << endl;
   cout << s2 << endl;
   cout << s3 << endl;
   cout << s4 << endl;
   cout << s5 << endl;

   if (s0.empty())
   {
      cout << "s0 is an empty string" << endl;
   }

   // append

   s0.append("i love c++");
   s0 += " and python";

   cout << s0 << endl;

   return 0;
}