#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
// 1 ������� ��������
// ������� ����� ���������� (x, y, z). ����������� ���������: ! �������� ���
// ���������� ��(-1), ++(���������� �����, ������������� �������) ����������� ���
// ���������� �� ���������� �������� ����� x, y, z; ++(����������� �����, �������������
// �������) ����������� ���� �� ��������� �� ���������������� �����; --(����������
// �����, �����) ��������� ��� ���������� �� ���������� �������� ����� x, y, z; --
// (����������� �����, �����) ��������� ���� �� ��������� �� ���������������� �����.
// 
// 2 �������� ��������
// ������� ������ "����" � �������������� ���������� ��� ������ � �������
// (�������� ��� ������������� �������, �������� ��� ������) - , -=, /=, / , =, == , <, >, !,
// ���� � ����� � �����.������ ����� ������������ ��������� �������(�������� �� 5 ��
// 10), ����� ��������� ������� �����������.

// - , -=, /=, =, == , <, >, !=

#include "class1.h"
#include "class.h"

int main(void)
{
	setlocale(LC_ALL, "Russian");

	Coord obj;
	Stack objs1{ 92 };
	Stack objs2{ 301 };
	obj.setSize(3);
	obj.menu(); // ���������� ����
	std::cout << "------------------------" << std::endl;
	obj.show();
	std::cout << "------------------------" << std::endl;

	while (true)
	{
		int s;
		std::cout << "�������� ��������" << std::endl;
		std::cin >> s;
		std::cout << "------------------------" << std::endl;

		if (s == 1)
		{
			std::cout << "�� �����: " << s << std::endl;
			!obj;
			obj.show();
			std::cout << "------------------------" << std::endl;
		}
		if (s == 2)
		{
			std::cout << "�� �����: " << s << std::endl;
			++obj;
			obj.show();
			std::cout << "------------------------" << std::endl;
		}
		if (s == 3)
		{
			std::cout << "�� �����: " << s << std::endl;
			obj++;
			obj.show();
			std::cout << "------------------------" << std::endl;
		}
		if (s == 4)
		{
			std::cout << "�� �����: " << s << std::endl;
			--obj;
			obj.show();
			std::cout << "------------------------" << std::endl;
		}
		if (s == 5)
		{
			std::cout << "�� �����: " << s << std::endl;
			obj--;
			obj.show();
			std::cout << "------------------------" << std::endl;
		}
		if (s == 6)
		{
			std::cout << "�� �����: " << s << std::endl;
			obj.menu();
			std::cout << "------------------------" << std::endl;
		}
		if (s == 7)
		{
			std::cout << "�� �����: " << s << std::endl;
			while (true)
			{
				int l;
				std::cout << "�������� ��������" << std::endl;
				std::cin >> l;
				std::cout << "------------------------" << std::endl;
				objs1.showInfo();
				objs2.showInfo();

				if (l == 1)
				{
					std::cout << "�� �����: " << s << std::endl;
					objs2 = objs1;
					/*-objs2;*/
					objs2.showInfo();
					/*objs2.showInfo();*/
					std::cout << "------------------------" << std::endl;
				}
				if (l == 2)
				{
					std::cout << "�� �����: " << s << std::endl;
					-objs2;
					objs2.showInfo();
					std::cout << "------------------------" << std::endl;
				}
				if (l == 3)
				{
					std::cout << "�� �����: " << s << std::endl;
					objs1 -= 4;
					objs1.showInfo();
					std::cout << "------------------------" << std::endl;
				}
				if (l == 4)
				{
					std::cout << "�� �����: " << s << std::endl;
					objs2 /= objs1;
					objs2.showInfo();
					std::cout << "------------------------" << std::endl;
				}
				if (l == 5)
				{
					std::cout << "�� �����: " << s << std::endl;
					bool b = objs2 != objs1;
					std::cout << b << std::endl;
					std::cout << "------------------------" << std::endl;
				}
				if (l == 6)
				{
					std::cout << "�� �����: " << s << std::endl;
					bool b = objs2 == objs1;
					std::cout << b << std::endl;
					std::cout << "------------------------" << std::endl;
				}
				if (l == 7)
				{
					std::cout << "�� �����: " << s << std::endl;
					bool b = objs2 > objs1;
					std::cout << b << std::endl;
					std::cout << "------------------------" << std::endl;
				}
				if (l == 8)
				{
					std::cout << "�� �����: " << s << std::endl;
					bool b = objs2 < objs1;
					std::cout << b << std::endl;
					std::cout << "------------------------" << std::endl;
				}
				if (l == 9)
				{
					break;
				}
				if (l == 0)
				{
					objs1.showMenu();
				}
			}

		}
		if (s == 8)
		{
			std::cout << "�� �����: " << s << std::endl;
			break;
		}
	}

	return 0;
}