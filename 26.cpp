#include<iostream>
using namespace std;

class bird{
    char name; 
    int weight = 0; 

    public:
    void getinfo(char n, int w)
    {
       name = n;
       weight = w;
    }
    bool operator > (bird s2)
    {
        if(weight > s2.weight)
        {
            return true;
        }

        return false;
    }

};

int main()
{
    bird s1,s2;

    s1.getinfo('Pigeon',10);
    s2.getinfo('Crow',6);

    if(s1 > s2)
        cout << "Weight 1 is greater" << endl;
    else if(s2 > s1)
        cout << "Weight 2 is greater" << endl;
    else
        cout << "Both have equal weight" << endl;


    return 0;
}