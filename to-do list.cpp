#include<iostream>
#include<string>
using namespace std;

#define max_task 100  //defining the max length of array

struct task //making a structure
{
	string desc;  //desc = description
	bool completed;
};

void add_task(task tasks[],int& task_count); 
void view_task(task tasks[],int task_count);
void mark_completed(task tasks[],int task_count);
void remove_task(task tasks[],int& task_count);

int main()
{
	task tasks[max_task];  //array
	int task_count = 0;   //initilizing count
	int choice;
	cout<<"............................................To-Do List.............................................................\n";
	
	do{
		cout<<"\n..........Task Manager Menu..........\n"
			<<"1. Add Task \n"
			<<"2. View Task \n"
			<<"3. Mark Task Completed \n"
			<<"4. Remove Task \n"
			<<"5. Exit \n";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				add_task(tasks, task_count);
				break;
			
			case 2:
				view_task(tasks, task_count);
				break;
				
			case 3:
				mark_completed(tasks, task_count);
				break;
			
			case 4:
				remove_task(tasks, task_count);
				break;
				
			case 5:
				cout<<"\n....Exiting Program.....\n";
				break;
			
			default:
				cout<<"\n......Invalid Choice !......\n";
					
		}
	}while(choice != 5);
	
	return 0;
}

void add_task(task tasks[],int& task_count)  //function to add new task
{
	if(task_count > max_task)
	{
		cout<<"List is Full, Remove Some task First to add new \n";
		return ;
	}
	cin.ignore();
	cout<<"Enter Task : ";
	getline(cin,tasks[task_count].desc);
	tasks[task_count].completed = false;    //by default making all task pending
	task_count++;
	
	cout<<"\n Task Added Successfully!\n";
}

void view_task(task tasks[],int task_count)  //function to view all tasks
{
	if(task_count == 0)
	{
		cout<<"No Task In List, First Add a Task \n";
		return ;
	}
	cout<<".....Tasks List.......\n";
	for(int i = 0;i < task_count; i++)
	{
		cout<<i+1<<". "<<tasks[i].desc;
		cout<<" ["<<(tasks[i].completed ? "Completed" : "Pending")<<" ]\n";	 //using ternary operator
	}
}

void mark_completed(task tasks[],int task_count)  //making task completed
{
	if(task_count == 0)
	{
		cout<<"No Task In List, First Add a Task \n";
		return ;
	}
	
	int tasknumber;
	cout<<"Enter the task number that you want to mark completed: ";
	cin>>tasknumber;
	
	if(tasknumber < 1 || tasknumber > task_count)
	{
		cout<<"Invalid task number. \n";
		return;
	}
	
	tasks[tasknumber - 1].completed = true;
	cout<<"Task Completed Successfully \n";
}

void remove_task(task tasks[],int& task_count)  //removing the task from the list
{
	if(task_count == 0)
		{
			cout<<"No Task In List, First Add a Task \n";
			return ;
		}
		
	int tasknumber;
	cout<<"Enter the task number that you want to mark completed: ";
	cin>>tasknumber;
	
	if(tasknumber < 1 || tasknumber > task_count)
	{
		cout<<"Invalid task number. \n";
		return;
	}
	
	for(int i = tasknumber; i<task_count;i++)
	{
		tasks[i-1] = tasks[i];
	}
	task_count--;
	
	cout<<"Task Removed Successfully. \n";
}

