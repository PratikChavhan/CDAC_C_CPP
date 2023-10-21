// sort
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int arr[7]={33,22,1,54,653,9,77};
	int n=sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+n);
	for(int i=0;i<7;i++){
		cout<<arr[i]<<" ";
	}
}
