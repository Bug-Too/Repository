#include<iostream>
using namespace std;

int main(){
    int input = 1;
    int Evennumbers = 0;
    int Oddnumbers = 0;
    cout << "Enter an integer: ";
    cin >> input;
    if (input!=0)
    {
        while (input!=0)
    {
        
        if (input%2==0)
        {
            Evennumbers++;
        }
        if (input%2!=0)
        {
            Oddnumbers++;
        }
        cout << "Enter an integer: ";
        cin >> input;
        
    }
    }
    cout << "#Even numbers = " << Evennumbers << "\n";    
    cout << "#Odd numbers = "<< Oddnumbers;
    return 0;
}
