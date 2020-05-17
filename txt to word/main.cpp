#include <iostream>
#include <fstream>
#include  <string.h>
#include <ctime>

using namespace std;
char file1[10]="a.txt";
void  insert_bike()
{char file2[60];
cout<<"enter the file name that you want with .txt";
cin>>file2;


    char id[10000];
    fstream stud;
    stud.open(file2,ios::app);
    cin.ignore();
    cout<<"enter the content into the  file \n";
    cin.getline(id,1000);
    cout<<"done";
    stud<<id;
    stud.close();
}
void changefile()
{char filename[30],d[60];
cout<<"enter the file name that you want to change with extension";
cin>>filename;
fstream stud;
stud.open(filename);
cout<<"enter the file name that you want the to be with extension";
cin>>d;
rename(filename,d);
cout<<"renaming the file is done";

}
int main()
{
    int c,a;
bool flag=true;
while(flag){

cout<<"enter 1.to open and write in a file \n 2. to covert to docx\n";
    cin>>c;
    switch(c){

case 1:
    insert_bike();
    break;
case 2:
    changefile();
    break;
default:exit(0);

}
char y;cout<<"enter y to cont....\n";
cin>>y;
if(y!='y')
{flag=false;
}

}}
