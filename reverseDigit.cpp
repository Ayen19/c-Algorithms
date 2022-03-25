//This program reverses the digits of an integer number

#include<iostream>
#include<string>

using namespace std; 



 void getSum(double a , double b);

 int reverseDigit(int integer);

int main(){

    int inputDigits;
    int revDigits;


    // cout<<"Please enter an integer Number: ";
    // cin>>inputDigits;

  int returnValue=reverseDigit(2471);

  cout<<endl<<returnValue<<" is the return value for the function call";






return 0;}



int reverseDigit(int integer){ 

string digit = to_string(integer);
int len =digit.length();


cout<<integer<<endl;

int i =0; 
string reversedDigit=""; 

while(i<len){
    int lastint=integer%10;
    cout<< lastint;
    reversedDigit.append(to_string(lastint));
      
    integer=integer/10; 
    i++;
    }



int var = stoi(reversedDigit); 


    return var; 
}



//  void getSum(double a , double b){
//     int c=a+b;
//     // cout<<c ;
//     reverseDigit(c);
    

// }