#include <iostream>
using namespace std;

#define MAX 10

class stack {
	int top;
	int arr[MAX];
public:
	stack() {
		top = 0;
	}
	void push (int pu);
	int pop ();
};

void stack::push (int pu) {
	if (top < MAX) {
		arr[top] = pu;
		top++;
	} else {
		cout << "stack is full\n";
	}
}
int stack::pop () {
	if (top > 0) {
		top = top - 1;
		return arr[top];
	} else {
		cout << "stack is empty\n";
		return -1;
	}
}
int main()
{
	stack st;

	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);
	st.push(6);
	st.push(7);
	st.push(8);
	st.push(9);
	st.push(10);
	st.push(11);

	cout << st.pop() << " ";
	cout << st.pop() << " ";
	cout << st.pop() << " ";
	cout << st.pop() << " ";
	cout << st.pop() << " ";
	cout << st.pop() << " ";
	cout << st.pop() << " ";
	cout << st.pop() << " ";
	cout << st.pop() << " ";
	cout << st.pop() << " ";
	cout << st.pop() << " ";

	return 0;
}

