#include <iostream>

using namespace std;

int main(void) {

	int nHeigth{};
	int nWeigth{};

	cin >> nHeigth;
	nWeigth = 0;

	for (int i = 0; i < nHeigth; i++)
	{
		nWeigth++;
		for (int j = 0; j < nWeigth; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}