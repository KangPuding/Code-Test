#include <vector>

using namespace std;

vector<long long> solution(vector<long long> numbers) {
    vector<long long> answer;
    
    for (long long num : numbers)
    {
        if (num % 2 == 0)
        {
            answer.push_back(num + 1);
        }
        else
        {
            long long bit = 1;
            while ((num & bit) != 0)
                bit <<= 1;
            
            long long result = num + bit - (bit >> 1);
            answer.push_back(result);
        }
    }
    return answer;
}




/*
string bit(long long llData)
{
    string Str = "";
    
    if(llData == 0)
        return "0";
    
    while(llData > 0)
    {
        if(llData % 2 == 0)
            Str = "0" + Str;
        else
            Str = "1" + Str;
        
        llData = llData / 2;
    }
    
    return Str;
}

long long toNumber(const string& str)
{
    long long result = 0;
    for (char c : str)
    {
        result = result * 2 + (c - '0');
    }
    return result;
}

vector<long long> solution(vector<long long> numbers) {
    vector<long long> answer; 
    int nIndex = 0;
    
    while(nIndex < numbers.size())
    {
        bool bFind = false;
        string compare = bit(numbers[nIndex]);
        
        long long nData = numbers[nIndex] + 1;
        
        while(!bFind)
        {
            string Str = bit(nData);
            
            int nCount = 0;
            
            while(compare.size() < Str.size()) 
                compare = "0" + compare;
            while(Str.size() < compare.size()) 
                Str = "0" + Str;
            
            for(int i = 0; i < compare.size(); i++)
            {
                if(compare[i] != Str[i])
                    nCount++;
            }
            
            if(nCount <= 2)
            {
                answer.push_back(nData);
                bFind = true;
            }  
            
            nData++;
        }
                 
        nIndex++;
    }
    return answer;
}
*/