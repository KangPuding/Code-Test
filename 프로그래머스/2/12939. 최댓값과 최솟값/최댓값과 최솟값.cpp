#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> arData;
    stringstream sStr(s);
    int num;
    
    while(sStr >> num)
    {
        arData.push_back(num);
    }
        
        
    int nMax = arData[0];
    int nMin = arData[0];
    
    for(int i = 0; i < arData.size(); i++)
    {
        if(nMax < arData[i])
            nMax = arData[i];
        else if (nMin > arData[i])
            nMin = arData[i];
    }

    answer += to_string(nMin) + ' ' + to_string(nMax);
    return answer;
}
