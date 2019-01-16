/****

Wave array

Given an array of integers, sort the array into a wave like array and return it. 
In other words, arrange the elements into a sequence such that a1 >= a2 <= a3 >= a4 <= a5.....

Example

Given [1, 2, 3, 4]

One possible answer : [2, 1, 4, 3]
Another possible answer : [4, 1, 3, 2]

NOTE : If there are multiple answers possible, return the one thats lexicographically smallest. So, in example case, you will return [2, 1, 4, 3]

Input Format

First line contains number N, the size of the array.
Second line contains N integers, the elements of the array.

Constraints

1 <= N <= 10^5
1 <= Array[i] <= 10^5
All elements in the array will be distinct.

Output Format

Output N integers, the lexicographically smallest wave array.

Sample Input 0

4
1 2 3 4
Sample Output 0

2 1 4 3



***************************************************************************************************************************/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void swap(int *x, int *y) 
{ 
    int temp = *x; 
    *x = *y; 
    *y = temp; 
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    int arr[n+2];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    for (int i=0; i<n-1; i+=2){
        swap(&arr[i],&arr[i+1]);
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
