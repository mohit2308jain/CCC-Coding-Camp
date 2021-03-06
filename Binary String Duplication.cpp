/****

Consider a binary string, s, with an initial value of "0". We expand s by performing the following steps:

Create a string, t, where each character ti is equal to 1 - si. For example, if s = "01", then t = "10". 
Note that s and t always have the same length because t is the complement of s.
Append t to the end of s so that s(new) = s + t. In the example above, "01" becomes "0110".
We keep on expanding s using steps 1 and 2 infinitely. When we repeat the expansion operation, string s grows like this:
image
Given queries in the form of a zero-based index, , solve each query by printing the character at index in on a new line.

Input Format

The first line contains an integer denoting q (number of queries). 
Each of the q subsequent lines contains an integer describing the value of x for a query.

Constraints

0 <= x, q <= 1000

Output Format

For each query, print the value of s[x] (i.e., either 1 or 0) on a new line.

Sample Input 0

3
2
5
7
Sample Output 0

1
0
1
***************************************************************************************************************************/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,m;
    cin>>n;
    string c="0",c1;
    string s1="";
    s1.append(c);
    s1.append("1");
    while(s1.length()<=1000){
        string s2 = s1;
        for(int i=0;i<s2.length();i++){
            if(s2[i]=='0')
                c1="1";
            else if(s2[i]=='1')
                c1="0";
            s1.append(c1);
        }
    }
    for(int i=0;i<n;i++){
        cin>>m;
        cout<<s1[m]<<endl;
    }
    
    
    return 0;
}