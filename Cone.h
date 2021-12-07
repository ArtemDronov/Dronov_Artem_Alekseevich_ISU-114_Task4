/*!
\file
\brief ������������ ���� � ��������� ������ Cone

������ ���� �������� �������� ������ Cone (�����)
*/

#ifndef CONE_H
#define CONE_H

#include <Figure.h>


/*!
	\brief ����� Cone
	\version 1.0
	\date 7.12.2021

	����� - �����
*/
class Cone: public Figure{
private:
    double radius;
    double height;
public:
/*!
����������� � �����������
\param[in] r_ ������
\param[in] h_ ������
*/
    Cone(const double r_, const double h_);
/*!
����������
*/
    ~Cone();
/*!
��������� ���� ������
\return ��� ������
*/
    string type() const;
/*!
��������� ������ ������
\return ����� ������
*/
    double getV() const ;
/*!
��������� ������� ������
\return ������� ������
*/
    double getS() const ;
};

#endif // CONE_H
