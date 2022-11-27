// 8)Concept of namespace

// Write a program to illustrate the concept of namespace with two function name as setprice() having data members as productcode & price ensuring that they don’t collide.

#include<iostream>
using namespace std;
namespace first
{
void setprice()
{
int productid = 1093;
int price = 3000;
cout<<"Product-ID:"<<productid<<endl;
cout<<"Price:"<<price<<endl;
}
}
namespace second
{
void setprice()
{
int productid = 2107;
int price = 4500;
cout<<"Product-ID:"<<productid<<endl;
cout<<"Price:"<<price<<endl;
}
}
int main()
{
cout<<"Concept of namespace Illustrated."<<endl;
first::setprice();
cout<<"\n";
second::setprice();
return 0;
}
