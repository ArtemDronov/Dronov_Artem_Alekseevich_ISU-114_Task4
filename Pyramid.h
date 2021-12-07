/*!
\file
\brief ������������ ���� � ��������� ������ Pyramid

������ ���� �������� �������� ������ Pyramid (��������)
*/

#ifndef PYRAMID_H
#define PYRAMID_H

#include <Figure.h>


/*!
	\brief ����� Pyramid
	\version 1.0
	\date 7.12.2021

	����� - ��������
*/
class Pyramid: public Figure{
private:
    double square;
    double height;
    double perimetr;
    double apofem;
public:
/*!
����������� � �����������
\param[in] s_ ������� ���������
\param[in] h_ ������
\param[in] p_ �������� ���������
\param[in] a_ �������
*/
    Pyramid(const double s_,const  double h_,const  double p_,const  double a_);
/*!
����������
*/
    ~Pyramid();
/*!
��������� ���� ������
\return ��� ������
*/
    string type() const;
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

#endif // PYRAMID_H
