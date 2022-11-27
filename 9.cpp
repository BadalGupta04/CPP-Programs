//9) Program to find prime number 

// Write a program to check whether the number is prime or not using a) a function with argument but no return value 
// b) a function with argument and return value.


#include<iostream>
using namespace std;
int prime1(int n);
int prime2(int n);

int main()
{

int n,ans;

cout<<"Enter any number: "<<endl;
cin>>n;

ans = prime2(n);

(ans == 1) ? cout<<"Given number is not prime"<<endl : cout<<"Given number is prime"<<endl;

return 0;
}

int prime1(int n)
{

int div,i,check=0;

div = n/2;

for(i=2 ; i<=div ; i++)
{

if(n%i == 0)
{
    check = 1;
    break;
}

}
if(check == 1)
cout<<"Given number is not prime";

else
cout<<"Given number is prime";

return 0; //sign of completion of program
}

int prime2(int n)
{

int div,i,check=0;

div = n/2;

for(i=2 ; i<=div ; i++)
{

if(n % i == 0)
check = 1;

else
break;
}
return check;
}