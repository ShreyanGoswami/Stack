#include <iostream>

class stack{
private:
	int a[10],top,m,arr[5],brr[5],s1,s2;
public:
	stack(int);
	stack();
	int isFull();
	int isEmpty();
	void insert(int);
	int pop();
	void Display();
	void Peek();
	void Split();
};
