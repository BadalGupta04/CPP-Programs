// Define a Class rectangle with two data members length and breadth. Use a parameterized constructor to initialize the values and create a copy of the object using the copy constructor and display the area of the rectangle.



// #include 
// <iostream>

// using namespace std;

// class Rectangle
// {
// 		int length;
// 		int breadth;
// 		public:
// 			Rectangle( int l, int b )
// 			{
// 				length = l;
// 				breadth = b;
// 			}
// 			int getArea()
// 			{
// 				return length * breadth;
// 			}
// };

// int main()
// {
// 	Rectangle rt( 7, 4 );
// 	cout << "Area : " << rt.getArea() << endl;
// 	return 0;
// }

// #include <iostream>

// using namespace std;

// class Rectangle
// {
//         int length;
//         int breadth;
//         public:
//             Rectangle( int l, int b )
//             {
//                 length = l;
//                 breadth = b;
//             }
//             int getArea1()
//             {
//                 return length * breadth;
//             }
//             int getArea2;
// };

// int main()
// {
//     Rectangle rt( 7, 4 );
//     rt.getArea2=rt.getArea1();
//     cout << "Area : " << rt.getArea2 << endl;
//     return 0;
// }

#include <iostream>

using namespace std;

class Rectangle
{
        int length;
        int breadth;
        public:
            Rectangle( int l, int b )
            {
                length = l;
                breadth = b;
            }
            int getArea1()
            {
                return length * breadth;
            }
            int getArea2;
};

int main()
{
    Rectangle rt( 7, 4 );
    rt.getArea2=rt.getArea1();
    cout << "Area : " << rt.getArea2 << endl;
    return 0;
}