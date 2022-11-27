// Aim: Write a program to find out the sum of two private data members x and y of two classes A and B using a common friend function. Assume that the prototype for both the classes will be void sum (A, B);

// #include  
// <iostream>

// using namespace std;

// class B;       //declaration of class B

// class A
// {
// 	int value;
// 	public:
// 		A()
// 		{
// 			value = 8;
// 		}
// 		friend int sum(A, B);     // declaring friend function
// };

// class B
// {
// 	int value;
// 	public:
// 		B()
// 		{
// 			value = 6;
// 		}
// 		friend int sum(A, B);     // declaring friend function
// };

// int sum( A v1, B v2 )             // friend function definition
// {
// 	return (v1.value + v2.value);
// }

// int main()
// {
// 	A a;
// 	B b;
// 	cout << "Sum : " << sum( a, b ) << endl;
// 	return 0;
// }

// #include<iostream>
// using namespace std;

// class B;
// class A
// {

// private:
// int x;

// public:
// void input1()
// {

// cout<<"Enter a integer:"<<endl;
// cin>>x;

// }

// friend void sum(A f1,B f2);

// };

// class B
// {

// private:
// int y;

// public:
// void input2()
// {

// cout<<"Enter a integer:"<<endl;
// cin>>y;
// }

// friend void sum(A f1,B f2);

// };

// void sum(A f1,B f2)
// {

// cout<<"The addition of both the values are: "<<f1.x + f2.y<<endl;

// };

// int main()
// {

// A a;
// B b;
// int q;

// a.input1();
// b.input2();
// sum(a,b);
// return 0;

// }

#include<iostream>
using namespace std;

class B;
class A
{

private:
int x;

public:
void input1()
{

cout<<"Enter a integer:"<<endl;
cin>>x;

}

friend void sum(A f1,B f2);

};

class B
{

private:
int y;

public:
void input2()
{

cout<<"Enter a integer:"<<endl;
cin>>y;
}

friend void sum(A f1,B f2);

};

void sum(A f1,B f2)
{

cout<<"The addition of both the values are: "<<f1.x + f2.y<<endl;

};

int main()
{

A a;
B b;
int q;

a.input1();
b.input2();
sum(a,b);
return 0;

}