/*******************************************
Robin Scherbatsky, a proud canadian wants to turn on all the light bulbs as she is scared to go into the dark.

N light bulbs are connected by a wire. Each bulb has a switch associated with it, however due to faulty wiring, a switch also changes the state of all the bulbs to the right of current bulb. Given an initial state of all bulbs, find the minimum number of switches you have to press to turn on all the bulbs. You can press the same switch multiple times.

Note : 0 represents the bulb is off and 1 represents the bulb is on.

Input Format

First line contains an integer N.
Next line contains N binary integers (0 or 1).

Constraints

1 <= N <= 105

Output Format

Output the minimum number of switches you'll need to press.

Sample Input 0

4
0 1 0 1
Sample Output 0

4

*********************************************************************/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long n,c=0,i,j;
    cin>>n;
    long long arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        if(arr[i]==0){
            for(j=i+1;j<n;j++){
                if(arr[j]==0) arr[j]=1;
                else arr[j]=0;
            }
            c++;
        }
    }
    cout<<c;
    
    return 0;
}
