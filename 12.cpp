// Write a program using a function with arguments to swap the values of a pair of integers using call by reference.


#include<iostream>
using namespace std;
int swapping(int *x,int *y);

int main()
{

int x,y;

cout<<"Enter values of x and y: "<<endl;
cin>>x>>y;

swapping(&x,&y);

}

int swapping(int *x,int *y)
{

int z;
z = *x;
*x = *y;
*y = z;

cout<<"x = "<<*x<<"\ny = "<<*y<<endl;
return 0;

}
