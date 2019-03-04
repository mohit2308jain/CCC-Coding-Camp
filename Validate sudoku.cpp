/***************************************************************************************************************

You will be given a completely filled sudoku. You have to verify whether the given sudoku's are correctly filled or not.

Rules of sudoku: 1.Each of the nine blocks has to contain all the numbers 1-9 within its squares. 2.Each number can only appear once in a row, column or box.

Input Format

First line contains "T" which denotes no.of test cases

Followed by T number of sudoku's and sudoku is a 9x9 matrix which contains all the elements ranging in between 1 to 9

Constraints

1<=T<=10

Output Format

If the sudoku is valid print as "Valid" else "inValid"

print every ans in new line

Sample Input 0

1
4 3 5 2 6 9 7 8 1
6 8 2 5 7 1 4 9 3
1 9 7 8 3 4 5 6 2
8 2 6 1 9 5 3 4 7
3 7 4 6 8 2 9 1 5
9 5 1 7 4 3 6 2 8
5 1 9 3 2 6 8 7 4
2 4 8 9 5 7 1 3 6
7 6 3 4 1 8 2 5 9
Sample Output 0

Valid

********************************************************************************************************/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
/* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t,n=9,i,j;
    cin>>t;
    while(t--){
        int f=0;
        int sudoku[9][9];
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cin>>sudoku[i][j];
            }
        }

        long long sum=362880,sum1,sum2=45,sum3=0;

        for(i=0;i<n;i++){
            sum1=1;
            sum3=0;
            for(j=0;j<n;j++){
                sum1*=sudoku[i][j];
                sum3+=sudoku[i][j];
            }
            if(sum1!=sum && sum3!=sum2){
                f=1;
                break;
            }
        }
        if(f!=1){
            for(i=0;i<n;i++){
                sum1=1;
                sum3=0;
                for(j=0;j<n;j++){
                    sum1*=sudoku[j][i];
                    sum3+=sudoku[j][i];
                }
                if(sum1!=sum && sum3!=sum2){
                    f=1;
                    break;
                }
            }
        }
        if(f!=1){
            for(i=0;i<n;i=i+3){
                sum1=1;
                sum3=0;
                for(j=0;j<n;j=j+3){
                    sum1 = (sudoku[i][j]*sudoku[i][j+1]*sudoku[i][j+2]*sudoku[i+1][j]*sudoku[i+1][j+1]*
                             sudoku[i+1][j+2]*sudoku[i+2][j]*sudoku[i+2][j+1]*sudoku[i+2][j+2]);
                    sum3 = (sudoku[i][j]+sudoku[i][j+1]+sudoku[i][j+2]+sudoku[i+1][j]+sudoku[i+1][j+1]+
                             sudoku[i+1][j+2]+sudoku[i+2][j]+sudoku[i+2][j+1]+sudoku[i+2][j+2]);
                }
                if(sum1!=sum && sum3!=sum2){
                    f=1;
                    break;
                }
            }
        }

        if(f==1) cout<<"inValid"<<endl;
        else cout<<"Valid"<<endl;
    }


    return 0;
}
