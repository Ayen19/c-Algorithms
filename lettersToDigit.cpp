//the program below reads the letter codes A-Z or a-z and prints out the corresponding digit
//
//ABC=2  DEF=3  GHI=4 JKL=5  MNO=6 PQRS=7  TUV=8   WXYZ=9
//Algotithm: recieve letter input, ensure input is a letter chatracter. convert the input to uppercase , check to see which number value the letter corresponds to , display that number value. 
//nb-the code has a bug. it gives am unecessary warning when you input a character after a numbersequence. 

#include<iostream>
#include<ctype.h>
using namespace std; 
void CheckCharacter( char & letter);


int main(){

char letter; 
 int digit, num;
 

 cout << "Program to convert uppercase letters to " << "their corresponding telephone digits."<< endl; 
 cout << "To stop the program enter #." << endl; 
 
 cout << "Enter a letter: "; 
 
cin>>letter;

CheckCharacter(letter);

letter=toupper(letter);

 cout << endl; 

    while (letter != '#')  
 {  
 cout << "Letter: " << letter;  
 cout << ", Corresponding telephone digit: "; 

 num = static_cast<int>(letter) 
 - static_cast<int>('A'); 

 if (0 <= num && num < 26)  {

 digit = (num / 3) + 2;  

 if (((num / 3 == 6 ) || (num / 3 == 7))  && (num % 3 == 0))  
 digit = digit - 1;  

 if (digit > 9)  
 digit = 9; 
 cout << digit << endl;  
 } 
 else  
 cout << "Invalid input." << endl; 


 cout << "\nEnter another uppercase "
 << "letter to find its corresponding " 
 << "telephone digit." << endl; 
 cout << "To stop the program enter #." 
 << endl; 

 cout << "Enter a letter: ";
 cin >> letter; 


 CheckCharacter(letter);
 letter=toupper(letter);
 cout << endl; 
 } 
 return 0;  
} 


void CheckCharacter(char & letter){
char notChar;
notChar=cin.peek(); 

while(!isalpha(letter) && letter!='#'){

 cout <<"\nError, character entered is not a letter";
 cout<<"\nEnter a letter: ";
 cin.ignore(100, '\n');
 cin>>letter;

 }


if((notChar!=10) && isalpha(letter)){
    cout<<"Warning, only the first character will be processed";
    cin.ignore(100, '\n');
    }


}


// int main(){
// char letter; 
// cout<<"Enter Letter";
// cin>>letter;

// letter= toupper(letter);
// cout<<" letter: "<<letter<<endl ;


// if (letter=='A'|| letter=='B'|| letter =='C')
// cout << "number = 2";
// else if (letter=='D'|| letter=='E'|| letter =='F')
// cout<<"number = 3";
// else if (letter=='G'|| letter=='H'|| letter =='I')
// cout<<"number = 3";


//  return 0 ;   

// }