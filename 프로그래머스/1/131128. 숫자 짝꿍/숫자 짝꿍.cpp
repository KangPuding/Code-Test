#include <string>
#include <vector>

using namespace std;

string solution(string X, string Y) {
    
    vector<int> countX(10, 0);
    vector<int> countY(10, 0);
    
    for (char ch : X) 
        countX[ch - '0']++;
    for (char ch : Y) 
        countY[ch - '0']++;

    string answer = "";
    
        for (int i = 9; i >= 0; i--) 
        {     
            int nPairCount = 0;
            
            if(countX[i] < countY[i])
                nPairCount = countX[i];
            else
                nPairCount = countY[i];
        
            for (int j = 0; j < nPairCount; j++) 
            {
                answer += (i + '0');
            }   
        }

    if (answer.empty())
        return "-1";

    if (answer[0] == '0')
        return "0";

    return answer;
}

// 맞기는한데 시간초과 나와서 아래 남겨둠 
//string solution(string X, string Y) {
//    string answer = "";
//    int nCheck = 0;
//   vector<int> partner;
//    vector<bool> used(Y.size(), false);
//    
//    for(int i = 0; i < X.size(); i++)
//    {
//        nCheck = X[i] - '0';
//        bool bFind = false;
//        
//       for(int j = 0; j < Y.size(); j++)
//        {
//            if (!used[j] && nCheck == Y[j] - '0' && !bFind) 
//            {
//                used[j] = true;
//                partner.push_back(nCheck);
//               bFind = true; 
//            }
//        }
//    }
//    
//    int nZeroCount = 0;
//    
//    if(partner.empty())
//        answer += "-1";
//    else
//    {
//        sort(partner.begin(), partner.end(), greater<int>());
//    
//        for(int i = 0 ; i < partner.size(); i++)
//        {
//            answer += to_string(partner[i]);
//            
//            if(partner[i] == 0)
//                nZeroCount++;
//        } 
//    }
//    
//    if(answer.size() == nZeroCount)
//        return "0";
//    
//    return answer;
//}