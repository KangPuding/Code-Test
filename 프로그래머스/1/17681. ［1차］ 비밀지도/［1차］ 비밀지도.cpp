#include <string>
#include <vector>

using namespace std;

string ToBinary(int num, int n)
{
    string sBinary = "";
    
    for(int i = 0 ; i < n; i++)
    {
        if(num % 2 == 1)
            sBinary = '1' + sBinary;
        else
            sBinary = '0' + sBinary;
        
        num /= 2;
    }
    return sBinary;
}


vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    
    for(int i = 0; i < arr1.size(); i++)
    {
        string sBinary1 = ToBinary(arr1[i], n);
        string sBinary2 = ToBinary(arr2[i], n);
        string merged = "";

        for(int j = 0; j < n; j++)
        {
            if(sBinary1[j] == '1' || sBinary2[j] == '1')
                merged += '#';
            else
                merged += ' ';
        }

        answer.push_back(merged);
    }
    return answer;
}