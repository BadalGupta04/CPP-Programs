//  An election is contested by five candidates. The candidates are numbered 1 to 5 and the voting is done by marking the candidate number on the ballot paper. Write a program to read the ballots and count the votes cast for each candidate using an array variable count. In case a number is read outside the range of 1 to 5, the ballot should be considered as a ‘spoilt ballot’ and the program should also count the number of spoilt ballots.



// #include <iostream>
//     using namespace std;

// class Election{
//     int sb = 0, count[5] = {0};
// public:
//     Election(){
//         cout<<"Election \n";
//         cout<<"Press 1 to vote for candidate 1 \n";
//         cout<<"Press 2 to vote for candidate 2 \n";
//         cout<<"Press 3 to vote for candidate 3 \n";
//         cout<<"Press 4 to vote for candidate 4 \n";
//         cout<<"Press 5 to vote for candidate 5 \n"<<endl;
//     }
//     void castvote(){
//         int vote;
//         cout<<"Please cast your vote \n" ;
//         cin>>vote;
//         if(vote >= 1 && vote <= 5)
//            count[vote - 1]++;
//         else
//            sb++;
//     }
//     void electionresult(){
//         cout<<"Election Results" << endl;
//         for(int i=0;i<5;i++)
//             cout<<"candidate "<< i+1 <<" gets "<< count[i]<<" no. of votes \n";
//             cout<<"spoilt ballots "<<sb<<endl;
//     }
// };

// int main(){
//     char choice;
//     Election ele;
//     do{
//         ele.castvote();
//         cout<<"anyone left ?(y/n) \n";
//         cin>>choice;
//     }
//     while
//     (toupper(choice)=='Y');
//     ele.electionresult();
//     return 0;
// }



#include<iostream>
using namespace std;
main()
{
int a[5]={0,0,0,0,0};
int n,vote,sb=0,i;
 cout<<"Enter the number of votes\n";
 cin>>n;
 cout<<"There are 5 candidates , pls seleact any one \n";
for(i=0;i<n;i++)
 {
 cout<<"Enter your vote : ";
 cin>>vote;
switch(vote)
 {
case 1:a[0]++;
break;
case 2:a[1]++;
break;
case 3:a[2]++;
break;
case 4:a[3]++;
break;
case 5:a[4]++;
break;
default:sb++;
 }
 }
 cout<<"\n\nResults of Election are as follows\n";
for(i=0;i<5;i++)
 cout<<"\ncandidate "<<i+1<<" : "<<a[i];
 cout<<"\nSpoiled Ballots : "<<sb;
}