#include "List.h"
#include <iostream>
void show(int& n)
{
	std::cout << n << " ";
}

void increase(int& n)
{
	n++;
}

int main()
{

	List l1;
	l1.add(1);

	List l2(3);

	l2.add(1);
	l2.add(2);
	l2.add(3);

	l2.visit(show);

	l2.visit(increase);

	l2.visit(show);

	return 0;
}