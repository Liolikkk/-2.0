#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу 

	cout << "x = ";
	cin >> x;

	double cos_x = cos(x);
	double sin_x = sin(x);
	if (cos_x == sin_x) {
		cout << endl;
		return 1; // код завершиться якщо буде помилка 
	}

	z1 = (cos_x + sin_x) / (cos_x - sin_x);
	
	double tan_x = tan(x);
	// перевірка чи не буде 0 
		if (cos_x == 0) {
			cout << endl; 
		// Cos= 0, обчислити секанс не можна 
			return 1; // якщо в коді помилка 
		}
		double sec_x = 1 / cos_x;
    z2 = tan_x * tan_x + sec_x * sec_x;
	

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	return 0;
}
