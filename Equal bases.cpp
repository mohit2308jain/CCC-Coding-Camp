/****

Equal Bases


Given a decimal number N, you need to find the number of bases 1 < b <= n such that when the number N is represented in base 'b', it ends in a zero.

Input Format

Input contains only one number, N.

Constraints

1 <= N <= 10000

Output Format

Output one number, the number of bases b such that when number N is represented in base b, the number contains a trailing zero.

Sample Input 0

12
Sample Output 0

5


***************************************************************************************************************************/

#include <cmath>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,c=0,i;
    cin>>n;
    for(i=2;i<=n;i++){
        int m=n;
        int r=m%i;
        if(r==0){
            c++;
        }
    }
    cout<<c;

    
    return 0;
}
