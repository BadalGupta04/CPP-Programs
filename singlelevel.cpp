#include <iostream> 
using namespace std; 
class x
{
   public:
     int a;
   void putdata()
   {
     cout << "Enter the value of a = "; cin >> a;
   }
 };
class y : public x
{
   private:
    int b;
   public:
   void getdata()
   {
     cout << "Enter the value of b = "; cin >> b;
   }
   void product()
   {
     cout << "Product = " << a * b;
   }
 };
 
 int main()
 {
    y y;
    y.putdata();
    y.getdata();
    y.product();
    return 0;
 } 
