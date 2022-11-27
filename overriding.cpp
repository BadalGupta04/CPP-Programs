#include <iostream>
using namespace std;

class a 
{
   public:
    void print() 
    {
        cout << "Base Function" << endl;
    }
};

class b : 
public a 
{
   public:
    void print() 
    {
        cout << "Derived Function" << endl;

        a::print();
    }
};

int main() 
{
    b b1;
    b1.print();
    return 0;
}