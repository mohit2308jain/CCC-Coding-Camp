/****

All Char Compression

Here is a new proposed method of compressing strings : 
"Anywhere in the string if a character c occurs k number of times consecutively, it can be written as c"

Using this algorithm, your task is to compress the string such that its final length is minimum.

Note that it is not compulsory for you to compress every single character. You may choose to compress whatever characters you want. Only the length of the final string must be minimum.

INPUT
The input is one string that needs to be compressed.

OUTPUT
Print the final compressed string of minimum length

CONSTRAINTS
Length of input string will not be more than 1000.
Input string will consist of lowercase english alphabets only.

Sample Input 0

bbaannaannaa
Sample Output 0

banana


***************************************************************************************************************************/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char s[1000],s1[1000];
    cin>>s;
    int i=0,j,l=strlen(s);
    while(i<l){
        for(j=i+1;s[j]==s[i];j++){
            s[j]=' ';
        }
        if(s[i]!=' ')
            cout<<s[i];
        
        i++;
    }
    
    return 0;
}
