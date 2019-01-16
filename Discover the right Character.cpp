/****************************************************************************************************

Discover the right Character

Given a positive integer, return its corresponding column title as it would appear in an Excel Spreadsheet.
For Example :

1 -> A
2 -> B
....
....
26 -> Z
27 -> AA
Input Format

One integer denoting the column number.

Constraints

The integer size will be less than 32-bits.

Output Format

Output the corresponding column title.

Sample Input 0

27
Sample Output 0

AA


************************************************************************************************************/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long n;
    cin>>n;
    string res="";
    while(n>0){
        res = (char)('A'+(n-1)%26) + res;
        n = (n-1)/26;
    }
    cout<<res;
    
    return 0;
}
