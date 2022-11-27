// Aim: Write a menu driven C++ program using class to perform all arithmetic operation (+,-,*,/) (use inline function).


// #include<iostream>
// using namespace std;
// int main() 
// {
	
// 	int operatorl;
// 	float num1,num2;
	
// 	cout <<"1.Addition \n2.Subtraction \n3.Multiplication \n4.Division\n \n";
	
// 	cout <<"Enter any arithmetic operator:";
// 	cin >>operatorl;
	
// 	cout <<"\n\nEnter any two numbers: \n";
// 	cin>>num1>>num2;
	
// 	switch(operatorl) 
//     {
		
// 		case 1:
// 			cout <<"Addition of two number is  \n" << num1+num2;
// 			break;
// 		case 2:
// 			cout <<"Subtraction of two number is  \n" << num1-num2;
// 			break;
// 		case 3:
// 			cout <<"Multiplication of two number is  \n" << num1*num2;
// 			break;
// 		case 4:
// 			cout <<"Division of two number is  \n" << num1/num2;
// 			break;
// 		default:
// 			cout <<"Invalid!! \n";
		
// 	}
// }

// #include <iostream>
// #include<conio>
// #include<stdio>
// #include<stdlib>
// using namespace std;
// class arithmatic
// {
// public:
// inline double add(double a,double b)
// {
// return (a+b);
// }
// inline double sub(double a,double b)
// {
// return (a-b);
// }
// inline double multip(double a,double b)
// {
// return (a*b);
// }
// inline double div(double a,double b)
// {
// return (a/b);
// }
// };
// void main()
// {
// int ch;
// double x,y,t;
// arithmatic obj;
// do
// {
// cout<<“\n\tMENU \n”;
// cout<<“1.Addition\n 2.Subtraction\n”;
// cout<<“3.Multiplication\n 4.Division\n 5.Exit\n”;
// cout<<“\n\tEnter youer choice: “;
// cin>>ch;
// switch(ch)
// {
// case 1:
// cout<<“\nEnter two number: “;
// cin>>x>>y;
// t=obj.add(x,y);
// cout<<“Addition “<<x<<“+”<<y<<“=”<<t<<endl;
// break;
// case 2:
// cout<<“\nEnter two number: “;
// cin>>x>>y;
// t=obj.sub(x,y);
// cout<<“Subtractin “<<x<<“-“<<y<<“=”<<t<<endl;
// break;
// case 3:
// cout<<“\nEnter two number: “;
// cin>>x>>y;
// t=obj.multip(x,y);
// cout<<“\nMultiplication “<<x<<“*”<<y<<“=”<<t<<endl;
// break;
// case 4:
// cout<<“\nEnter two number: “;
// cin>>x>>y;
// t=obj.div(x,y);
// cout<<“Division “<<x<<“/”<<y<<“=”<<t<<endl;
// break;
// case 5:
// break;
// }
// }while(ch!=5);
// getch();
// }

// #include <iostream>
// using namespace std;

// Inline int add(int a,int b)
// {
//     return a+b;
// }

// Inline int sub(int a,int b)
// {
//     return a-b;
// }
// Inline int mul(int a,int b)
// {
//     return a*b;
// }
// Inline float divi(float a,float b)
// {
//     return a/b;
// }
// int main() {
 
//     int a,b,c;
//     int s,m;
//     float d;
//     int choice;
    
//     do
//     {
//        cout<<"1. addition"<<endl;
//        cout<<"2. substraction"<<endl;
//        cout<<"3. multiplication"<<endl;
//        cout<<"4. division"<<endl;
//        cout<<"5. exit"<<endl;
  
       
//         cout<<"enter the number between 1to5 = ";
//         cin>>choice;
//         switch(choice)
//         {
//             case 1:
//            cout<<"enter the number =";
//            cin>>a>>b;
//            cout<<add(a,b)<<endl;
//             break;
            
//             case 2:
//             cout<<"enter the number = ";
//             cin>>a>>b;
//             cout<<sub(a,b)<<endl;
//             break;
//             case 3:
//            cout<<"enter the number =";
//            cin>>a>>b;
//            cout<<mul(a,b)<<endl;
//             break;
//             case 4:
//            cout<<"enter the number =";
//            cin>>a>>b;
//            cout<<divi(a,b)<<endl;
//             break;
//             case 5:
//            cout<<"exit"<<endl;
//             exit(0);
//             default:
//             cout<<"you entered wrong number "<<endl;
//     }
//     }
        
//         while(choice>=1 && choice<=5);
    
//       return 0;
// }

#include<iostream>
using namespace std;
class arithmatic
{
public:
inline double add(double a,double b)
{
return (a+b);
}
inline double sub(double a,double b)
{
return (a-b);
}
inline double multip(double a,double b)
{
return (a*b);
}
inline double div(double a,double b)
{
return (a/b);
}
};
int main()
{
int ch;
double x,y,t;
arithmatic obj;
do
{
cout<<"\n\tMENU \n";
cout<<"1.Addition\n2.Subtraction\n";
cout<<"3.Multiplication\n4.Division\n5.Exit\n";
cout<<"\n\tEnter your choice: ";
cin>>ch;
switch(ch)
{
case 1:
cout<<"\nEnter two number: ";
cin>>x>>y;
t=obj.add(x,y);
cout<<"Addition "<<x<<"+"<<y<<"="<<t<<endl;
break;
case 2:
cout<<"\nEnter two number: ";
cin>>x>>y;
t=obj.sub(x,y);
cout<<"Subtractin "<<x<<"-"<<y<<"="<<t<<endl;
break;
case 3:
cout<<"\nEnter two number: ";
cin>>x>>y;
t=obj.multip(x,y);
cout<<"\nMultiplication "<<x<<""<<y<<"="<<t<<endl;
break;
case 4:
cout<<"\nEnter two number: ";
cin>>x>>y;
t=obj.div(x,y);
cout<<"Division "<<x<<"/"<<y<<"="<<t<<endl;
break;
case 5:
break;
}
}while(ch!=5);
return 0;
}