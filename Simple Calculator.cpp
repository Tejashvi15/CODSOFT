#include<iostream>
using namespace std;


void add()  // function to add to numbers
{
	int a,b;
	cout<<"Enter first Number:";
	cin>>a;
	cout<<endl;
	cout<<"Enter Second Number:";
	cin>>b;
	cout<<endl;
	
	int c=a+b;
	cout<<"The Sum of digits is :"<<c<<endl<<endl;
}
void substract() // function to subtract to numbers
{
	int a,b;
	cout<<"Enter first Number:";
	cin>>a;
	cout<<endl;
	cout<<"Enter Second Number:";
	cin>>b;
	cout<<endl;
	
	int c=a-b;
	cout<<"The Substraction of digits is :"<<c<<endl<<endl;
}
void multiply() //function to multiply to numbers
{
	int a,b;
	cout<<"Enter first Number:";
	cin>>a;
	cout<<endl;
	cout<<"Enter Second Number:";
	cin>>b;
	cout<<endl;
	
	int c=a*b;
	cout<<"The multiplication of digits is :"<<c<<endl<<endl;
}
void divide() // function to divide to numbers
{
	int a,b;
	cout<<"Enter first Number:";
	cin>>a;
	cout<<endl;
	cout<<"Enter Second Number:";
	cin>>b;
	cout<<endl;
	
	int c=a/b;
	cout<<"The Division of digits is :"<<c<<endl<<endl;
}

int main(){
	
	int ch;
	
	while(1){
	
	cout<<".........Calculator..........."<<endl;
	
	cout<<"Select from the drop down menu"<<endl;
	
	cout<<"1.Additon \n 2.Substraction \n 3.Multiplication \n 4.Division \n 5.Exit"<<endl;
	
	cout<<"Enter your choice:"<<endl;
	cin>>ch;
	
	switch(ch) //implemented switch for choices
	{
		case 1:
			{
				add();
				break;
			}
		case 2:
			{
				substract();
				break;
			}
		case 3:
			{
				multiply();
				break;
			}
		case 4:
			{
				divide();
				break;
			}
		case 5:
			{
				cout<<".......Exiting the program !.........";
				return 0;
			}
		default :
			cout<<"Wrong Choice"<<endl;
		
	}
}
	
	return 0;
}
