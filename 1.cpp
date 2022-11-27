// write a program to calculate the percentage of 5 subjects in c++


#include<iostream>
using namespace std;
int main()
{
    int s1, s2, s3, s4, s5, sum, total = 500;
    float per;
    cout<<"Enter marks of 5 subjects :\n ";
    cin>>s1>>s2>>s3>>s4>>s5;
    sum = s1 + s2 + s3 + s4 + s5;
    per = (sum * 100) / total;
    cout<<"Student Percentage Is : "<< per<<endl;
    return(0);
}
