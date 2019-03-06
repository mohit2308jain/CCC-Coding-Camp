/***************************************************************************************

Jason is trapped in a forest with n hungry monsters and must use his trusty blaster to defend himself! Each monster i has a 
health value, hi.Jason can discharge his blaster at a monster once per second and reduce its health points by hit units. 
Once a monster's health points become <= 0, it dies.

Given the health values for each monster and an integer,
, can you determine the maximum number of monsters he can kill in

seconds? Assume Jason always hits his target!

Sample Input 0

7 8 6
16 19 7 11 23 8 16

Sample Output 0

4

**************************************************************************************/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long long n,hit,t,i,j;
    cin>>n>>hit>>t;
    long long arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long k=0;
    for(i=0;i<n;i++){
        int second = ceil(arr[i]/(double)hit);
        if(t>=second){
            t=t-second;
            k++;
        }
        else{
            break;
        }
    }
    cout<<k;
    
    return 0;
}
