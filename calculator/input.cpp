#include <stack>
#include <vector>
#include "input.h"

using namespace std;

#define is_function(c) (c >= 'a' && c <= 'z')
#define is_operator(c) (c == '!' || c == '*' || c == '+' || c == '^' || c == '|' || c == '#' || c == '@' || c == '=' || c=='(' || c==')')



bool input(const string str, vector<int> &perem)
{
	bool result;

	if (str.size() == 1)
		return perem[str[0]-'a'];

	stack <char> funk;
	stack <char> oper;

	for (int i = 0; i < str.size(); ++i)
	{
		if (is_function(str[i])) 
		{
			funk.push(str[i]); 
		}
		else if (is_operator(str[i])) 
		{
			if (str[i] == '(')
			{
				oper.push(str[i]);
				continue;
			}
			if (str[i] == ')')
			{
				while (oper.top() != '(')
				{
					char op = oper.top();
					oper.pop();

					char tak = funk.top();
					funk.pop();

					if (op == '!')
					{
						result = operation(op, perem, tak);
					}
					else
					{
						char kak = funk.top();
						funk.pop();

						result = operation(op, perem, kak, tak);
					}
					funk.push(result);
				}
				oper.pop();
				continue;
			}
			if (oper.empty() || oper.top() == '(') 
			{
				oper.push(str[i]); 
				continue;
			}
			else if (priority(str[i]) > priority(oper.top()))
			{
				oper.push(str[i]); 
				continue;
			}
			else
			{
				char temp = funk.top();
				funk.pop();

				char pol = oper.top();
				oper.pop();

				if (funk.empty() || pol == '!')
				{
					result = operation(pol, perem, temp);

					funk.push(result);

					oper.push(str[i]);
				}
				else
				{
					char star = funk.top();
					funk.pop();

					result = operation(pol, perem, star, temp);

					oper.push(str[i]);
					funk.push(result);
				}
			}
		}
		else
		{
			return false;
		}
	}

	result = output(perem, funk, oper);

	return result;
}

