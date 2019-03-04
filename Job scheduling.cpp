/*******************************************************************************************
You are given N tasks.

The ith task has deadline Ti and generates a profit of Pi. Every task takes one second to complete. Time starts at t = 0.

Your task is to find an optimal way to do the tasks so as to generate the maximum amount of total profit.

You have to print the maximum possible profit that you were able to make.

INPUT
First line contains the number of test cases T.
For every test case : 
First line contains the integer N.
Next line contains N integers denoting the array T.
Last line contains N integers denoting the array P.

OUTPUT
Print one number, the maximum profit that you can make for every test case on a new line

NOTES
1 ≤ N, Ti, Pi ≤ 1000

Sample Input 0

2
4
4 1 1 1
20 10 40 30
5
2 1 2 1 3
100 19 27 25 15
Sample Output 0

60
142

**********************************************************************************************************/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct job{
    int deadline;
    int profit;
};
bool com(job a, job b){
    return (a.profit>b.profit);
}
void Schedule(job jj[],int n){
    int maxdead=0,i,j;
    for(i=0;i<n;i++){
        if(jj[i].deadline>maxdead) maxdead=jj[i].deadline;
    }
    
    bool slot[maxdead];
    int profit1=0;
    
    for(i=0;i<maxdead;i++){
        slot[i]=false;
    }
    
    for(i=0;i<n;i++){
        for(j=min(maxdead,jj[i].deadline)-1;j>=0;j--){
            if(!slot[j]){
                slot[j]=true;
                profit1+=jj[i].profit;
                break;
            }
        }
    }
    cout<<profit1<<endl;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        struct job jj[n];
        for(i=0;i<n;i++){
            cin>>jj[i].deadline;
        }
        for(i=0;i<n;i++){
            cin>>jj[i].profit;
        }
        sort(jj,jj+n,com);
        Schedule(jj,n);
    }
    
    return 0;
}
