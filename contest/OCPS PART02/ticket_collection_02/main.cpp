#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t=1;
    while(scanf("%d", &n)==1)
    {
        printf("Test Case %d:\n", t++);
        for(int i=1; i<=n; i++)
        {
            printf("Line %d:\n", i);
            if(i%2==0)
            {
                for(int j=1; j<=i; j++)
                    printf("%d ", j);
                printf("\n");
            }
            else
            {
                for(int j=1; j<=i; j++)
                    printf("%d\n", j);
            }
        }
    }
    return 0;
}
