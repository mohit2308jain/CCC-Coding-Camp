/***********************************************************************************************************************
Johny in a Matrix

You are given a matrix A of size NxN. Every cell has a value A[i][j] associated with it. Johny is standing currently at position (1,1) and he intends to get to cell (N,N).

The cost of going from cell (i,j) to cell(x,y) is A[i][j] * A[x][y].

Johny can either decided to travel in a row-major order or in a column-major order.

Your task is to find out which method will cost him less. Print "row-major" or "column-major" accordingly.

Input
First line contains an integer N 
Next N lines each contain N integers each denoting the value of the array A[][]

Output
Print either "row-major" or "column-major". If both ways cost the same then print "row-major".

Sample Input 0

2
1 2
3 4
Sample Output 0

column-major
Explanation 0

row major cost = 1x2 + 2x3 + 3x4 = 2 + 6 + 12 = 20 
col major cost = 1x3 + 3x2 + 2x4 = 3 + 6 + 8 = 17 
Hence the answer is column-major
************************************************************************************************************************/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,i,j,sum1=0,sum2=0,sum3=0,sum4=0;
    cin>>n;
    int arr[n+1][n+1];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            sum1 += arr[i][j]*arr[i][j+1];
        }
        sum3+=arr[i][j]*arr[i+1][0];
    }
    int s=sum3+sum1;
    
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            sum2 += arr[j][i]*arr[j+1][i];
        }
        sum4+=arr[i][j]*arr[i+1][0];
    }
    int s1=sum2+sum4;

    if(s>s1 || s==s1)
        cout<<"column-major";
    else if(s<s1)
        cout<<"row-major";
    
    return 0;
}

