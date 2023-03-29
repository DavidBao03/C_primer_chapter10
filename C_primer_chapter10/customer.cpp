//#include "customer.h"
//#include <iostream>
//using namespace std;
//Stack::Stack()
//{
//	top = 0;
//}
//void Stack::push(Customer& c)
//{
//	if (isFull()) {
//		cout << "Full" << endl;
//	}
//	else {
//		customers[top++] = c;
//	}
//}
//void Stack::out(Customer& c)
//{
//	if (isEmpty())
//	{
//		cout << "Empty" << endl;
//	}
//	else
//	{
//		c = customers[--top];
//		total += c.payment;
//		show_tot();
//	}
//}
//bool Stack::isEmpty()
//{
//	return top == 0;
//}
//bool Stack::isFull()
//{
//	return top == LEN;
//}