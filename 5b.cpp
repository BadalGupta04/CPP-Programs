// *****
//  ****
//   ***
//    **
//     *

#include <iostream>
using namespace std;
int main()
{
 int k=6;
 for (int i=5; i>0; i--)
 {
 for (int j=0; j<5-i; j++)
 cout << " ";
 k=k-2;

 for (int j=0; j<i; j++)
 {
 cout <<"*";
 }
 cout << endl;
 }
 return 0;
}
