#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
struct knap{
  double we,val;
  double pro;
};
bool sortByPro(const knap &lhs, const knap &rhs) { return lhs.pro > rhs.pro; }

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    double n,w,g,h,a=0;
    double j,v=0;
    cin>>n>>w;
    vector<knap> pp(n);
    
    for(vector<knap>::size_type i=0; i!=n; ++i){
        cin>>pp[i].we;
        cin>>pp[i].val;
        j=pp[i].val/pp[i].we;
        pp[i].pro=j;
    }
    long long i;
    a=pp[0].we;
    for(i=0;i<n;i++){
        if(a>pp[i].we) a=pp[i].we;
    }
    
    if(w<a) cout<<"-1";
    else{
        sort(pp.begin(),pp.end(),sortByPro);

        for(i=0;i<n;i++){
            if(w>0 && pp[i].we<=w){
                w=w-pp[i].we;
                v=v+pp[i].val;
            }
            else break;
        }
        if(i==n && w>0){
            std::cout<<fixed<<setprecision(12)<<v;
        }
        else if(w>0){
            v=v+(pp[i].val*(w/pp[i].we));
            std::cout<<fixed<<setprecision(12)<<v;
        }
    }
    
    
    return 0;
}
