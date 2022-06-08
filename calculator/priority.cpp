#include "priority.h"

unsigned int priority(const char c)
{
	switch (c)
	{
	case '(': 
		return 8;

	case '!': // ���������
		return 7;

	case '*': // ����������
		return 6;

	case '+': // ����������
	case '^': // �������� �� ������
		return 5;

	case '|': // ����� �������
		return 4;

	case '#': // ������� �����
		return 3;

	case '@': // ����������
		return 2;

	case '=': // ���������������
		return 1;
	}
}
