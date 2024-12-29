#include<iostream>
using namespace std;

static int count = 1;

int getArray(float arr[],int n){
    cout<<"Enter "<<count<<" array\n";
    for(int i=0;i<n;i++){
    cout<<"Enter "<<i+1<<" element: ";
    cin>>arr[i];  
    }
    count++;
    return *arr;  
}

void showArray(float arr[],int n){
      cout<<"Your array is: ";
      for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";  }
      cout<<"\n";
}

void sortArray(float arr[],int n){
  int temp;
    for(int i=0;i<n-1;i++){
      for(int j=1+i;j<n;j++){
        if(arr[i]>arr[j]){
          temp = arr[i];
          arr[i] = arr[j];
          arr[j] = temp;
      }
    }
  }
  cout<<"After sorting: "<<"\n";
  showArray(arr,n);
}

int findMedian(float arr[],int n){
  if(n%2 != 0){
    n = n/2;
    cout<<"\nThe median is: "<<arr[n];
  }
  else{
    float result = (arr[n/2-1] + arr[n/2])/2;
    cout<<"\nThe median is: "<<result;
  }
}

int mergeArray(float arr2[],int n,float arr[],float arr1[],int s1,int s2){
  for(int i=0;i<s1;i++){
      arr2[i] = arr[i];
  }
  for(int i=0;i<s2;i++){
      arr2[i+s1] = arr1[i];
  }
  return *arr2;
}

int main(){
  int n,n2;
  cout<<"Enter the size of first array: ";
  cin>>n;
  cout<<"Enter the size of second array: ";
  cin>>n2;
  float arr[n];
  float arr1[n2];
  getArray(arr,n);
  getArray(arr1,n2);
  showArray(arr,n);
  showArray(arr1,n2);
  int s1 = n,s2 = n2;
  n = n+n2;
  float arr2[n];
  mergeArray(arr2,n,arr,arr1,s1,s2);
  showArray(arr2,n);
  sortArray(arr2,n);
  findMedian(arr2,n);
}
