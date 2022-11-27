// Aim: Declare a class called book_details to represent details for a book, having data members like title, author, edition, price and no_of_copies_available. Define following functions:
// - constructor(s)
// - display to display all data members
// - find_books to find and display details of all books having price less than Rs. 250 //
// - main to create an array of book_details and to show usage of above functions




// #include<iostream>
// using namespace std;

// class test
// {
// 	int a,b;
// 	public:
// 	test(int x,int y)
// 	{
//     	a=x;
//     	b=y;
// 	}
// 	void add()
// 	{
//     	cout<<a+b<<endl;
// 	}
// };

// int main()
// {
// 	test obj[3]={test(1,2),test(5,5),test(7,7)};
// 	for(int i=0;i<3;i++)
// 	{
//     	obj[i].add();
// 	}
// 	return 0;
// }

// int sum(int a,int b)
// float sum(int a,float b)


// sum(5,6)
// sum(5,6.5)


#include<iostream>
using namespace std;

class book_detail
{
    char title[20];
    char author[15];
    int addition,price,noc;

    public:
    void book();
    void display();
    void search()
    {
        if(price<250)
        {
            display();
        }
    }
};
void book_detail::book()
{
    cout<<"\nenter book title:";
    cin>>title;
    cout<<"\nenter author of book:";
    cin>>author;
    cout<<"\naddition of book:";
    cin>>addition;
    cout<<"\nprice of book:";
    cin>>price;
    cout<<"\nnumber of copies available:";
    cin>>noc;
};
void book_detail::display()
{
    cout<<"\nbook title:"<<title;
    cout<<"\nauthor of book:"<<author;
    cout<<"\naddition:"<<addition;
    cout<<"\nprice:"<<price;
    cout<<"\nnumber of copies available:"<<noc;
}

int main()
{
    book_detail b[3];
    char ch;

    cout<<"\ndo you want to print all books less than 250 price?(y/n):";
    cin>>ch;
    if(ch=='y')
    {
        for(int i=0;i<3;i++)
        {
            b[i].search();
        }
    }
    else
    {
        cout<<"\nnot any books less than 250 price.";
    }

    return 0;
}