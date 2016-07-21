/*
* This program is the 3rd day problem which demonstrate conditional statement
*/

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    
    //Now the conditional statement for Weird and Not Weird
    if((n % 2 == 0) && (n >= 2 && n <= 5))
        printf("Not Weird\n");
    else if((n % 2 == 0) && (n >= 6 && n <= 20))
        printf("Weird\n");
    else if((n % 2 == 0) && (n > 20))
        printf("Not Weird\n");
    else
        printf("Weird\n");
        
    return 0;
}
