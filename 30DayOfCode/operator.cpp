/*
* This program is for hackerrank 2nd day problem for 30 day of code.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    double mealCost;
    int tipPercent, taxPercent;
    cin>> mealCost >> tipPercent >> taxPercent;
    
    double tip = (mealCost * tipPercent) / 100;
    double tax = (mealCost * taxPercent) / 100;
    
    int totalCost = round(mealCost + tip + tax);
    printf("The total meal cost is %d dollars.\n", totalCost);
    return 0;
}
