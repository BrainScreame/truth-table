#include <vector>

#include "output.h"

using namespace std;


bool output(vector<int> &perem, stack <char> funk, stack <char> oper)
{
	bool result;
	while (!oper.empty())
	{
		char op = oper.top();
		oper.pop();

		if (op == '!')
		{
			char two = funk.top();
			funk.pop();

			result = operation(op, perem, two);
		}
		else
		{
			char two = funk.top();
			funk.pop();

			char wan = funk.top();
			funk.pop();

			result = operation(op, perem, wan, two);
		}

		funk.push(result);
	}

	return result;
}