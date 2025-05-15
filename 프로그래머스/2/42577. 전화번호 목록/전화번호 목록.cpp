#include <iostream>
#include <vector>
#include <string>
//#include <algorithm>
#include <unordered_map>

using namespace std;

bool solution(vector<string> phone_book) {
    
    std::unordered_map<std::string, int> hash_map{};

    for (int i = 0; i < phone_book.size(); i++)
    {
	    hash_map[phone_book[i]] = 1;
    }

    for (int i = 0; i < phone_book.size(); i++)
    {
	    std::string Str = "";
	    for (int j = 0; j < phone_book[i].size(); j++)
	    {
	    	Str += phone_book[i][j];
	    	if (hash_map[Str] && Str != phone_book[i])
	    		return false;
    	}
    }
    return true;
    
	//std::sort(phone_book.begin(), phone_book.end());

	//for (int i = 0; i < phone_book.size() -1; i++)
	//{
	//	std::string& cur = phone_book[i];
	//	std::string& next = phone_book[i + 1];
    //
	//	if (next.find(cur) == 0)
	//		return false;
    //
	//}
    // return true;
}