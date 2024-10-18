#include<iostream>
#include<fstream>
using namespace std;


int fun (int a, int b){
      int c = a + b;
      return c;
}

char board [3][3] = {{'1','2','3'},{'4','5','6',},{'7','8','9'}};



void display_board (){

    char x = 'x';
    int i,j;
    
    
    for(i=0; i<3; i++)
    for(j=0; j<3; j++)
    
      
    cout<<"    |    |    |     \n";
    cout<< ""  <<board [0][0]<<"   | "<<board [0][1]<<"  | "<<board [0][2]<<"  |     \n";
    cout<<"    |    |    |     \n"; 
    cout<<"--------------------\n";
    cout<<"    |    |    |     \n"; 
    cout<< ""  <<board [1][0]<<"   | "<<board [1][1]<<"  | "<<board [1][2]<<"  |     \n";
    cout<<"    |    |    |     \n"; 
    cout<<"--------------------\n"; 
    cout<<"    |    |    |     \n";
    cout<< ""  <<board [2][0]<<"   | "<<board [2][1]<<"  | "<<board [2][2]<<"  |     \n";
    cout<<"    |    |    |     \n";   

}

int main (){

    cout<<fun(2,2);
    char x = 'x';
    cout<<"enter your number\n";
    int choice;
    cin>>choice;
    switch (choice)
    {
    case 1:
    board [0][0] = x;
           break;
    case 2:
    board [0][1] = x;
           break;
    case 3:
    board [0][2] = x;
           break;
    case 4:
    board [1][0] = x;
           break;
    case 5:
    board [1][1] = x;
           break;            
    case 6:
    board [1][2] = x;
           break;       
    case 7:
    board [2][0] = x;
           break;
    case 8:
    board [2][1] = x;
           break;
    case 9:
    board [2][2] = x;
           break; 
}

void display_board ();

}