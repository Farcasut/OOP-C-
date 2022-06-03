
#include <iostream>

template <typename T>
struct Node
{
	Value<T> m_Value;
	Node<T>* m_Prev;
	Node<T>* m_Next;
};

template <typename T>
class DoubleL {
	Node <T>* head;
	Node <T>* tail;
	int count = 0;

public:
	Node* create_list()
	{
		Node <T>* temp = new Node <T>();
		head = temp;
		tail = temp;
		temp->data = 10;
		return ;
    }

	void print()
	{
		std::cout << head->data;
	}
};