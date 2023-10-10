#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, a, b, R;
	
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "R = "; cin >> R;
		cout << "a = "; cin >> a;
		cout << "b = "; cin >> b;
		if (((y >= -b && y <= 0) && (pow(x, 2) + pow(y, 2) <= pow(R, 2)) && (x <= 0 && x >= -a)) ||
			((y >= 0 && y <= b) && (pow(x, 2) + pow(y, 2) >= pow(R, 2)) && (x <= a && x >= R)))
			cout << "yes" << endl;
		else
			cout << "no" << endl;

	}
	cout << endl << fixed; 
	cout << "R = "; cin >> R;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
		for (int i = 0; i < 10; i++)
		{
			
			x = (2.0 * max(a, max(b, R)) * rand() / (RAND_MAX + 1.0)) - max(a, max(b, R));
			y = (2.0 * max(a, max(b, R)) * rand() / (RAND_MAX + 1.0)) - max(a, max(b, R));
			if (((y >= -b && y <= 0) && (pow(x, 2) + pow(y, 2) <= pow(R, 2)) && (x <= 0 && x >= -a)) ||
				((y >= 0 && y <= b) && (pow(x, 2) + pow(y, 2) >= pow(R, 2)) && (x <= a && x >= R)))
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	return 0;
}