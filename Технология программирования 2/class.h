#pragma once
#include <iostream>

class Stack
{
	friend bool operator != (Stack s1, Stack s2);
	friend bool operator == (Stack s1, Stack s2);
	friend bool operator > (Stack s1, Stack s2);
	friend bool operator < (Stack s1, Stack s2);
	
private:
	int value = 0;

public:
	Stack(int val)
	{
		this->value = val;
	}
	void showInfo()
	{
		std::cout << "Value: " << value << std::endl;
	}
	void showMenu()
	{
		std::cout << "1 - (=)" << std::endl;
		std::cout << "2 - (-)" << std::endl;
		std::cout << "3 - (-=)" << std::endl;
		std::cout << "4 - (/=)" << std::endl;
		std::cout << "5 - (!=)" << std::endl;
		std::cout << "6 - (==)" << std::endl;
		std::cout << "7 - (>)" << std::endl;
		std::cout << "8 - (<)" << std::endl;
		std::cout << "9 - (exit) выход из программы" << std::endl;
		std::cout << "0 - (menu) показать меню действий" << std::endl;
	}

	Stack operator = (Stack& s1)
	{
		value = s1.value;
		return *this;
	}
	Stack operator - () 
	{
		value *= -1;
		return *this;
	}
	Stack& operator -= (Stack s) // удалил &
	{
		value -= s.value;
		return *this;
	}
	Stack& operator /= (Stack s)
	{
		value /= s.value;
		round(value);
		return *this;
	}
	Stack operator / (const Stack s1)
	{
		return Stack{ value / s1.value };
	}
};

bool operator != (Stack s1, Stack s2)
{
	return s1.value != s2.value;
}

bool operator == (Stack s1, Stack s2)
{
	return s1.value == s2.value;
}

bool operator > (Stack s1, Stack s2)
{
	return s1.value > s2.value;
}

bool operator < (Stack s1, Stack s2)
{
	return s1.value < s2.value;
}