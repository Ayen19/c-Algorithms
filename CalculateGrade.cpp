#include <iostream>
#include<string>
using namespace std; 


// int courseScore;
void getScore(int & score); 
int calculateGrade ( int score);
char myNameInitial (char name) ;


int main(){

    int courseScore; 
    char NameI;

    getScore(courseScore);

    calculateGrade(courseScore);
    cout<<"\nYour return grade value is : "<<static_cast<char>(calculateGrade(courseScore))<<endl;

   int initial= myNameInitial(NameI);
   cout<< static_cast<char>(initial)<<" is your initial ";



return 0; 
}

void getScore(int & score){

    cout<<"Enter the Score you got: ";
    cin>> score;
    cout<< "\nThe course score is "<< score <<"%"<<endl;
    
}

int calculateGrade(int score){

    char grade; 

    if (score>=90)
    grade='A';
    else if (score>=80 )
    grade='B';
    else if (score>=70 )
    grade='C';
    else if (score>=60)
    grade='D';
    else  
    grade='F';

    cout<<"Your grade is "<<grade; 

    return static_cast<int>(grade);
}

char myNameInitial(char name){
    cout<<"Enter first initial: ";
    cin>> name; 
    return name;
    
}