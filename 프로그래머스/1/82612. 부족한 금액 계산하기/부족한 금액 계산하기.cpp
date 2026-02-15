long long solution(int price, int money, int count)
{
    long long nResult = 0;
    long long answer = -1;

    // 등차수열
    nResult = 1LL *price * (count * (count + 1) / 2);

    if(nResult >= money)
        answer = nResult - money;
    else 
        answer = 0;
    
    return answer;
}