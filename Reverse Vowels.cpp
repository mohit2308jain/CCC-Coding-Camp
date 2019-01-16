/****
Reverse Vowels


Given a string, reverse only vowels in it. Leave the remaining string as it is.

Input Format

One string.

Constraints

1 <= Length of string <= 10^5

Output Format

One string, the original string with vowels reversed.

Sample Input 0

trumpisshit
Sample Output 0

trimpisshut


***************************************************************************************************************************/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int vowel(char s){
    if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u'||s=='A'||s=='E'||s=='I'||s=='O'||s=='U'){
        return 1;
    }

    return 0;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char s[100000];
    cin>>s;
    
    char vow[10000];
    int j=0,i;
    for(i=0;s[i]!='\0';i++){
        if(vowel(s[i])){
            vow[j]=s[i];
            j++;
        }
    }
    for(i=0;s[i]!='\0';i++){
        if(vowel(s[i])==1){
            --j;
            s[i]=vow[j];
        }
    }
    cout<<s;
    
    
    
    return 0;
}
