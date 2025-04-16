using namespace std;

long long solution(int price, int money, int count)
{
    long long nTotal = price;
    long long mul = 2;
    
    for(int i = 1; i < count; i++)
    {
        nTotal += mul * price;
        mul++;
    }

    if(nTotal < money)
        return 0;
    else
        nTotal = nTotal - money;
    
    return nTotal;
}