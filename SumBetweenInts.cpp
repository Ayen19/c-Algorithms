//The program below uses while loops. The program recieves 2 integers from the user(first integer must be less than the second).It outputs the odd numbers between the two numbers, the sum of the even numbers between the two numbers, The numbers and their squares between 1 and 10, the sum of the squares of the odd numbers between the first number and second number. and outputs all uppercase letters. 


#include <iostream> 
#include<cmath>

using namespace std; 

int main(){

    int firstNum;
    int secondNum;
    int sqcounter; 
    int evenSum=0; 
    int sqSum=0;
    int oc;
     
     

    do{
    cout<<"Input two integers in Ascending order: ";
    cin>>firstNum>>secondNum;
    }

    while(secondNum<firstNum);


cout<<"\nOdd numbers and their squares between "<<firstNum<<" and "<<secondNum<<" : " ;

oc = firstNum+1;
while(oc<secondNum)
    {
        if (oc%2!=0){
            cout<< oc<<", ";
            sqSum=sqSum + pow(oc,2);
            cout<< "("<<pow(oc,2)<<"), ";}

        else
 
        evenSum=evenSum+oc;

        oc++;

        
    }

cout<<"\nthe sum of the squares of the odd numbers between "<< firstNum << " and "<<secondNum<<" is "<<sqSum<<endl;  


cout<<"\nThe sum of even numbers between "<<firstNum<< " and "<<secondNum<<" is "<<evenSum<<endl; 

cout<<"\nsquares of numbers from 1 to 10: \n";
sqcounter=1;
while(sqcounter<=10){
    cout<<sqcounter<<" --> "<< pow(sqcounter,2) <<endl; 
    sqcounter ++ ;
}

cout<<"\n\nThe letters from A to Z: ";
int letter= 65;

while(letter<91){
cout << static_cast <char> (letter)<< " ";
letter++;
}

    return 0 ; 
}

