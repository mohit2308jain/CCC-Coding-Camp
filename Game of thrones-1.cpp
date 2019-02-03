/*

Game of Thrones - I

Dothraki are planning an attack to usurp King Robert's throne. King Robert learns of this conspiracy from Raven and plans to lock the single door through which the enemy can enter his kingdom.

door

But, to lock the door he needs a key that is an anagram of a palindrome. He starts to go through his box of strings, checking to see if they can be rearranged into a palindrome.

For example, given the string , one way it can be arranged into a palindrome is .

Function Description

Complete the gameOfThrones function below to determine whether a given string can be rearranged into a palindrome. If it is possible, return YES, otherwise return NO.

gameOfThrones has the following parameter(s):

s: a string to analyze
Input Format

A single line which contains , the input string.

Constraints

 |s| 
 contains only lowercase letters in the range 
Output Format

A single line which contains YES or NO.

Sample Input 0

aaabbbb
Sample Output 0

YES
////////////////////////////////////////////////////////////////////////////*/

#include <bits/stdc++.h>

using namespace std;

// Complete the gameOfThrones function below.
string gameOfThrones(string s) {
    int b1[26]={0},c=0;
    for(int i=0;i<s.length();i++){
        b1[s[i]-'a']++;
    }
    if(s.length()%2==0){
        for(int i=0;i<26;i++){
            if(b1[i]%2!=0){
                return "NO";
            }
        }
    }
    else{
        for(int i=0;i<26;i++){
            if(b1[i]%2!=0){
                c++;;
            }
        }
        if(c==1) return "YES";
        else return "NO";
    }
    return "YES";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
