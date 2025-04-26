#include<iostream>
#include<string>
using namespace std;

class IntToRoman{
  public:
  string converter(int s1){
    string roman = "";
    int values[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    int n = sizeof(values)/sizeof(values[0]);
    string roman_num[] = {"M","DM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    for(int i=0;i<n;i++){
      while(s1>=values[i]){
        roman = roman + roman_num[i];
        s1 -= values[i];
      }
    }
    return roman; 
  }
};

int main(){
  IntToRoman obj;
  int s;
  cout<<"Enter the Integer for conversion to Roman: ";
  cin>>s;
  string str = obj.converter(s);
  cout<<str;
}