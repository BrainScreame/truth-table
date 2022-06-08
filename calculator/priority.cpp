#include "priority.h"

unsigned int priority(const char c)
{
	switch (c)
	{
	case '(': 
		return 8;

	case '!': // отрицание
		return 7;

	case '*': // конъюнкция
		return 6;

	case '+': // дезъюнкция
	case '^': // сложение по модулю
		return 5;

	case '|': // штрих Шеффера
		return 4;

	case '#': // стрелка Пирса
		return 3;

	case '@': // Импликация
		return 2;

	case '=': // эквивалентность
		return 1;
	}
}
