#include<iostream>
using namespace std;
 
 void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}
 void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int midIndex=i;

        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[midIndex])
            midIndex=j;
        }
        swap(arr[midIndex],arr[i]);
    }
 }
 int main(){
    int a[]={100,30,50,200};

    int size=sizeof(a)/sizeof(a[0]);
    selectionsort(a,size);
    cout<<"Sorted array are assending order:\n";
    printArray(a,size);
}