#include "Money.h"
int main()
{
	Money sum1, sum2, x;
	cout << " Number of elements Money: " << Object::Counter() << endl;

	cout << " -------- FIRST SUMM -------- " << endl;
	cin >> sum1;
	cout << " -------- SECOND SUMM -------- " << endl;
	cin >> sum2;

	cout << " -------- FIRST SUMM -------- " << endl;
	cout << sum1;
	cout << " TOTAL - " << sum1.get_sum() << endl << endl;

	cout << " -------- SECOND SUMM -------- " << endl;
	cout << sum2;
	cout << " TOTAL - " << sum2.get_sum() << endl << endl;

	if (sum1 > sum2)
		cout << " SUMM1 > SUMM2 " << endl;
	else
		if (sum1 < sum2)
			cout << " SUMM1 < SUMM2 " << endl;
		else
			if (sum1 == sum2)
				cout << " SUMM1 == SUMM2 " << endl;

	double res = sum1 / sum2;
	cout << " DIVIDE = " << res << endl;

	cout << endl << " Size of class: " << sizeof(Money) << endl;

	return 0;
}