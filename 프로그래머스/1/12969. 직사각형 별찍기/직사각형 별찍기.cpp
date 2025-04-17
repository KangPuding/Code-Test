#include <iostream>

using namespace std;

int main(void) {
    int n;
    int m;
    
    scanf("%d", &n);
    scanf("%d", &m);
    
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("*");
        }
         printf("\n");
    }
    return 0;
}