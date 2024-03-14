#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s) {
    
    int result = 0;
    
    vector<string> a;
    stringstream ss(s);
    string temp;
    
    while(ss >> temp)
        a.push_back(temp);
    
    
    for(int i = 0; i < a.size(); i++){
        if(a[i] == "Z")
            result -= stoi(a[i - 1]);
        else
            result += stoi(a[i]);
    }
    
    return result;    
}













