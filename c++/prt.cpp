#include<iostream>

using namespace std;


char board [3][3] = {{'1','2','3'},{'4','5','6',},{'7','8','9'}};
char x = 'x';
char o = 'o';
    char turn;
    int choice;
    int row,column;

void player_turn (){


    if(turn == 'x')
    if(turn == 'o')
    {

    cout<<"player 1 turn  [x]"<<endl;





    cin>>choice;  
//     switch (choice)
//     {
//     case 1:
//     board [0][0] = x;
//            break;
//     case 2:
//     board [0][1] = x;
//            break;
//     case 3:
//     board [0][2] = x;
//            break;
//     case 4:
//     board [1][0] = x;
//            break;
//     case 5:
//     board [1][1] = x;
//            break;            
//     case 6:
//     board [1][2] = x;
//            break;       
//     case 7:
//     board [2][0] = x;
//            break;
//     case 8:
//     board [2][1] = x;
//            break;
//     case 9:
//     board [2][2] = x;
//            break; 

//     default:
//         cout<<"invalid number"<<endl;
//          break;
//     }

                switch (choice)
       {
       case 1: row = 0; column = 0; break;
       case 2: row = 0; column = 1; break;
       case 3: row = 0; column = 2; break;
       case 4: row = 1; column = 0; break;
       case 5: row = 1; column = 1; break;
       case 6: row = 1; column = 2; break;
       case 7: row = 2; column = 0; break;
       case 8: row = 2; column = 1; break;
       case 9: row = 2; column = 2; break;
              
       
       default: cout<<"invalid choice\n";
              break;

                if (turn = 'x'){
              board[row][column] = 'x';
              turn = 'o';
               }
              else if (turn = 'o')
         {
              board[row][column] = 'o';
              turn = 'x';
         } 
       
    }

       }
    
     
     
}

 

              
       

     



void display_board (){
   
    
    // int i,j;
    
    // board [i][j];
    // for(i=0; i<3; i++)
    // for(j=0; j<3; j++)
    // cout<<board[i][j]<<endl;  

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
    cout<<endl;
}




int main (){
    
    while(true){
    display_board ();
    player_turn ();
    display_board ();
    }  

    

   return 0; 




}