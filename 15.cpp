// Write a C++ program using class to calculate simple interest amount use default value for rate.


// #include<iostream>
// using namespace std;
// class interest
// {
//   float p, t, r, i;

// }
// int main()
// {
//   interest x ;
//   cout <<" Principle Amount : "; 
//   cin>>p ; 
//   cout<<" Rate of Interest : "; 
//   cin>>r; 
//   cout <<" Number of years : "; 
//   cin>>t; 

//   i = (p*t*r)/100;

//   cout << "Simple Interest = " << i << endl;

//   return 0;
// }

// #include<iostream.h>
// #include<conio.h>
// class interest
// {
// int n;
// float rate,p;
// public:
// void get()
// {
// cout<<“\nEnter principle Amount & no. of year: \n”;
// cin>>p>>n;
// }
// void cal(float rate)
// {
// float si;
// si=(p*n*rate)/100;
// cout<<“\n\nSimple Interest is: “<<si;
// }
// };
// void main()
// {
// interest i;
// clrscr();
// i.get();
// i.cal(4.5);
// getch();
// }


#include<iostream>
using namespace std;
class interest
{
  public:
  float p, t, r = 0.69, i;
};
int main()
{
  interest x ;
  cout <<" Principle Amount : "; 
  cin>>x.p ; 
  
  cout <<" Number of years : "; 
  cin>>x.t; 

  x.i = (x.p*x.t*x.r)/100;

  cout << "Simple Interest = " << x.i << endl;

  return 0;
}