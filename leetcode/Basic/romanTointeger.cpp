#include<iostream>
#include<string>
using namespace std;

int calculate(char a){
  switch(a){
    case 'I': return 1;
    case 'V': return 5;
    case 'X': return 10;
    case 'L': return 50;
    case 'C': return 100;
    case 'D': return 500;
    case 'M': return 1000;
    default: 
    cout<<"Invalid Entry\n"; return -1;
    return 0;
  }
}

int main(){
  int ans = 0;
  string a;
cout<<"Enter the Roman number in capital: ";
cin >> a;
int n = a.length();
   for(int i = 0;i < n; i++){
    int v1 = calculate(a[i]);    
    if(v1==-1) return 0;
    int v2 = (i+1 < n) ? calculate(a[i+1]) : 0;
    
      if(v1>=v2){
        ans = ans+v1;
      }  
      else{
        ans = ans-v1;
      }
    }
  cout<<"The answer is: "<<ans;
  return 0;
}
