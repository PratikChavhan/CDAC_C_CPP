// diamond
#include<iostream>
using namespace std;
   int main() {
       for(int i=0;i<4;i++){
         for(int j=3-i;j>=1;j--){
           cout<<" ";
       }
        for(int k=0;k<=i;k++){
           cout<<("* ");
       }
       cout<<endl;
       }
         for(int i=0;i<4;i++){
         for(int j=0;j<=i;j++){
           cout<<" ";
       }
        for(int k=2-i;k>=0;k--){
           cout<<("* ");
       }
       cout<<endl;
       }
    }
