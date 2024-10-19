#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,max_perfect_square;
    max_perfect_square=0;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        double temp=sqrt(a[i]);
        if (temp==int(temp)){
            if (max_perfect_square<a[i]){
                max_perfect_square=a[i];
            }
        }
    }
    if (max_perfect_square==0){
        return 0;
    }else{
        cout<<max_perfect_square;
    }
    return 0;

}