#include<iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

int main()
{
	int a,b;
	
	cout<<"...........Guess Random Number !.........\n\n";
	
	srand(time(0)); // to generate different random number at every run
	
	a = rand() % 50; //generating random number

	
	while(true) //loop till user gess the correct number
	{
		
	cout<<"Guess the random number between 0 to 50 : ";   //ask user to enter his guess
	cin>>b;
	
	if(b>a)  // check if guess is to high
	{
		cout<<"Guess is Too High ! , Try Again "<<endl;
	}
	else if(b<a) // check if guess is to low
	{
		cout<<"Guess is Too Low ! , Try Agian "<<endl;
	}
	else if(b==a) // check if it is a correct guess
	{
		cout<<"\n Congratulations !, You have guessed correctly"<<endl;
		break;
	}     
	
} // loop end

	cout<<"\n......End of the Game!....... ";
	
return 0;
}
