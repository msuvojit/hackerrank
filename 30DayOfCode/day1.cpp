#include<iostream>
#include<iomanip>
#include<limits>

using namespace std;

int main()
{
    int i = 4;
    double d = 4.0;
    string s = "Hackerrank ";
    
    //declare variable
    int j;
    double b;
    string s1;
    
    //get user input
    cin >> j;
    cin >> b;
    cin.ignore();
    getline(cin,s1);
    
    //show result in screen
    cout << i + j << endl;
    cout << setprecision(1) << fixed << d + b << endl;
    cout << s+s1 <<endl;
    
    return 0;
}