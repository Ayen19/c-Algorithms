// The program below is a guessing game to guess a number between 0 and 100. If the guessed number is incorrect, the program outputs a msg saying if the guesu was too high or too low. diff is the abs difference betweent the number and the user guess. if the diff is  
// >=50      very high/low
// 30=< <50  high/low
// 15=< <30  moderately high/low
// 0<  <15  somewhat high.low
//  user has five tries

#include <iostream>
#include <cstdlib>
// this header file allows to use rand and srand as well as abs
#include <ctime>
//header file containing the function time that we can use a unique seed for each time srand is generated

using namespace std; 


int main(){

int guess; 
int Number;
int guessCount;
int diff; 


srand(time(0)); 


Number= rand()% 100; 



for (int i=0; i<5;i++){
    
cout<<"\n\nGuess a number integer: "; 
cin>>guess; 


 diff = abs(Number-guess);

    switch(diff/10){

    case 0:
    {
    if (guess==Number)
    cout<<"\nCongrats! You have Guessed the correct Number!";

    else 
    
    if (guess<Number)
    cout<<"\nSomewhat low";
    else 
    cout<<"\nSomewhat high"; 
    }
    break;
   
    case 1:
    {
    if (diff<15)

     if (guess>Number)
      cout<<"\nsomewhat high";
     else 
      cout<<"\nSomewhat low";

    else 

     if(guess>Number)
      cout<<"\nGuess is moderately high";
     else
      cout<<"\nGuess is moderately low"; 
    }
    break;
    case 2: {
        if (guess>Number)
        cout<<"\nGuess is moderately high";
        else
        cout<<"\nGuess is moderately low";
    } 
    break;

    case 3:
    case 4:{
        if (guess<Number)
        cout<<"\nGuess is low ";
        else
        cout<<"\nGuess is High";
    }
    break;

    case 5: 
    case 6: 
    case 7:
    case 8: 
    case 9:
    case 10:
    {
        if(guess<Number)
    cout<<"\nGuess Very low!";
        else
        cout<<"\nGuess Very high";      
    }
    break;   
    }//end switch
}//end for 







    return 0;
}