#include<iostream>
using namespace std;
class heap{
	public:
		int arr[100];
		int size;
		heap(){
			arr[0]=-1;
			size=0;
		}
		void insert(int value){ 
			size = size + 1;
			int index = size;
			arr[index] = value;
			while(index > 1){
				int parent = index/2;
				if(arr[parent] < arr[index]){
					swap(arr[parent],arr[index]);
					index = parent;
				}
				else{
					return  ;
				}
			}
		}
		void deleteion(){
			if(size==0){
				cout<<"Heap is empty";
				return ;
			}
			else{
				arr[1] = arr[size];
				size--;
				int i=1;
				int left = 2*i;
				int right = 2*i+1;
				if(left < size && arr[i] < arr[left]){
					swap(arr[i],arr[left]);
					i=left;
				}
				else if(right < size && arr[i] < arr[right]){
					swap(arr[i],arr[right]);
					i=right;
			}
			else{
				return ; 
			}
		}
	}
		void print() {
			for(int i=1;i<=size;i++){
				cout<<arr[i]<<" ";
			}cout<<endl;
	   }
	
};
int main(){
	heap h;
	h.insert(5);
	h.insert(7);
	h.insert(3);
	h.insert(4);
	h.insert(8);
	h.print();
	h.deleteion();
	h.print();
	
}
