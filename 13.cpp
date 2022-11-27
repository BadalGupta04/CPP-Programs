// Write a C++ program to find volume of cube, cylinder and rectangle box using function overloading.


#include<iostream>
#define pi 3.14
    using namespace std;
    float vol(int ,int );
    float vol(int ,int ,int );
    float vol(int );
    float vol(int a)
    {
        return(a*a*a);
    }
    float vol(int r,int c)
    {
        return(pi*r*r*c);
    }
    float vol(int l,int b,int h)
    {
        return(l*b*h);
    }
    
     
    int main()

    {
        int r,h,a,l,b,c;
        cout<<"Enter side of cube:\n";
        cin>>a;
        cout<<"Enter radius and height of a cylinder:\n";
        cin>>r>>c;
        cout<<"Enter length,breadth and height of the rectangle:\n ";
        cin>>l>>b>>h;
        cout<<"\nVolume of cube is "<<vol(a);
        cout<<"\nVolume of cylinder is "<<vol(r,c);
        cout<<"\nVolume of rectangle is "<<vol(l,b,h);
        return(0);
    }
