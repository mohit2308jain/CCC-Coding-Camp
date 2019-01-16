/****************************************************************************************************

Discover The Right Number

Given a column title as appears in an Excel Spreadsheet, return its corresponding column number.
For Example :

A -> 1
B -> 2
....
....
Z -> 26
AA -> 27
Input Format

One string denoting the column title of an excel spreadsheet.

Constraints

The answer will always fit in a 32-bit integer.

Output Format

Output an integer.

Sample Input 0

AA
Sample Output 0

27


************************************************************************************************************/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string s;
    cin>>s;
    int res=0;
    for(int i=0;i<s.length();i++){
        res = res*26 + (s[i]-64);
    }
    cout<<res;
    
    
    return 0;
}
