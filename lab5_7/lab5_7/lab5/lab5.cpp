// lab5.cpp : Defines the entry point for the application.
//

#include "lab5.h"
#include "queue.cpp"

using namespace std;

int main()
{
	Queue q = Queue(0);

	cout << "insert: 5, 2, 4, 8, 10" << endl;

	q.Push(5);
	q.Push(2);
	q.Push(4);
	q.Push(8);
	q.Push(10);

	cout << "peek: " << q.Peek() << endl;
	cout << "pop: " << q.Pop() << endl;
	cout << "pop: " << q.Pop() << endl;
	cout << "pop: " << q.Pop() << endl;
	cout << "peek: " << q.Peek() << endl;
	return 0;
}
