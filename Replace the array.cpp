/****

Replace The Array

Given an array of integers, replace every element with the greatest element on the right side in the array. Replace last element with 0 as there no element on the right side of it.

Input Format

First line contains N , the number of Numbers. Next line contains N integers a[1]..a[n] the numbers

Constraints

1<= N <= 10^5
1<= ai <= 10^5

Output Format

Print the array required

Sample Input 0

6
6 7 4 3 5 2
Sample Output 0

7 5 5 5 2 0


***************************************************************************************************************************/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int n,i,j;
    cin>>n;
    long long int arr[n+1];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    long long int temp,max=arr[n-1]; 
    arr[n-1] = 0; 
    
    for(i=n-2;i>=0;i--){
        temp = arr[i]; 
        arr[i] = max; 
        if(max<temp) 
            max=temp; 
    } 
    for(i=0;i<n;i++) 
        cout<<arr[i]<<" "; 
    
    return 0;
}