#include<iostream>
using namespace std;

/*		Definition of stack
	Stack is linear data structure in which insertions and deletions are allowed only at the end, called 
	top of the stack.
	
	Stack is a linear data structure, we can implement it using an array or a linked list.

	Example:
	Stack of books
	Stack of coins

	Any object can be accessed only from the top.
	Any object can be added at top.

	ADT
	Stack as an ADT(Abstract Data Type) ,then we are only intrested in knowing the stack operations from the
	user point of view.

	Operations
	push (data) : insert data onto stack. 
	pop () : deletes the last inserted element from the stack. 
	top () : returns the last inserted element without removing it.
	size () : returns the size or the number of elements in the stack.
	isEmpty () : return TRUE if the stack empty, else returns false.
	isFull () : returns TRUE if the stack is full, else returns false.


*/
int stack_arr[4];
int top = -1;

int isFull()
{
	if (top == stack_arr[4] - 1)
		return 1;
	else
		return 0;
}

int isEmpty()
{
	if (top == -1)
		return -1;
	else
		return 0;
}

void push(int data)
{
	if (isFull())
	{
		cout << "Stack Overflow ! " << endl;
		return;
	}
	top = top + 1;
	stack_arr[top] = data;
}

int pop()
{
	int val;
	if (isEmpty())
	{
		cout << "Stack underflow ! " << endl;
		exit(1);
	}
	val = stack_arr[top];
	top = top - 1;
	return val;
}

int peek()
{
	if (isEmpty())
	{
		cout << "Stack underflow ! " << endl;
		exit(1);
	}
	return stack_arr[top];
}

void print()
{
	int i;
	if (top == -1)
	{
		cout << "Stack underflow ! " << endl;
		return;
	}
	for  (i = top; i >= 0; i--)
	{
		cout << stack_arr[i] << endl;
	}
}


int main()
{
	int choice, data;
	while (1)
	{
		cout << endl;
		cout << " 1-  PUSH " << endl << endl;
		cout << " 2-  POP " << endl << endl;
		cout << " 3-  Print the TOP element " << endl << endl;
		cout << " 4-  Print all the element of the Stack " << endl << endl;
		cout << " 5-  Quit " << endl << endl;

		cout << "Pls! Enter your Choice :    " ;
		cin >> choice;
		s
		switch (choice)
		{
		case 1:
			cout << "Enter the element you push : ";
			cin >> data;
			break;

		case 2:
			data = pop();
			cout << "Deleted the element is : " << data;
			break;
		case 3:
			cout << "The top most element is : " << peek() << endl;
			break;
		case 4:
			print();
			break;
		case 5:
			exit(1);
		default:
			cout << "  WRONG CHOICE ! " << endl;
		}
	}

	push(1);
	push(2);
	push(3);
	push(4);


	return 0;
}