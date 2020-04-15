// Hovhannes Margaryan


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char selection;
	int size;
	do
	{
		cout << "\n";
		cout << "MENU" << endl;
		cout << "a) Generate Multiplication Table" << endl;
		cout << "q) Quit Program" << endl;
		cout << "Please make a selection: ";
		cin >> selection;

		switch (selection)
		{
		case 'a':
			do
			{
				cout << "Enter size of multiplication table: ";
				cin >> size;
				if (size < 1 || size > 10)
				{
					cout << "Size range must be 1 to 10\n";
				}

			} while (size < 1 || size > 10);

			cout << "\n";
			cout << "MULTIPLICATION TABLE: " << size << "'s" << endl;
			cout << "\n";

			for (int i = 1; i <= size; i++) {
				
				if (i == 1) {
					cout << setw(4) << " ";
					for (int row = 1; row <= size; row++) {
						cout << setw(4) << row;
					}
					cout << endl;
				}
				for (int j = 1; j <= size; j++) {
					
					if (j == 1) {
						cout << setw(4) << i;
					}
					cout << setw(4) << (i * j);
				}
				cout << endl;
			}

			break;
		case 'q':
			cout << "Quitting" << endl;
			break;
		default:
			cout << "Invalid Selection" << endl;
			break;
		}

	} while (selection != 'q');
	return 0;
}