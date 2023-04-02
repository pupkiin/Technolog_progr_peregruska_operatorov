#pragma once
#include <iostream>

class Coord
{
private:
	int* data;
	int size;

public:
	explicit Coord()
	{
		std::cout << "Object created!" << std::endl;
	}
	//~Coord()
	//{
	//	/*delete[] data;*/
	//	std::cout << "Object deleted!" << std::endl;
	//}
	int getSize()
	{
		return size;
	}
	void setSize(int s)
	{
		this->size = s;
		this->data = { new int[size] };
		for (int i = 0; i < size; i++)
		{
			data[i] = i + 4;
		}
	}
	void show()
	{
		for (int i = 0; i < size; i++)
		{
			std::cout << data[i] << std::endl;
		}
	}
	void menu()
	{
		std::cout << "1 - (!) �������� ��� ���������� �� (-1)" << std::endl;
		std::cout << "2 - (++_) ����������� ��� ���������� �� ���������� �������� ����� x, y, z" << std::endl;
		std::cout << "3 - (_++) ����������� ���������� �� 1" << std::endl;
		std::cout << "4 - (--_) ��������� ��� ���������� �� ���������� �������� ����� x, y, z" << std::endl;
		std::cout << "5 - (_--) ��������� ��� ���������� �� 1" << std::endl;
		std::cout << "6 - (menu) �������� ���� ��������" << std::endl;
		std::cout << "7 - " << std::endl;
		std::cout << "8 - (exit) ����� �� ���������" << std::endl;
	}
	Coord& operator -- (); // ����������
	Coord operator -- (int); // �����������


	friend const Coord& operator ! (Coord& c);
	friend const Coord& operator ++ (Coord& c); // ����������
	friend const Coord operator ++ (Coord &c, int); // �����������
};

Coord& Coord::operator -- () // ����������
{
	int k = -1000000;
	for (int i = 0; i < size; i++)
	{
		if (data[i] > k)
		{
			k = data[i];
		}
	}
	for (int i = 0; i < size; i++)
	{
		data[i] -= k;
	}
	return *this;
}

Coord Coord::operator -- (int)
{
	Coord copy{ *this };
	--(*this);
	return copy;
}

const Coord& operator ! (Coord& c)
{
	for (int i = 0; i < c.size; i++)
	{
		c.data[i] *= -1;
	}
	/*Coord copy{ *this };
	copy.show();*/
	return c;
}

// ����������
const Coord& operator ++ (Coord& c)
{
	int k = 1000000;
	for (int i = 0; i < c.size; i++)
	{
		if (c.data[i] < k)
		{
			k = c.data[i];
		}
	}
	for (int i = 0; i < c.size; i++)
	{
		c.data[i] += k;
	}
	/*copy.show();*/
	return c;
}

// �����������
const Coord operator ++ (Coord& c, int)
{
	Coord copy{ c };
	/*copy.show();*/
	++(c);
	return copy;
}

