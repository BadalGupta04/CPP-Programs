#include <iostream>
using namespace std;
class x
{
     public:
     int a;
     void putdata()
     {
        cout << "Enter value of a= "; cin >> a;
     }
};
class y : public x
{
     public:
     int b;
     void getdata1()
     {
         cout << "\nEnter value of b= "; cin >> b;
     }
};
class z : public y
{
     private:
     int c;
     public:
     void getdata2()
     {
        cout << "\nEnter value of c= "; cin >> c;
     }
     void product()
     {
         cout << "\nProduct= " << a * b * c;
     }
};
int main()
{
     z z;
     z.putdata();
     z.getdata1();
     z.getdata2();
     z.product();
     return 0;
} 
