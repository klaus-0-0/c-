#include<iostream>
#include<fstream>
using namespace std;


int main () {
     
    char x = 'x' ;
    int i,j;
    char board [3][3] = {{'1','2','3'},{'4','5','6',},{'7','8','9'}};
    board [i][j];
    for(i=0; i<3; i++)
    for(j=0; j<3; j++)
    cout<<board[i][j]<<endl;  

    cout<<"    |    |    |     \n";
    cout<< ""  <<board [0][0]<<"   | "<<board [0][1]<<"  | "<<board [0][2]<<"  |     \n";
    cout<<"    |    |    |     \n"; 
    cout<<"--------------------\n";
    cout<<"    |    |    |     \n"; 
    cout<< ""  <<board [1][0]<<"   | "<<board [1][1]<<"  | "<<board [1][2]<<"  |     \n";
    cout<<"    |    |    |     \n"; 
    cout<<"--------------------\n"; 
    cout<<"    |    |    |     \n";
    cout<< ""  <<board [2][0]<<"   | "<<board [2][1]<<"  | "<<board [2][2]<<"  |    \n";
    cout<<"    |    |    |     \n";   


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

    fstream file;
    file.open("neww.txt",ios :: out);
    file<<       "    |    |    |     \n";
    file<<        ""  <<board [0][0]<<"   | "<<board [0][1]<<"  | "<<board [0][2]<<"  |     \n";
    file<<       "    |    |    |     \n"; 
    file<<       "--------------------\n";
    file<<       "    |    |    |     \n"; 
    file<<        ""  <<board [1][0]<<"   | "<<board [1][1]<<"  | "<<board [1][2]<<"  |     \n";
    file<<       "    |    |    |     \n"; 
    file<<       "--------------------\n"; 
    file<<       "    |    |    |     \n";
    file<<       ""   <<board [2][0]<<"   | "<<board [2][1]<<"  | "<<board [2][2]<<"  |     \n";
    file<<       "    |    |    |     \n"; 

 file.close();

 
cout<<"second player turn";
 char t = 'o' ;
    int z,y;
    char board2 [3][3] = {{'1','2','3'},{'4','5','6',},{'7','8','9'}};
    for(z=0; z<3; z++)
    for(y=0; y<3; y++)
    cout<<board2[z][y]<<endl;  

    cout<<"    |    |    |     \n";
    cout<< "" <<board2 [0][0]<<"   | "<<board2 [0][1]<<"  | "<<board2 [0][2]<<"  |     \n";
    cout<<"    |    |    |     \n"; 
    cout<<"--------------------\n";
    cout<<"    |    |    |     \n"; 
    cout<< "" <<board2 [1][0]<<"   | "<<board2 [1][1]<<"  | "<<board2 [1][2]<<"  |     \n";
    cout<<"    |    |    |     \n"; 
    cout<<"--------------------\n"; 
    cout<<"    |    |    |     \n";
    cout<< "" <<board2 [2][0]<<"   | "<<board2 [2][1]<<"  | "<<board2 [2][2]<<"  |    \n";
    cout<<"    |    |    |     \n";   

    int num;
    cin>>num;
    switch (num)
    {
    case 1:
    board2 [0][0] = t;
           break;
    case 2:
    board2 [0][1] = t;
           break;
    case 3:
    board2 [0][2] = t;
           break;
    case 4:
    board2 [1][0] = t;
           break;
    case 5:
    board2 [1][1] = t;
           break;  
    case 6:
    board2 [1][2] = t;
           break;  
    case 7:
    board2 [2][0] = t;
           break;
    case 8:
    board2 [2][1] = t;
           break;
    case 9:
    board2 [2][2] = t;
           break;          
           
     }  

    cout<<"    |    |    |     \n";
    cout<< "" <<board2 [0][0]<<"   | "<<board2 [0][1]<<"  | "<<board2 [0][2]<<"  |     \n";
    cout<<"    |    |    |     \n"; 
    cout<<"--------------------\n";
    cout<<"    |    |    |     \n"; 
    cout<< "" <<board2 [1][0]<<"   | "<<board2 [1][1]<<"  | "<<board2 [1][2]<<"  |     \n";
    cout<<"    |    |    |     \n"; 
    cout<<"--------------------\n"; 
    cout<<"    |    |    |     \n";
    cout<< "" <<board2 [2][0]<<"   | "<<board2 [2][1]<<"  | "<<board2 [2][2]<<"  |     \n";
    cout<<"    |    |    |     \n"; 


    file.open("neww2.txt",ios :: out);

    file<<       "    |    |    |     \n";
    file<<        ""  <<board2 [0][0]<<"   | "<<board2 [0][1]<<"  | "<<board2 [0][2]<<"  |     \n";
    file<<       "    |    |    |     \n"; 
    file<<       "--------------------\n";
    file<<       "    |    |    |     \n"; 
    file<<        ""  <<board2 [1][0]<<"   | "<<board2 [1][1]<<"  | "<<board2 [1][2]<<"  |     \n";
    file<<       "    |    |    |     \n"; 
    file<<       "--------------------\n"; 
    file<<       "    |    |    |     \n";
    file<<       ""   <<board2 [2][0]<<"   | "<<board2 [2][1]<<"  | "<<board2 [2][2]<<"  |     \n";
    file<<       "    |    |    |     \n"; 

    file.close();
    


   
}