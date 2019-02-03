/*

Weighted Uniform Strings

A weighted string is a string of lowercase English letters where each letter has a weight. Character weights are  to  from  to  as shown below:

image

We define the following terms:

The weight of a string is the sum of the weights of all the string's characters. For example:

image

A uniform string consists of a single character repeated zero or more times. For example, ccc and a are uniform strings, but bcb and cd are not.
Given a string, , let  be the set of weights for all possible uniform contiguous substrings of string . You have to answer queries, where each query  consists of a single integer, . For each query, print Yes on a new line if ; otherwise, print No instead.

Note: The  symbol denotes that  is an element of set .

Function Description

Complete the weightedUniformStrings function in the editor below. It should return an array of strings, either Yes or No, one for each query.

weightedUniformStrings has the following parameter(s):

s: a string
queries: an array of integers
Input Format

The first line contains a string , the original string. 
The second line contains an integer , the number of queries. 
Each of the next  lines contains an integer , the weight of a uniform subtring of  that may or may not exist.

Constraints

 will only contain lowercase English letters, ascii[a-z].
Output Format

Print  lines. For each query, print Yes on a new line if . Otherwise, print No.

Sample Input 0

abccddde
6
1
3
12
5
9
10
Sample Output 0

Yes
Yes
Yes
Yes
No
No
////////////////////////////////////////////////////////////////////////////*/

#include <bits/stdc++.h>

using namespace std;

// Complete the weightedUniformStrings function below.
vector<string> weightedUniformStrings(string s, vector<int> queries) {
    int arr[26] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
    
    vector <bool> a(10e7);
    vector <string> s1;
    int i,j,sum=0,su;
    for(i=0;i<s.length();i++){
        sum=0;
        for(j=0;s[i]==s[i+j];j++){
            su = arr[s[i]-'a'];
            sum += su;
        }
        a[sum]=true;
    }

    for(i=0;i<queries.size();i++){
        if(a[queries[i]]) s1.push_back("Yes");
        else s1.push_back("No");
    }
    return s1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int queries_count;
    cin >> queries_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> queries(queries_count);

    for (int i = 0; i < queries_count; i++) {
        int queries_item;
        cin >> queries_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        queries[i] = queries_item;
    }

    vector<string> result = weightedUniformStrings(s, queries);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
