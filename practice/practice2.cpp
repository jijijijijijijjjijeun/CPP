#include <iostream>
using namespace std;
int main()
{
	const char* ch[3] = {
		"Hello",
		"school",
		"book"
	};
	cout << ch << endl;
	cout << ch[0] << endl;
	cout << ch[0][1] << endl;
	cout << &ch[0][1] << endl;
	cout << *(*(ch + 1) + 2) << endl;
	cout << *(ch + 1) << endl;
	cout << (ch + 1) + 2 << endl;

	cout << *ch << endl;
	cout << *ch[0] << endl;
	//cout << *ch[0][0] << endl;
	cout << *(ch + 1) << endl;
	cout << *(*(ch + 0) + 4) << endl;	//0 : За, 4: ї­
}
