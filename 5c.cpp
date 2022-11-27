// ABCD
//  123
//   EF
//    4


#include <iostream>
using namespace std;
int main()
{
int i , j , s , k = 1 , l = 1 ;
for(i=4; i>=1; i--)
{
for(s=i; s<=4-1; s++)
{
cout<<" ";
}
for(j=1; j<=i; j++)
{
if(i%2==0)
{
cout<<(char)(k+64);
k++;
}
else
{
cout<<l;
l++;
}
}
cout<<"\n";
}
return 0;
}


// #include <iostream>
// using namespace std;
// int main()
// {
// int i, j, s, k = 1, l = 1;
// for (i = 4; i >= 1; i--)
// {
// for (s = i; s <= 4 - 1; s++)
// {
// cout << " ";
// }
// for (j = 1; j <= i; j++)
// {
// if (i % 2 == 0)
// {
// cout << (char)(k + 64);
// k++;
// }
// else
// {
// cout << 1;
// i++;
// }
// }
// cout << "\n";
// }
// }