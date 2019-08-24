#include <iostream>

using namespace std;

void Draw(int Num)
{
	for (int i = 0; i < Num; i++)
	{
		for (int j = 0; j < Num; j++)
		{
			if (i % 3 == 1 && j % 3 == 1)
				cout << " ";
			else
				cout << "*";
		}
		cout << endl;
	}
}




int main()
{
	int Num;
	cin >> Num;
	Draw(Num);

	return 0;
}