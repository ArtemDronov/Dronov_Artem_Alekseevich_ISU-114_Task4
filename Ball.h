/*!
\file
\brief Заголовочный файл с описанием класса Ball

Данный файл содержит описание класса Ball (Шар)
*/

#ifndef BALL_H
#define BALL_H

#include <Figure.h>


/*!
	\brief Класс Ball
	\version 1.0
	\date 7.12.2021

	Класс - Шар
*/
class Ball: public Figure{
private:
    double radius;
public:
/*!
Конструктор с параметрами
\param[in] r_ Радиус
*/
    Ball(const double r_);
/*!
Деструктор
*/
    ~Ball();
/*!
Получение типа фигуры
\return Тип фигуры
*/
    string type() const ;
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

#endif // BALL_H
