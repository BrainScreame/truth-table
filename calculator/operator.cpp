#include <stack>
#include <vector>

#include "operator.h"

using namespace std;

bool operation(char c, vector<int> &perem, char a, char b)
{
	bool x;
	bool y;

	if (a == '\0')
		x = 0;
	else if (a == '\1')
		x = 1;
	else
		x = perem[a - 'a'];

	if (b == '\0')
		y = 0;
	else if (b == '\1')
		y = 1;
	else
		y = perem[b - 'a'];

	if (c == '*')
	{
		return x && y;
	}
	if (c == '+')
	{
		return x || y;
	}
	if (c == '^')
	{
		return !((!x || y) && (!y || x));
	}
	if (c == '|')  
	{
		return !(x && y);  // штрих Шефера
	}
	if (c == '#') 
	{
		return !(x || y);  // стрелка  Пирса
	}
	if (c == '@')  
	{
		return !x || y;  //импликация
	}
	if (c == '=')
	{
		return (!x || y) && (!y || x);  //эквивалентность
	}
	return 0;
}

bool operation(char c, vector<int> &perem, char a)
{
	bool x;

	if (a == '\0')
		x = 0;
	else if (a == '\1')
		x = 1;
	else
		x = perem[a - 'a'];

	if (c == '!')
	{
		return !x;
	}
	return 0;
}
