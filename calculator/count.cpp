#include <string>
#include <algorithm>
#include <vector>

#include "count.h"

using namespace std;

int count(string s)
{
	int count = 0;

	sort(s.begin(), s.end());

	if (s[0] >= 'a' && s[0] <= 'z')
		count++;

	for (int i = 1; i < s.size(); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z' && s[i] != s[i - 1])
		{
			count++;
		}
	}

	return count;
}

void table(vector<vector<int> >&a, int n, int m)
{
	int i, j, k, p, c;

	for (j = 1; j <= n; j++)
	{
		k = m / (pow(2, j));
		p = 0;
		c = 0;
		for (i = k + 1; i <= m; i++)
		{
			if (p < k)
			{
				a[j][i] = 1;
				p++;
			}
			else if (c < k - 1)
			{
				a[j][i] = 0;
				c++;
			}
			else
			{
				p = 0;
				c = 0;
			}

		}

	}
}
