#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
	std::sort(phone_book.begin(), phone_book.end());

	for (int i = 0; i < phone_book.size() -1; i++)
	{
		std::string& cur = phone_book[i];
		std::string& next = phone_book[i + 1];

		if (next.find(cur) == 0)
			return false;

	}


	return true;
}