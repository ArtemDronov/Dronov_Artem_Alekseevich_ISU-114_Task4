/*!
\file
\brief ������������ ���� � ��������� ������ Ball

������ ���� �������� �������� ������ Ball (���)
*/

#ifndef BALL_H
#define BALL_H

#include <Figure.h>


/*!
	\brief ����� Ball
	\version 1.0
	\date 7.12.2021

	����� - ���
*/
class Ball: public Figure{
private:
    double radius;
public:
/*!
����������� � �����������
\param[in] r_ ������
*/
    Ball(const double r_);
/*!
����������
*/
    ~Ball();
/*!
��������� ���� ������
\return ��� ������
*/
    string type() const ;
/*!
��������� ������ ������
\return ����� ������
*/
    double getV() const;
/*!
��������� ������� ������
\return ������� ������
*/
    double getS() const;
};

#endif // BALL_H
