/***********************************************************************************************************************

Trick or Treat!

Halloween is around and Ted Mosby ( who loves kids ) wants to give away candies. Ted has N bags of candies, each bag has Candies equal to A[i] stored in an array A[N]. There are M kids and each kid wants a specific amount of candy C[i] stored in an array C[M].

For every kid i, you are to print "Happy Halloween!" if C[i] is present in the array A[N]. If C[i] is not present in the array, print "Tricky!".

Hint1 : You can use binary search to find out whether an element is present in the array or not.

INPUT

First line contains the number N(1 <= N <= 10^5), size of array A[N]. Second line contains N space separated integers, denoting the elements of the array A. (1 <= A[i] <= 10^9) Third line contains the number M(1 <= M <= 10^5), size of array C[M]. Fourth line contains M space separated integers, denoting the elements of the array C. (1 <= C[i] <= 10^9)

OUTPUT

Print M lines of output. ith line being "Happy Halloween!" if C[i] is present in A[N] and "Tricky!" otherwise.

Sample Input 0

5
2 4 6 8 10
5
5 4 3 2 1
Sample Output 0

Tricky!
Happy Halloween!
Tricky!
Happy Halloween!
Tricky!
Contest ends in 
************************************************************************************************************************/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int binarysearch(int arr[],int l,int r,int k){
    if(l<=r){
        int m=(l+r)/2;
        
        if(arr[m]==k)
            return 1;
        else if(arr[m]>k)
            return binarysearch(arr,l,m-1,k);
        else if(arr[m]<k)
            return binarysearch(arr,m+1,r,k);
        else 
            return 0;  
    }
    else
        return 0;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,m,x,i;
    cin>>n;
    int arr[n+1];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>m;
    int arr1[m+1];
    for(i=0;i<m;i++){
        cin>>arr1[i];
    }
    
    for(i=0;i<m;i++){
        x=binarysearch(arr,0,n-1,arr1[i]);
        if(x==1)
            cout<<"Happy Halloween!"<<endl;
        else if(x==0)
            cout<<"Tricky!"<<endl;
    }
    
    
    
    
    return 0;
}
