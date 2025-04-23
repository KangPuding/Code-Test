#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    
    int nLength = strings.size();

    for(int i = 0; i < nLength; i++)
    {
       for(int j = i + 1; j <= nLength - 1; j++)
       {
           string temp = strings[i];
           
           if(strings[i][n] > strings[j][n])
           {
               strings[i] = strings[j];
               strings[j] = temp;
           }

           else if(strings[i][n] == strings[j][n])
           {
               if(strings[i]>strings[j])
               {
                    strings[i] = strings[j];
                    strings[j] = temp;
               }
           }
       }
    }

    return strings;
}