//#include <iostream>
//#include "Sales.h"
//using namespace std;
//namespace SALES {
//	Sales::Sales(const double ar[], int n) {
//		double sum = 0;
//		double max = ar[0];
//		double min = ar[0];
//		for (int i = 0; i < n && i < QUARTERS; i++) {
//			sales[i] = ar[i];
//			sum += ar[i];
//			max = max < ar[i] ? ar[i] : max;
//			min = min > ar[i] ? ar[i] : min;
//		}
//
//		this->max = max;
//		this->min = min;
//		average = n == 0 ? 0 : sum / n;
//	}
//	Sales::Sales() {
//		double ar[QUARTERS];
//		for (int i = 0; i < QUARTERS; i++) {
//			cout << "Enter the num: " << endl;
//			cin >> ar[i];
//		}
//		double sum = 0;
//		double max = ar[0];
//		double min = ar[0];
//		for (int i = 0; i < QUARTERS; i++) {
//			sales[i] = ar[i];
//			sum += ar[i];
//			max = max < ar[i] ? ar[i] : max;
//			min = min > ar[i] ? ar[i] : min;
//		}
//
//		this->max = max;
//		this->min = min;
//		average = sum / QUARTERS;
//	}
//
//	void Sales::showSales() const {
//		for (int i = 0; i < QUARTERS; i++) {
//			cout << sales[i] << " ";
//		}
//		cout << average << " " << max << " " << min;
//	}
//}