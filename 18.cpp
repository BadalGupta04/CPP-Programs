// Define a class matrix with an integer array of 3X3 as a data member. Define a friend function which adds two matrix objects and returns the resultant matrix object.


// #include 

// using namespace std;
// class matrix
// {
// int **p,row,col;
// public:
// void getdata(void);
// friend void matrixadd(matrix &,matrix &);
// void display(void);
// };

// void matrix :: getdata(void)
// {
// cout<<"Enter Size of Row:";
// cin>>row;
// p = new int [row];
// cout<<"Enter size of Coulumn:";
// cin>>col;
// cout<<"\n Enter Data for Matrix of size "<<row<<""<<col<<endl;
//  for(int i=0;i<row;i++)
//  {
//    p[i]=new int [col];
//  }
// //scanning value
// for(int a=0;a<row;a++)
// {
//   for(int b=0;b<col;b++)
//   {
//      cin>>p[a][b];
//   }
// }
// }


// void matrix :: display(void)
// {
// cout<<"\n\n\n\n";
// cout<<"Display Function\n\n";
// for(int i=0;i<row;i++)
// {
//    for(int j=0;j<col;j++)
//    {
//      cout<<"     "<<p[i][j];
//    }
// cout<<endl;
// }
// }

// void matrixadd(matrix &a,matrix &b)
// {
// int result[10][10];
// if(a.row==b.row && a.col==b.col)
// {
//   for(int i=0;i<a.row;i++)
//   {
//     for(int j=0;j<a.col;j++)
//     {
//          result[i][j]=a.p[i][j]+b.p[i][j];
//     }
//   }
// //displaying
//   for(int x=0;x<a.row;x++)
//   {
//     for(int y=0;y<a.col;y++)
//     {
//       cout<<"     "<<result[x][y];
//     }
//     cout<<endl;
//   }
// }
// else
//   cout<<"Invalid Matrix Addition Occurs as size differs\n";
// }

// int main()
// {
// matrix o1,o2;
// o1.getdata();
// o2.getdata();
// o1.display();
// o2.display();
// cout<<"\n\nAfter Adition Has been Performed\n\n";
// matrixadd(o1,o2);
// return 0;
// }

#include <iostream>
using namespace std;
class matrix
{
int **p,row,col;
public:
void getdata(void);
friend void matrixadd(matrix &,matrix &);
void display(void);
};

void matrix :: getdata(void)
{
cout<<"Enter Size of Row:";
cin>>row;
p=new int *[row];
cout<<"Enter size of Coulumn:";
cin>>col;
cout<<"\n Enter Data for Matrix of size "<<row<<"*"<<col<<endl;
 for(int i=0;i<row;i++)
 {
   p[i]=new int [col];
 }
//scanning value
for(int a=0;a<row;a++)
{
  for(int b=0;b<col;b++)
  {
     cin>>p[a][b];
  }
}
}


void matrix :: display(void)
{
cout<<"\n\n";
cout<<"Display Function\n";
for(int i=0;i<row;i++)
{
   for(int j=0;j<col;j++)
   {
     cout<<"     "<<p[i][j];
   }
cout<<endl;
}
}

void matrixadd(matrix &a,matrix &b)
{
int result[10][10];
if(a.row==b.row && a.col==b.col)
{
  for(int i=0;i<a.row;i++)
  {
    for(int j=0;j<a.col;j++)
    {
         result[i][j]=a.p[i][j]+b.p[i][j];
    }
  }
//displaying
  for(int x=0;x<a.row;x++)
  {
    for(int y=0;y<a.col;y++)
    {
      cout<<"     "<<result[x][y];
    }
    cout<<endl;
  }
}
else
  cout<<"Invalid Matrix Addition Occurs as size differs\n";
}

int main()
{
matrix o1,o2;
o1.getdata();
o2.getdata();
o1.display();
o2.display();
cout<<"\nAfter Adition Has been Performed\n";
matrixadd(o1,o2);
return 0;
}