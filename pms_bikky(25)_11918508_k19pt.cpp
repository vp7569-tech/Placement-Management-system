#include <iostream>
#include<vector>
#include <iomanip>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>
using namespace std;

struct student
{
 string fname;
 string lname;
 string Registration;
 float cgpa;
}studentData;


struct geeks
{
 string fst_name;
 string lst_name;
 float c_gpa;
 string Department;
 float cel_no;
 

}tech[50];//Variable of geeks type



enum colour { DARKBLUE = 1, DARKGREEN, DARKTEAL, DARKRED, DARKPINK, DARKYELLOW, GRAY, DARKGRAY, BLUE, GREEN, TEAL, RED, PINK, YELLOW, WHITE };

struct setcolour
{
   colour _c;
   HANDLE _console_handle;


       setcolour(colour c, HANDLE console_handle)
           : _c(c), _console_handle(0)
       { 
           _console_handle = console_handle;
       }
};
basic_ostream<char> &operator<<(basic_ostream<char> &s, const setcolour &ref)
{
    SetConsoleTextAttribute(ref._console_handle, ref._c);
    return s;
}

int main(int argc, char *argv[])
{
	
	HANDLE chandle = GetStdHandle(STD_OUTPUT_HANDLE);
    cout<<setw(60) <<setcolour(RED,chandle)<< "WELCOME" << setcolour(GREEN,chandle) << endl;

   // cin.get();
    
	int login();
	login();

int i=0,j;//for processing usage 
char choice;//for getting choice
string find;//for sorting
string srch;

while(1)//outer loop
{ 
 system("cls");//Clear screen

	HANDLE chandle = GetStdHandle(STD_OUTPUT_HANDLE);
    cout<<setw(60)<< setcolour(DARKYELLOW,chandle) << endl;


//Level 1-Display process 
 cout<<"\t\t\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
 cout<<"\n\n\t\t\t\t\t  PLACEMENT MANAGEMENT SYSTEM\n\n";
 cout<<"\t\t\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
 cout<<"\n\n\t\t\t\t\t\t:MADE BY:*VICKY*\n\n";
 cout<<"\t\t\t\t\t1. Students Information"<<endl;
 cout<<"\t\t\t\t\t2. GEEKS Information"<<endl;
 cout<<"\t\t\t\t\t3. Exit Program"<<endl;
 cout<<"\n\n\t\t\t\tEnter your choice: ";
 cin>>choice;

system("cls");//Clear screen

switch(choice)//First switch
{
 
case '1': //Student
 { 
while(1)//inner loop-1
{ 
system("cls");//Clear screen

HANDLE chandle = GetStdHandle(STD_OUTPUT_HANDLE);
    cout<<setw(60)<< setcolour(BLUE,chandle) << endl;



//Level-2 display
cout<<"\t\t\t\tSTUDENTS INFORMATION AND BIO DATA SECTION\n\n\n";
cout<<"\t\t\t\t\t1. Create new entry\n";
cout<<"\t\t\t\t\t2. Find and display entry\n";
cout<<"\t\t\t\t\t3. Jump to main\n";
cout<<"\n\n\t\t\t\tEnter your choice: ";
cin>>choice;

switch (choice)//Second switch

{
case '1'://Insert data
{  ofstream f1("student.txt",ios::app);

for( i=0;choice!='n';i++)
{

if((choice=='y')||(choice=='Y')||(choice=='1'))
{
	system("CLS");
	
	HANDLE chandle = GetStdHandle(STD_OUTPUT_HANDLE);
    cout<<setw(60)<< setcolour(RED,chandle) << endl;
	
 cout<<"\t\t\t\t\t NEW ENTRY\n\n";
 cout<<"\t\t\t\t\tEnter First name: ";
 cin>>studentData.fname;
 cout<<"\n\t\t\t\t\tEnter Last name: ";
 cin>>studentData.lname;
 cout<<"\n\t\t\t\t\tEnter Registration number: ";
 cin>>studentData.Registration;
 cout<<"\n\t\t\t\t\tEnter cgpa: ";
 cin>>studentData.cgpa;
 
 f1<<studentData.fname<<endl<<studentData.lname<<endl<<studentData.Registration<<endl<<studentData.cgpa<<endl;
 cout<<"\n\n\t\t\t\t\tDo you want to enter data: ";
 cout<<"\n\t\t\t\t\tPress Y for Continue and N to Finish:  ";
 cin>>choice;
}
} 
f1.close();
}
continue;//control back to inner loop -1

case '2'://Display data
{  ifstream f2("student.txt"); 
system("CLS");

HANDLE chandle = GetStdHandle(STD_OUTPUT_HANDLE);
cout<<setw(60)<< setcolour(DARKGRAY,chandle) << endl;


cout<<"\n\t\t\t\tDISPLAY STUDENT'S ENTRY\n";
cout<<"\n\t\t\t\t\tEnter First name to be displayed: ";
cin>>find;
cout<<endl;
int notFound = 0;
for( j=0;(j<i)||(!f2.eof());j++)
{ 

getline(f2,studentData.fname);        //getline() function extracts characters from the input

if(studentData.fname==find)
{
 notFound = 1;
 cout<<"\n\t\t\t\t\tFirst Name: "<<studentData.fname<<endl;
 cout<<"\n\t\t\t\t\tLast Name: "<<studentData.lname<<endl;

 cout<<"\n\t\t\t\t\tRegistration Number: "<<studentData.Registration<<endl;

 cout<<"\n\t\t\t\t\tCGPA: "<<studentData.cgpa<<endl<<endl;
}

}


if(notFound == 0){

cout<<"\n\t\t\tNo Record Found"<<endl;
}
f2.close();
cout<<"Press any key two times to proceed";
getch();//To hold data on screen
getch();//To hold data on screen

}
continue;//control back to inner loop -1

case '3'://Jump to main
{
break;//inner switch breaking
}
}

break;//inner loop-1 breaking
}
case '2':
{ 
while(1)//inner loop-2
{ 
system("cls");

HANDLE chandle = GetStdHandle(STD_OUTPUT_HANDLE);
cout<<setw(60)<< setcolour(DARKRED,chandle) << endl;

//Level-2 Display process
cout<<"\t\t\t\tINFORMATION AND BIODATA SECTION\n\n\n";
cout<<"\t\t\t\t\t1. Create new entry\n";
cout<<"\t\t\t\t\t2. Find and display\n";
cout<<"\t\t\t\t\t3. Jump to main\n";
cout<<"\n\n\t\t\t\tEnter your choice: ";
cin>>choice;

switch (choice)//Third switch
{
case '1'://Insert data
{ 
ofstream t1("geeks.txt",ios::app);

for(i=0;choice!='n'&& choice!='N';i++)
{
 
 if((choice=='y')||(choice=='Y')||(choice=='1'))
 {
 	system("CLS");
 	
 	HANDLE chandle = GetStdHandle(STD_OUTPUT_HANDLE);
cout<<setw(60)<< setcolour(BLUE,chandle) << endl;
 	
 	
  cout<<"\t\t\t\t\tEnter First name: ";
  cin>>tech[i].fst_name;
  cout<<"\n\t\t\t\t\tEnter Last name:: ";
  cin>>tech[i].lst_name;
  cout<<"\n\t\t\t\t\tEnter CGPA";
  cin>>tech[i].c_gpa;
  cout<<"\n\t\t\t\t\tEnter Department: ";
  cin>>tech[i].Department;
  cout<<"\n\t\t\t\t\tEnter Phone Number: ";
  cin>>tech[i].cel_no;
  
  t1<<tech[i].fst_name<<endl<<tech[i].lst_name<<endl<<tech[i].c_gpa<<endl<<tech[i].Department<<endl<<tech[i].cel_no<<endl;
  cout<<"\n\n\t\t\t\t\tDo you want to enter data: ";
  cin>>choice;
 }//if
}//for loop
//for finding through name 
system("cls");

t1.close();
}//case 1

continue;//Control pass to inner loop-2

case '2'://Display data
{ 
fstream t2("geeks.txt",ios::in|ios::binary|ios::app); 
//system("CLS");
cout<<"\n\t\t\t\tDISPLAY GEEKS ENTRY\n";
cout<<"\n\t\t\t\t\tEnter name to be displayed: ";
cin>>find;

cout<<endl;
int notFound = 0;
for( j=0;((j<i)||(!t2.eof()));j++)                                       
{ 
 
 getline(t2,tech[j].fst_name);                                    //getline is used to read a string from input stream
 
 if(tech[j].fst_name==find)
 {
  notFound = 1;
  cout<<"\n\t\t\t\t\tFirst name: "<<tech[j].fst_name<<endl;
  getline(t2,tech[j].lst_name);
  cout<<"\n\t\t\t\t\tLast name: "<<tech[j].lst_name<<endl;

 //t2,tech[j].c_gpa;
 t2>>tech[j].c_gpa;
 cout<<"\n\t\t\t\t\tCGPA: "<<tech[j].c_gpa<<endl;
 
 getline(t2,tech[j].Department);
 cout<<"\n\t\t\t\t\tDEPARTMENT: "<<tech[j].Department<<endl;

  //  t2,tech[j].cel_no;
  t2>>tech[j].cel_no;
 cout<<"\n\t\t\t\t\tPhone Number: "<<tech[j].cel_no<<endl;

 }//if
 
}//for loop
t2.close();
if(notFound == 0){

 cout<<"\n\t\t\tNo Record Found"<<endl;
}
cout<<"Press any key two times to proceed";

}//case 2

continue;

case '3'://Jump to main 
{
break;
}//case 3

}

break;
}//inner loop

continue;//control pass to 1st loop
}//outer case 2

case '3':
{
	cout<<"\n MADE BY VICKY PANDEY";
break;//outer case 3
}//outer case 3
}   
break;//outer loop
}
}
}

int login(){
   string pass ="";
   char ch;
   cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\tPLACEMENT MANAGEMENT SYSTEM \n\n";
   cout<<"\t\t\t\t\t------------------------------";
   cout<<"\n\t\t\t\t\t\t     LOGIN \n";	
   cout<<"\t\t\t\t\t------------------------------\n\n";	
   cout << "\t\t\t\t\tEnter Password: ";
   ch = _getch();
   while(ch != 13){//character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "vicky"){
      cout << "\n\n\n\t\t\t\t\t\tAccess Granted! \n";
      system("PAUSE");
      system ("CLS");
   }else{
      cout << "\n\n\t\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\t\tPlease Try Again\n\n";
      system("PAUSE");
      system("CLS");
      login();
   }
}
