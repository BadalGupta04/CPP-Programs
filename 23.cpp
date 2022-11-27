// Aim:  Write a program to highlight the concept of constructor overloading and count the number of objects created for that class.


#include <iostream>
using namespace std;

class Person 
{
   private:
    int age;

   public:
    // 1. Constructor with no arguments
    Person() 
    {
        age = 20;
    }

    // 2. Constructor with an argument
    Person(int a) 
    {
        age = a;
    }

    int getAge() 
    {
        return age;
    }
};

int main() 
{
    int i = 0;
    Person person1, person2(45);

    cout << "Person1 Age = " << person1.getAge() << endl;
    i++;
    cout << "Person2 Age = " << person2.getAge() << endl;
    i++;
    cout << "Number of Objects created : " << i <<endl;
    return 0;
}