// Define Class named point which represents 2-D Point, i.e P(x, y). Define Default Constructor to initialize both data member value 5. Define Necessary Function and Write a program to test class Point.


#include<iostream>
using namespace std;
class Point
{
int x, y;
public :
Point() //Default Constructor
{
x=y=5;
}
Point(int a,int b) //Parameterised Constructor
{
x=a;
y=b;
}
Point(Point & P) //Copy Constructor
{
x=P.x;
y=P.y;
}
void display()
{
cout<<"("<<x<<","<<y<<")"<<endl;
}
};
int main()
{
Point P1;
Point P2 = P1; //Copy Constructor Call
cout<<"P1 : "; P1.display();
cout<<"P4 : "; P2.display();
return 0;
}