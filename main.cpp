#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "* * * * * * * * * Asterisk Pyramid Print Out * * * * * * * * *\n\n\n\n";
	
	int size;
	
	cout << "- Enter amount of asterisks: ";
	cin >> size;
	
	while (size != 0)
	{
		
		for (int asterisk = 1; asterisk <= size; asterisk++)
		{
			cout << "\n" << string(asterisk, '*');
		}
		
		cout << "\n\n- Enter amount of asterisks or 0 to end: ";
		cin >> size;
	}
	
	cout << "\n\n\nEnd of Program\n\n";
	
	return 0;
}