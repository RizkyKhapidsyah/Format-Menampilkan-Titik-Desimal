//tanda format ios::showpoint

# include <iostream>
# include <iomanip>
# include <conio.h>

using namespace std;

/* Created by Rizky Khapidsyah */

int main() {
	double a = 89;
	
	//-> tanpa tanda format ios::showpoint
	cout << "Tanpa tanda format ios::showpoint" << endl;
	cout << "Variabel a = " << a << "\n\n";

	//-> dengan tanda format ios::showpoint
	cout << "Dengan tanda format ios::showpoint" << endl;
	cout << setiosflags(ios::showpoint);
	cout << "Variabel a = " << a << endl;
	
	_getch();
	return 0;
}