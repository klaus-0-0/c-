#include<iostream>
#include<fstream>
using namespace std;

class user{
    string username,email,passsword;
    fstream file;

    public:
    void login();
    void signup();
    void forgotpassword();

}obj;

void user :: signup (){

        cout<<"enter your username"<<endl;
        cin>>username,"username";

        cout<<"enter email"<<endl;
        cin>>email;
        
        cout<<"enter your password"<<endl    ;
        cin>>passsword;

        file.open("login-data.txt",ios :: out);
        file<<username<<"*"<<email<<"*"<<passsword<<endl;
        file.close();
    } 
void user :: login (){
    string userid,pass;
    cout<<"----------------login--------------"<<endl;
    
    cout<<"enter your username"<<endl;
    cin>>userid;
    
    cout<<"enter your password"<<endl;
    cin>>pass;

    file.open("login-data.txt",ios :: in);
    getline(file,username,'\n');
    getline(file,email,'\n');
    getline(file,passsword,'\n');
    
    while(!file.eof()){

if (username == userid)
{
    cout<<"correct username";
}
else if (passsword == pass )
{
    cout<<"sucessfully login";

}
else
{
    cout<<"invalid pass failed to login"<<endl;
     file.close();
}
    }       
   
} 

int main () {


    char userchoice;
    cout<<"1  login\n";
    cout<<"2  sign-up\n";
    cout<<"3  forget password\n";
    
    cin>>userchoice;

    switch (userchoice)
    {
    case '1':
    obj.login();
        break;
    case '2':
    obj.signup();
        break;
    case '3':
   // obj.forgotpassword();
   //     break;
        
    
    default:
    cout<<"invalid seclection...!";
        break;
    }
   
   
     
      

    
    
}