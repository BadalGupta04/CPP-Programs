#include <iostream>
using namespace std;
class Student{
    int s[5];
    public:
    void input()
    {
        for(int i=0;i<5;i++)
        {
            cin>>s[i];
        }
    }
    int calculateTotalScore()
    {
        int sum=0;
        for(int i=0;i<5;i++)
        {
            sum=sum+s[i];
        }
        return sum;
    }

};


int main() {
    int n; 
    cout << " Enter number of students to get data of: \n";
    cin >> n;
    Student *s = new Student[n]; 
    cout << "Enter the data of students: \n";
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    int kristen_score = s[0].calculateTotalScore();

    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }
    cout << "No. of students that got more than Kristen. \n";
    cout << count;
    
    return 0;
}