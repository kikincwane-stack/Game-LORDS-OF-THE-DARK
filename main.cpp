#include <iostream>

using namespace std;

int lives = 10;
string name;
int option;

void left()
{
cout<< name <<" You are the Dark lord !!"<<endl;
cout<<"You have killed many in your days and for that you must pay a price, with 5 LIVES !! "<<endl;
lives = lives -5;
cout << "Lives left are : " << lives << endl;
}
void middle()
{
cout<< name <<" You are the New Dark lord !!"<<endl;
cout<<"You must pay a price to obtain this role, with 3 LIVES !! "<<endl;
lives = lives -3;
cout << "Lives left are : " << lives << endl;
}
void right()
{
cout<< name <<" You could not obtain a role !!"<<endl;
cout<<"THEREFORE YOU EARN 6 LIVES !! "<<endl;
lives = lives +6;
cout << "Lives left are : " << lives << endl;
}

void userinput()
{
    cout << "---------------------------------------------------"<<endl;
    cout << "      PATRICIA'S ADVENTURE CLUB         " <<endl;
    cout << "---------------------------------------------------"<<endl;

  cout << "Please provide your full name : ";
  getline(cin, name);
  cout << " Welcome  " << name << " to LORDS OF THE DARK where the Patricia's club will make your adventure memorable"<<endl;

 cout << "HAVE A FUN TIME IN THE DARK... "<<endl;
 cout << "BE CAREFUL YOUR ADVENTURE MAY BE DARK YOU MIGHT LOSE YOUR LIFE"<<endl;
 cout << ""<<endl;
}
void menu()
{
 cout << "------------------------------------------------------------------------------------------------"<<endl;
 cout << "Name : "<< name <<endl;
 cout << "Lives : "<<lives << endl;
 cout << "Location : LORDS OF THE DARK"<<endl;
 cout << ""<<endl;

cout << "You are faced with 3"<<endl;
cout << "Enter 1 to go LEFT"<<endl;
cout << "Enter 2 to go MIDDLE"<<endl;
cout << "Enter 3 to go RIGHT"<<endl;
cout << "Enter 4 to go LEAVE"<<endl;
cin >>option;

switch(option)
{
case 1:
    left();
        break;
case 2:
    middle();
        break;
case 3:
            right();
            break;
default:
    cout << "invalid input "<<endl;
    break;


}
}
int main()
{
    do {
    menu();
    }
    while(option != 4);
    return 0;
}
