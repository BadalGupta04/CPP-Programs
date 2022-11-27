// #include <iostream>
// using namespace std;

// class A
// {
//   public:
//     void display()
//     {
//         cout <<"This is method of A";
//     }
// };

// class B
// {
//   public:
//     void display()
//     {
//         cout <<"This is method of B";
//     }
// };

// class C: public A, public B

// {
//   public:
// };

// int main()
// {
//     C sample;
//     sample.A::display();
//     cout<<endl<<endl;
//     sample.B::display();
//     return 0;
// }




#include <iostream>
using namespace std;

class A
{
  public:
    void display1()
    {
        cout <<"This is method of A";
    }
};

class B
{
  public:
    void display2()
    {
        cout <<"This is method of B";
    }
};

class C: public A, public B

{
  public:
     void display3()
    {
        cout <<"This is method of C";
    }
};

int main()
{
    C c;
     c.display1();
     cout<<endl;
     c.display2();
     cout<<endl;
     c.display3();
    return 0;
} 