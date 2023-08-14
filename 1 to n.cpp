// print 1 to n number using while loop

#include <iostream>
using namespace std;
int main()
{
     int n;
     cout << "Enter the number :--> ";
     cin >> n;
     int i = 1;
     while(i <= n)
     {
          cout << i << endl;
          i++;
     }
     return 0;
}
