using namespace std;

long long solution(int price, int money, int count)
{
    long long nResult = 0;
    long long answer = -1;

    for (long long i = 1; i <= count; i++) {
        long long n = price * i;
        nResult += n;
    }

    if(nResult > money)
        answer = nResult - money;
    else 
        answer = 0;
    
    return answer;
}