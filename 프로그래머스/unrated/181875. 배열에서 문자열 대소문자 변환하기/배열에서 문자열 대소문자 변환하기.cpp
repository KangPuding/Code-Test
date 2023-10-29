#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    
    for (int i = 0; i < strArr.size(); i++) {
        for (int j = 0; j < strArr[i].length(); j++) {
            if(i % 2 != 0)
            strArr[i][j] = toupper(strArr[i][j]);
             else if (i % 2 == 0)
            strArr[i][j] = tolower(strArr[i][j]); 
        }
    }
    return strArr;
}