// Aim:  Write a C++ program to calculate the value of the following series using copy constructor and Inline member function.

// S = 1^2 + 2^2 + 3^2 + 4^2 . . . + n^2

// User : 6  
// 1+4+9+16+25+36 = 




// #include
// using namespace std;

// class Series
// {
//         int num, i, sum;
//     public:
//         Series(int x)
//         {
//                 num=x;
//                 sum=0;
//         }
//         Series (Series &x)
//         {
//                 num=x.num;
//                 sum=0;
//         }
//         void calculate();
//         void display();
// };
// inline void Series::calculate()
// {
//         for(i=1; i<=num; i++)
//         {
//                 sum=sum+i*i;
//         }
// }
// inline void Series::display()
// {
//         cout<<"\n Value of the Series : "<<sum;
// }
// int main()
// {
//         int x;
//         cout<<"\n Enter Value : ";
//         cin>>x;

//         Series se1(x);
//         se1.calculate();
//         se1.display();

//         Series se2(se1);
//         se2.calculate();
//         se2.calculate();

//         return 0;
// }

#include<iostream>
using namespace std;

class Series
{
        int num, i, sum;
    public:
        Series(int x)
        {
                num=x;
                sum=0;
        }
        Series (Series &x)
        {
                num=x.num;
                sum=0;
        }
        void calculate();
        void display();
};
inline void Series::calculate()
{
        for(i=1; i<=num; i++)
        {
                sum=sum+i*i;
        }
}
inline void Series::display()
{
        cout<<"\n Value of the Series : "<<sum;
}
int main()
{
        int x;
        cout<<"\n Enter Value : ";
        cin>>x;

        Series se1(x);
        se1.calculate();
        se1.display();

        Series se2(se1);
        se2.calculate();
        se2.calculate();

        return 0;
}