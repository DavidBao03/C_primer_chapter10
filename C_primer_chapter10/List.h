class List
{
	static const int MAX = 5;
private:
	int arr[MAX];
	int len = 0;
	int count = 0;
public:
	List(int = 0);
	void add(int);
	bool isFull();
	bool isEmpty();
	void visit(void (*)(int&));
};