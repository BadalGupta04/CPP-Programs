// #include <cmath>
// #include <iostream>
// using namespace std;
// int main() 
// {
//    int num, realNum, remainder, n = 0, result = 0, power;
//    cout << "Enter a number: ";
//    cin >> num;
//    realNum = num;
//    while (realNum != 0) 
//    {
//       realNum /= 10;
//       ++n;
//    }
//    realNum = num;
//    while (realNum != 0) 
//    {
//       remainder = realNum % 10;
//       power = round(pow(remainder, n));
//       result += power;
//       realNum /= 10;
//    }
//    if (result == num)
//       cout << num << " is an Armstrong number.";
//    else
//       cout << num << " is not an Armstrong number.";
//    return 0;
// }


// WAP to check give number is Armstrong number or not.


#include <iostream>
using namespace std;

int main() 
{
    int num, originalNum, remainder, result = 0;
    cout << "Enter a three-digit integer: ";
    cin >> num;
    originalNum = num;

    while (originalNum != 0) {
        // remainder contains the last digit
        remainder = originalNum % 10;

        result = result + (remainder * remainder * remainder);

        // removing last digit from the orignal number
        originalNum /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return(0);
}