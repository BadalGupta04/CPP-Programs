// Write a C++ program to use scope resolution operators. When a class has a function prototype inside but the definition is outside of the class.


#include <iostream>

using namespace std;

class My_Class
{
public:
    int my_variable = 10;
    void display(); 
};

void My_Class :: display()
{ 
   cout << endl << "We are in display now!" << endl;
   cout << "my_variable value is " << my_variable << endl << endl;
}

int main()
{

    My_Class obj;
    cout << "We are in main now" << endl; 
    obj.display();
    cout << "We are again in mail!!" << endl;

    return 0;
}