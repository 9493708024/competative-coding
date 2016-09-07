#include <stdio.h>
#define Int long long
#define Double long double
 
#define N 1009
 
Int A[N];
char s[N];
 
int main()
{
	freopen("input.txt","r",stdin);
	int tests, n, i;
	Int a, b, c;
	scanf("%d", &tests);
	while(tests--)
	{
		scanf("%d", &n);
		for(i = 0; i < n; i++)
			scanf("%lld", &A[i]);
		scanf("%lld %lld %lld %s", &a, &b, &c, s);
		int begin = 0;
		Int E = 1, F = 0, rev = 0;
		Double bc = (Double)b / (Double)c;
		for(i = 0; s[i]; i++)
		{
			if (s[i] == 'R')
				rev ^= 1;
			else if (s[i] == 'A')
				F = (F + a) % c;
			else
			{
				E = (E * b - (Int)((Double)E * bc) * c ) % c;
				F = (F * b - (Int)((Double)F * bc) * c + c*5) % c;
			}
			//printf("%lld %lld\n",E,F);
			printf("%lld\n",(Int)(((Double)E * bc) * c + c*5)%c);
			Int cur = A[rev ? --n : begin++];
			//printf("%lld ", ((cur * E) + F) % c);
		}
		printf("\n");
	}
} 