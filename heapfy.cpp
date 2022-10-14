#include<iostream>
using namespace std;
void heapfy(int arr[],int n,int i){
	int largest = i;
	int left = 2*i;
	int right =2*i+1;
	if(left < n && arr[largest] < arr[left]){
		largest = left;
	}
	if(right < n && arr[largest] < arr[right]){
		largest = right;
	}
	if(largest != i){
		swap(arr[largest],arr[i]);
		heapfy(arr,n,largest);
	}
}
int main(){
	int arr[6]={-1,8,4,2,5,9};
	int n=5;
	
	for(int i=n/2;i>0;i--){
		heapfy(arr,n,i);
	}
	for(int i=1;i<=n;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
