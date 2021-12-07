/*!
\file
\brief ������������ ���� � ��������� ������ Figure

������ ���� �������� �������� ������������ ������ Figure (������)
*/

#ifndef FIGURE_H
#define FIGURE_H
#include <iostream>
using namespace std;


/*!
	\brief ����� Figure
	\version 1.0
	\date 7.12.2021

	����� - ������
*/
class Figure{
public:
/*!
��������� ���� ������
\return ��� ������
*/
    virtual string type()const = 0;
/*!
��������� ������� ������
\return ������� ������
*/
    virtual double getS()const = 0;
/*!
��������� ������ ������
\return ����� ������
*/
    virtual double getV()const = 0;
/*!
����������
*/
    virtual ~Figure(){};
};

#endif // FIGURE_H
