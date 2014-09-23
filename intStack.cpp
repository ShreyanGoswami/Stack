#include <iostream>
#include <cstdlib>
#include "stack.h"

using namespace std;

stack::stack(int n){
	m=n;
	top=-1;
	s1=0;
	s2=0;
}

stack::stack(){

}


void stack::insert(int ele)
{
	if(top==m-1)
		cout<<"FULL";
	else a[++top]=ele;
}

int stack::pop()
{
	if(top==-1)
	{
		cout<<"EMPTY";
		return -1;
	}
	else return a[top--];
}

void stack::Display()
{
	int i=top;
	cout<<"Value of  top is : "<<top<<endl;
	while(i!=-1){
		cout<<a[i]<<endl;
		i--;
	}
	if(top==-1)
		cout<<"EMPTY";
}

void stack::Peek(){
	cout<<"The number of elements in the array is "<<top+1;
	cout<<endl<<"The top element is "<<a[top];
}
 
void stack::Split()
{
	int arr[5],brr[5];
	//int c1=0,c2=0;
	int size=top/2;
	for(int i=0;i<size;i++)
	{
		//cout<<"Entered loop";
		arr[s1]=pop();
		s1++;
	}
	//cout<<c1<<endl;
	for(int i=0;i<=size;i++)
	{
		brr[s2]=pop();
		s2++;
	}
	//cout<<c2;
	cout<<"The stack has been split";
	cout<<endl<<"First stack:";
	for(int i=0;i<s1;i++)
		cout<<endl<<arr[i];
	cout<<endl<<"Second stack: ";
	for(int i=0;i<s2;i++)
		cout<<endl<<brr[i];
} 
