#include <string>
#include <vector>


using namespace std;

string notation(int n, int k)
{
    string Str;
    while (n > 0) 
    {
        Str = to_string(n % k) + Str;
        n /= k;
    }
    return Str;
}

bool isPrime(long long n)
{
    if (n < 2) 
        return false;
    
    for (long long  i = 2; i * i <= n; i++) 
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int solution(int n, int k) 
{
    int answer = 0;
    string Str = notation(n, k);
    
    string token = "";
    for(int i = 0; i <= Str.size(); i++)
    {
        if(i == Str.size() || Str[i] == '0')
        {
            if(!token.empty())
            {
                long long nResult = stoll(token);
                
                if(isPrime(nResult))
                    answer++;
                
                token.clear();
            }
        }
        else
                token += Str[i];
    }
    
    return answer;
}