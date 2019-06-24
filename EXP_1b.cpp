#include <iostream>
using namespace std;

class queue
{
		int rear, front, arr[15];
	public:
		queue()
		{
			rear = front = -1;
		}
		~queue()
		{
			cout << "Destructor called!" << endl;
		}
		void enqueue();
		void dequeue();
		void display();
};

void queue::enqueue()
{
	int value;
	cout << "Enter value: ";
	cin >> value;
	if(rear > 14)
	{
		cout << "Overflow!" << endl;
		rear = front = -1;
	}
	arr[++rear] = value;
}

void queue::dequeue()
{
	if(rear == front)
	{
		cout << "Queue is empty" << endl;
	}
	else
	{
		cout << "Deleted " << arr[++front] << endl;
	}
}

void queue::display()
{
	if(rear == front)
	{
		cout << "Queue is empty" << endl;
	}
	else
	{
		for(int i = front + 1; i <= rear; i++)
		{
			cout << arr[i] << endl;
		}
	}
}

int main()
{
	int ch;
	queue qu;
	while(1)
	{
		cout << "1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter Choice: ";
		cin >> ch;
		switch(ch)
		{
			case 1: qu.enqueue();break;
			case 2: qu.dequeue(); break;
			case 3: qu.display(); break;
			case 4: return(0);
		}
	}
	return 0;
}