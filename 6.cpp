//6)Electric bill

// electricity board charges the following rates to domestic users to discharge large consumption of energy
// For the first 100 units- 60 P per unit
// For next 200 units- 80P per unit An
// Beyond 300 units - 90P per unit
// All users are charged a minimum of Rs.50.00. If the totoal amount is more than Rs. 300.00 then an additional surcharge of 15% is added. Write a program to read the names of users and number of units consumed and print out the charges with names in c++


#include<iostream>
using namespace std;

class electric_bill
{

private:
int unit;
char name[10];

public:
float final_bill=0;
void input_detail();
void billing_process();
void display_final_bill();

};

void electric_bill::input_detail()

{

cout<<"Enter your name first and then unit: "<<endl;
cin>>name;
cin>>unit;

}

void electric_bill::billing_process()

{

if(unit<=100)
final_bill = unit*0.6 + 50;

else if(unit>100 && unit<=300)
final_bill = unit*0.8 + 50;

else

{

final_bill = unit*0.9 + 50;

if(final_bill>=300)
final_bill += final_bill*0.15; //final_bill = final_bill + final_bill*0.15;

}

}

void electric_bill::display_final_bill()
{

cout<<"Your name is "<<name<<"\nyour electricity bill is: "<<final_bill<<endl;

}

int main()
{

electric_bill eb;

eb.input_detail();
eb.billing_process();
eb.display_final_bill();
return 0;

}
