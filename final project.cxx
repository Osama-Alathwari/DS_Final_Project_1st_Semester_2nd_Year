#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

class Additions
{

public:
	void color(int n)
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, n);
	}

	void class_list()
	{
		color(7);
		cout << "\n   %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
		cout << "      % ";
		color(3);
		cout << "                     Main List              ";
		color(7);
		cout << "       %";
		cout << "\n   %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
	}

	void Recursion_list()
	{
		color(7);
		cout << "\n   %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
		cout << "      % ";
		color(3);
		cout << "                      Recursion List               ";
		color(7);
		cout << "%";
		cout << "\n   %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
	}

	void sort_list()
	{
		color(7);
		cout << "\n   %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
		cout << "      % ";
		color(3);
		cout << "                      Sort List               ";
		color(7);
		cout << "     %";
		cout << "\n   %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
	}

	void stack_list()
	{
		color(7);
		cout << "\n   %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
		cout << "      % ";
		color(3);
		cout << "                      Stack List               ";
		color(7);
		cout << "     %";
		cout << "\n   %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
	}

	void queue_list()
	{
		color(7);
		cout << "\n   %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
		cout << "      % ";
		color(3);
		cout << "                      Queue List               ";
		color(7);
		cout << "     %";
		cout << "\n   %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
	}

	void linked_list()
	{
		color(7);
		cout << "\n   %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
		cout << "      % ";
		color(3);
		cout << "                      Linked  List               ";
		color(7);
		cout << "  %";
		cout << "\n   %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
	}

	void doubly_linked_ist()
	{
		color(7);
		cout << "\n   %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
		cout << "      % ";
		color(3);
		cout << "                  Doubly Linked List               ";
		color(7);
		cout << "%";
		cout << "\n   %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
	}

} add;

//■■■■■■■■■■■■■■■■■■■■■■■

class Recursion
{

public:
	// 1- This function prints the entered number in descending order to one and then returns to the same number
	void printNum(int test)
	{
		if (test < 1)
			return;
		else
		{
			cout << test << " ";
			printNum(test - 1); // statement 2
			cout << test << " ";
			return;
		}
	}
	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	//2- This function finds the factorial of any number

