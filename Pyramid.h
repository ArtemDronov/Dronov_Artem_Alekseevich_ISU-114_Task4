/*!
\file
\brief Заголовочный файл с описанием класса Pyramid

Данный файл содержит описание класса Pyramid (Пирамида)
*/

#ifndef PYRAMID_H
#define PYRAMID_H

#include <Figure.h>


/*!
	\brief Класс Pyramid
	\version 1.0
	\date 7.12.2021

	Класс - Пирамида
*/
class Pyramid: public Figure{
private:
    double square;
    double height;
    double perimetr;
    double apofem;
public:
/*!
Конструктор с параметрами
\param[in] s_ Площадь основания
\param[in] h_ Высота
\param[in] p_ Периметр основания
\param[in] a_ апофема
*/
    Pyramid(const double s_,const  double h_,const  double p_,const  double a_);
/*!
Деструктор
*/
    ~Pyramid();
/*!
Получение типа фигуры
\return Тип фигуры
*/
    string type() const;
/*!
Получение объема фигуры
\return Объем фигуры
*/
    double getV() const;
/*!
Получение площади фигуры
\return Площадь фигуры
*/
    double getS() const;
};

#endif // PYRAMID_H
