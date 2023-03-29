#include "List.h"
#include <iostream>
using namespace std;
List::List(int n)
{
	len = n;
}

void List::add(int n)
{
	if (isFull())
	{
		cout << "Full" << endl;
	}
	else
	{
		arr[count++] = n;
	}
}

bool List::isFull()
{
	return count == len;
}

bool List::isEmpty()
{
	return count == 0;
}

void List::visit(void (*pf)(int&))
{
	for (int i = 0; i < len; i++)
	{
		pf(arr[i]);
	}
}