	int fact(int n)
	{

		if (n <= 1)
			return 1;
		else
			return n * fact(n - 1);
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	//3- This function is to find the remainder of division of two positive numbers

	int Remainder(int n1, int n2)
	{
		if (n2 != 0)
			return Remainder(n2, n1 % n2);
		else
			return n1;
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	// 4- This function is used to find the power of any number

	int calculatePower(int base, int powerRaised)

	{
		if (powerRaised != 0)

			return (base * calculatePower(base, powerRaised - 1));
		else
			return 1;
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	void recursion_list()
	{
		add.Recursion_list();
		cout << "\n1- Reprint the number to zero and return to the same number\n";
		cout << "2-factorial of any number \n";
		cout << "3- Remainder\n";
		cout << "4- calculatePower\n";
		add.color(4);
		cout << "5- Quit \n";
		add.color(7);
		cout << "Please Enter Your Choice :\n";
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	void recMenu()
	{
		int choice;

		do
		{
			system("cls");
		back:

			recursion_list();
			cin >> choice;
			switch (choice)
			{
			case 1:

				int n1;
				system("cls");
				cout << "Enter the number : ";
				cin >> n1;
				printNum(n1);
				goto back;

			case 2:

				system("cls");
				int factNum;
				cout << "Enter factorial the number : ";
				cin >> factNum;
				cout << fact(factNum);
				goto back;

			case 3:

				system("cls");
				int rem1, rem2;
				cout << "Enter 2 numbers : ";
				cin >> rem1 >> rem2;
				cout << Remainder(rem1, rem2);
				goto back;

			case 4:

				system("cls");
				int base, power;
				cout << "Base : ";
				cin >> base;
				cout << "power : ";
				cin >> power;
				cout << calculatePower(base, power);
				goto back;

			case 5:
				system("cls");
				break;

			default:
				goto back;
			}
			break;
		} while (true);
	}

} rec;

//■■■■■■■■■■■■■■■■■■■■■■■

class Sort
{
	int size;
	int *arr;
	int length;

public:
	Sort(int size)
	{
		int max_size;
		if (size <= 0)
			max_size = 100;
		else
			max_size = size;
		arr = new int[max_size];
		length = 0;
	};

	void swap(int &x, int &y)
	{
		int temp = x;
		x = y;
		y = temp;
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	void selectionSort(int size)
	{
		int minIdx;
		//size = size;
		cout << "\nAdd number to stack :";
		for (int i = 0; i < size; i++)
			cin >> arr[i];

		for (int i = 0; i < size - 1; i++)
		{
			minIdx = i;

			for (int j = i + 1; j < size; j++)
				if (arr[j] < arr[minIdx])
					minIdx = j;
			swap(arr[minIdx], arr[i]);
		}
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	void bubbleSort(int size)
	{
		bool flag = true;
		int c = 0;
		//size = size;
		cout << "\nAdd number to stack :";
		for (int i = 0; i < size; i++)
			cin >> arr[i];

		for (int i = 0; i < size - 1; i++)
		{
			for (int j = 0; j < size - i - 1; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					swap(arr[j], arr[j + 1]);
					flag = false;
				}
				c++;
			}
			if (flag == true)
				break;
		}
		cout << c << endl;
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	void insertionSort(int size)
	{
		int key, j;
		//size = size;
		cout << "\nAdd number to stack :";
		for (int i = 0; i < size; i++)
			cin >> arr[i];

		for (int i = 1; i < size; i++)
		{
			key = arr[i];
			j = i - 1;

			while (j >= 0 && arr[j] > key)
			{
				arr[j + 1] = arr[j];
				j = j - 1;
			}
			arr[j + 1] = key;
		}
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	void print(int size)
	{
		int i;
		for (i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤
};

void stMenu()
{
	cout << "\n1- Selection Sort\n";
	cout << "2- Bubble Sort\n";
	cout << "3- Insertion Sort\n";
	add.color(4);
	cout << "4- Quit \n";
	add.color(7);
}

//■■■■■■■■■■■■■■■■■■■■■■

class Stack
{
	int top;
	int item[10];

public:
	Stack()
	{
		top = -1;
	}

	void push(int element)
	{
		if (top >= 9)
		{
			cout << "The Stack is full";
		}
		else
		{
			top++;
			item[top] = element;
		}
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	bool isEmpty()
	{
		return top == -1;
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	void pop()
	{
		if (isEmpty())
			cout << "the Stacy is empty";
		else
			top--;
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	void getTop(int &topElement)
	{
		if (isEmpty())
			cout << "the Stacy is empty";
		else
			topElement = item[top];
		cout << "The top element is :" << topElement << endl;
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	void searchStack()
	{
		if (top != -1)
		{
			int x, found = 0;
			cout << "Enter element : ";
			cin >> x;
			for (int i = 0; i <= top; i++)
			{
				if (x == item[i])
				{
					found = 1;
					cout << "found at position " << (i + 1) << endl;
				}
			}
			if (!found)
				cout << "No found";
		}
		else
			cout << "No elements in stack ";
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	void update()
	{
		if (top != -1)
		{
			int pos;
			cout << "Enter position ";
			cin >> pos;
			if (pos <= top && pos > -1)
			{
				cout << "Enter value : ";
				cin >> item[pos];
				cout << "Updated \n";
				cout << "New Stack";
				display();
			}
			else
				cout << "Stack don't have this position ";
		}
		else
			cout << "No elements in stack ";
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	void display()
	{
		if (top > -1)
		{
			int i;
			cout << "Elements in stack : ";
			for (i = 0; i <= top; i++)
				cout << item[i] << " ";
		}
		else
			cout << "No elements in stack ";
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	void stack_list()
	{
		add.stack_list();
		cout << "\n1- Add element to stack \n";
		cout << "2- Delete element from stack \n";
		cout << "3- get top element to stack \n";
		cout << "4- Search for element in stack \n";
		cout << "5- update element in stack \n";
		cout << "6- display element in stack \n";
		add.color(4);
		cout << "7- Quit \n";
		add.color(7);
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	void stackMenu()
	{
		int choice;

	back:
		do
		{
			stack_list();
			cin >> choice;
			switch (choice)
			{

			case 1:
				system("cls");
				int addNum;
				cout << "Add number to stack :";
				cin >> addNum;
				push(addNum);
				goto back;

			case 2:
				system("cls");
				pop();
				goto back;

			case 3:
				system("cls");
				int x;
				getTop(x);
				goto back;

			case 4:
				system("cls");
				searchStack();
				goto back;

			case 5:
				system("cls");
				update();
				goto back;

			case 6:
				system("cls");
				display();
				goto back;

			case 7:
				system("cls");
				break;

			default:
				goto back;
			}
			break;
		} while (true);
	}
} stk;

//■■■■■■■■■■■■■■■■■■■■■■
const int max_size = 100;
class Queue
{
	int rear;
	int front;
	int length;
	int arr[max_size];

public:
	void arrayQueueType()
	{
		front = 0;
		rear = max_size - 1;
		length = 0;
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	bool is_Empty()
	{
		return length == 0;
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	bool is_full()
	{
		return length == max_size;
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	void addQueue(int element)
	{
		if (is_full())
			cout << "Queue is Full";
		else
		{

			rear = (rear + 1) % max_size;
			arr[rear] = element;
			length++;
		}
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	void deleteQueue()
	{
		if (is_Empty())
		{
			cout << " Queue is empty";
		}
		else
		{
			front = (front + 1) % max_size;
			--length;
		}
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	int searchQueue(int element)
	{

		int position = -1;
		if (!is_Empty())
		{
			for (int i = front; i != rear; i = (i + 1) % max_size)
				if (arr[i] == element)
				{
					position = i;
					break;
				}

			if (position == -1)
			{
				if (arr[rear] == element)
					position = rear;
			}
		}
		else
			cout << "Queue is Empty ";
		return position;
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	int frontQ()
	{
		assert(!is_Empty());
		return arr[front];
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	int rearQ()

	{
		assert(!is_Empty());
		return arr[rear];
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	void printQueue()
	{
		if (!is_Empty())
		{
			for (int i = front; i != rear; i = (i + 1) % max_size)
			{
				cout << arr[i] << " ";
			}
			cout << arr[rear];
		}
		else
			cout << "Queue is Empty ";
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	void qMenu()
	{
		add.queue_list();
		cout << "\n 1- Add to queue \n ";
		cout << "2- Delete from queue \n ";
		cout << "3- Search for element in queue \n ";
		cout << "4- Get front \n ";
		cout << "5- Get rear \n ";
		cout << "6- Print Elements in queue\n ";
		add.color(4);
		cout << "7- Quit \n";
		add.color(7);
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	void queueMenu()
	{
		int choice;

	back:
		do
		{
			qMenu();
			cin >> choice;
			switch (choice)
			{

			case 1:
				system("cls");
				int addNum;
				cout << "Add number to queue :";
				cin >> addNum;
				addQueue(addNum);
				goto back;

			case 2:
				system("cls");
				deleteQueue();
				goto back;

			case 3:
				system("cls");
				int srhNum;
				cout << "Enter search number : ";
				cin >> srhNum;
				cout << "Find it in position : " << searchQueue(srhNum);
				goto back;

			case 4:
				system("cls");
				cout << frontQ();
				goto back;

			case 5:
				system("cls");
				cout << rearQ();
				goto back;

			case 6:
				system("cls");
				cout << "Elements in queue : ";
				printQueue();
				goto back;

			case 7:
				system("cls");
				break;

			default:
				goto back;
			}
			break;
		} while (true);
	}
} que;

//■■■■■■■■■■■■■■■■■■■■■■

struct Node
{
	Node *next;
	int item;
};

class linkedList
{

	Node *first;
	Node *last;
	int length;

public:
	linkedList()
	{
		first = last = NULL;
		length = 0;
	}

	bool isEmpty()
	{
		return length == 0;
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	void insertFirst(int element)
	{
		Node *newNode;
		newNode = new Node;
		newNode->item = element;

		if (length == 0)
		{
			first = last = newNode;
			newNode->next = NULL;
		}
		else
		{
			newNode->next = first;
			first = newNode;
		}
		length++;
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	void insertList(int element)
	{
		Node *newNode;
		newNode = new Node;
		newNode->item = element;

		if (length == 0)
		{
			first = last = newNode;
			newNode->next = NULL;
		}
		else
		{
			last->next = newNode;
			newNode->next = NULL;
			last = newNode;
		}
		length++;
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	void insertMiddle(int pos, int element)
	{
		Node *newNode = new Node;
		Node *Cur = new Node;
		if (pos < 0 || pos > length)
			cout << "Out of Range";
		else
		{
			newNode->item = element;
		}
		if (pos == 0)
			insertFirst(element);
		else if (pos == length)
			insertList(element);
		else
		{
			Cur = first;
			for (int i = 1; i < pos; i++)
			{
				Cur = Cur->next;
			}
			newNode->next = Cur->next;
			Cur->next = newNode;
			length++;
		}
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	void remove(int element)
	{
		if (isEmpty())
			return;
		Node *curr, *prev;
		if (first->item == element)
		{
			curr = first;
			first = first->next;
			delete curr;
			length = length - 1;
			if (length == 0)
				last = NULL;
		}
		else
		{
			curr = first->next;
			prev = first;
			while (curr != NULL)
			{
				if (curr->item == element)
					break;
				prev = curr;
				curr = curr->next;
			}
			if (curr == NULL)
				cout << "Not found";
			else
			{
				prev->next = curr->next;
				if (last == curr)
					last = prev;
				delete curr;
				length = length - 1;
			}
		}
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	void reverse()
	{
		Node *prev, *next, *curr;
		prev = NULL;
		curr = first;
		next = curr->next;
		while (next != NULL)
		{
			next = curr->next;
			curr->next = prev;
			prev = curr;
			curr = next;
		}
		first = prev;
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	int search(int element)
	{
		Node *curr = first;
		int pos = 0;

		while (curr != NULL)
		{
			if (curr->item == element)
			{
				cout << "Is found ";
				return pos;
				curr = curr->next;
				pos++;
			}
			else
				cout << "No Found";
			break;
		}
		return -1;
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	void display()
	{
		Node *temp = new Node;
		temp = first;
		cout << "Element in List : ";
		while (temp != NULL)
		{
			cout << temp->item << " ";
			temp = temp->next;
		}
	}

	void lnList()
	{
		add.linked_list();
		cout << "\n1- Add to First List\n";
		cout << "2- Add to Last List\n";
		cout << "3- Add to Any Position in List\n";
		cout << "4- Delete Any element in List\n";
		cout << "5- Search About any Element\n";
		cout << "6- Reverse List\n";
		cout << "7- Display the Last\n";
		add.color(4);
		cout << "8- Quit \n";
		add.color(7);
	}

	void linkList()
	{
		int choice;

	back:
		do
		{
			lnList();
			cin >> choice;
			switch (choice)
			{
			case 1:
				system("cls");
				int addNum;
				cout << "Add number to First List :";
				cin >> addNum;
				insertFirst(addNum);

				goto back;

			case 2:
				system("cls");
				int addNum2;
				cout << "Add number to Last List :";
				cin >> addNum2;
				insertList(addNum2);

				goto back;

			case 3:
				system("cls");
				int pos, addNum3;
				cout << "Add number to Any Position List :";
				cin >> addNum3;
				cout << "Add Position in List :";
				cin >> pos;
				insertMiddle(pos, addNum3);
				goto back;

			case 4:
				system("cls");
				int delNum;
				cout << "Delete Number : ";
				cin >> delNum;
				remove(delNum);
				goto back;

			case 5:
				system("cls");
				int srhNum;
				cout << "Enter Search Number : ";
				cin >> srhNum;
				search(srhNum);
				goto back;

			case 6:
				system("cls");
				cout << "List after Reverse : ";
				reverse();

			case 7:
				system("cls");
				display();
				goto back;

			case 8:
				system("cls");
				break;

			default:
				goto back;
			}
			break;
		} while (true);
	}
};

//■■■■■■■■■■■■■■■■■■■■■■

class double_linked
{
private:
	struct node
	{
		int item;

		node *next;
		node *prev;
	};
	node *first;
	node *last;
	int count;

public:
	double_linked()
	{
		first = NULL;
		last = NULL;
		count = 0;
	}

	bool isEmpty()
	{
		return (first == NULL);
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	void insert_first(int element)
	{
		node *new_node = new node;
		new_node->item = element;
		if (count == 0)
		{
			first = last = new_node;
			new_node->next = new_node->prev = NULL;
		}
		else
		{
			new_node->next = first;
			new_node->prev = NULL;
			first->prev = new_node;
			first = new_node;
		}
		count++;
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	void insert_last(int element)
	{
		node *new_node = new node;
		new_node->item = element;
		if (count == 0)
		{
			first = last = new_node;
			new_node->next = new_node->prev = NULL;
		}
		else
		{
			new_node->next = NULL;
			new_node->prev = last;
			last->next = new_node;
		}
		count++;
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	void insert_pos(int pos, int item)
	{
		if (pos < 0 || pos > count)
			cout << "Out of Range ";
		else
		{
			node *new_node = new node;
			new_node->item = item;
			if (pos == 0)
				insert_first(item);
			else if (pos == count)
				insert_last(item);
			else
			{
				int i;
				node *curr = first;
				for (i = 1; i < pos; i++)
				{
					curr = curr->next;
				}
				new_node->next = curr->next;
				new_node->prev = curr;
				curr->next = new_node;
				curr->next->prev = new_node;
				count++;
			}
		}
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	void remove_first()
	{
		if (count == 0)
			cout << "Empty List Can't Remove";
		else if (count == 1)
		{
			delete first;
			last = first = NULL;
		}
		else
		{
			node *curr = first;
			first = first->next;
			first->prev = NULL;
			delete curr;
		}
		count--;
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	void remove_last()
	{
		if (count == 0)
			cout << "Empty List Can't Remove";
		else if (count == 1)
		{
			delete first;
			last = first = NULL;
		}
		else
		{
			node *curr = last;
			last = last->prev;
			last->next = NULL;
			delete curr;
		}
		count--;
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	void remove(int item)
	{
		node *curr;
		if (count == 0)
			cout << "Empty List Can't Remove";
		if (first->item == item)
			remove_first();
		else
		{
			curr = first->next;
			while (curr != NULL)
			{
				if (curr->item == item)
					break;
				curr = curr->next;
			}
		}
		if (curr == NULL)
			cout << "No found";
		else if (curr->next == NULL)
			remove_last();
		else
		{
			curr->prev->next = curr->next;
			curr->next->prev = curr->prev;
			delete curr;
			count--;
		}
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	void display()
	{
		cout << "Element in List : ";
		node *curr = first;
		while (curr != NULL)
		{
			cout << curr->item << " ";
			curr = curr->next;
		}
		cout << endl;
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	void reverse_display()
	{
		cout << "Element in List After Reverse : ";
		node *curr = last;
		while (curr != NULL)
		{
			cout << curr->item << " ";
			curr = curr->prev;
		}
		cout << endl;
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	void double_list()
	{
		add.doubly_linked_ist();
		cout << "\n1- Add to First List\n";
		cout << "2- Add to Last List\n";
		cout << "3- Add to Any Position in List\n";
		cout << "4- Remove Any element from List\n";
		cout << "5- Reverse Display Elements in List\n";
		cout << "6- Display Elements in List\n";

		add.color(4);
		cout << "7- Quit \n";
		add.color(7);
	}

	//¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

	void double_Linked_list()
	{
		int choice;

	back:
		do
		{
			double_list();
			cin >> choice;
			switch (choice)
			{

			case 1:
				system("cls");
				int addNum;
				cout << "Add number to double List :";
				cin >> addNum;
				insert_first(addNum);
				goto back;

			case 2:
				system("cls");
				int addNum2;
				cout << "Add number to double List :";
				cin >> addNum2;
				insert_last(addNum2);
				goto back;

			case 3:
				system("cls");
				int addNum3, pos;
				cout << "Add number to double List : ";
				cin >> addNum3;
				cout << "Add position : ";
				cin >> pos;
				insert_pos(addNum3, pos);
				goto back;

			case 4:
				system("cls");
				int delNum;
				cout << "Enter delete number : ";
				cin >> delNum;
				remove(delNum);
				goto back;

			case 5:
				system("cls");
				reverse_display();
				goto back;

			case 6:
				system("cls");
				display();
				goto back;

			case 7:
				system("cls");
				break;

			default:
				goto back;
			}
			break;
		} while (true);
	}

} doub;

//■■■■■■■■■■■■■■■■■■■■■■

void allClassMenu()
{
	add.class_list();
	cout << "\n1- Recursion \n";
	cout << "2- Sort \n";
	cout << "3- Stack \n";
	cout << "4- Queue \n";
	cout << "5- Linked list \n";
	cout << "6- Doubly linked list \n";
	add.color(4);
	cout << "7- Quit \n";
	add.color(7);
	cout << "Enter Your Choice : ";
}

int main()
{
	int choice, size;
	linkedList Link;
back:
	do
	{
		allClassMenu();
		cin >> choice;
		switch (choice)
		{
		case 1:
			system("cls");
			rec.recMenu();
			goto back;

		case 2:
			system("cls");
			do
			{
				cout << "How many number do you want to add : ";
				cin >> size;
			backin:

				add.sort_list();
				stMenu();
				cin >> choice;
				Sort srt(size);
				switch (choice)
				{
				case 1:
					system("cls");
					srt.selectionSort(size);
					srt.print(size);
					goto backin;

				case 2:
					system("cls");
					srt.bubbleSort(size);
					srt.print(size);
					goto backin;

				case 3:
					system("cls");
					srt.insertionSort(size);
					srt.print(size);
					goto backin;

				case 4:
					system("cls");
					break;

				default:
					goto backin;
				}
				break;
			} while (true);
			goto back;

		case 3:
			system("cls");
			stk.stackMenu();
			goto back;

		case 4:
			system("cls");
			que.queueMenu();
			goto back;endl

		case 5:
			system("cls");
			Link.linkList();
			goto back;

		case 6:
			system("cls");
			doub.double_Linked_list();
			goto back;

		case 7:
			exit(0);
			break;

		default:
			goto back;
		}
	} while (true);
}