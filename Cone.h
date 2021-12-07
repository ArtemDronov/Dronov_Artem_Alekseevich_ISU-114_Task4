/*!
\file
\brief Заголовочный файл с описанием класса Cone

Данный файл содержит описание класса Cone (конус)
*/

#ifndef CONE_H
#define CONE_H

#include <Figure.h>


/*!
	\brief Класс Cone
	\version 1.0
	\date 7.12.2021

	Класс - Конус
*/
class Cone: public Figure{
private:
    double radius;
    double height;
public:
/*!
Конструктор с параметрами
\param[in] r_ Радиус
\param[in] h_ Высота
*/
    Cone(const double r_, const double h_);
/*!
Деструктор
*/
    ~Cone();
/*!
Получение типа фигуры
\return Тип фигуры
*/
    string type() const;
/*!
Получение объема фигуры
\return Объем фигуры
*/
    double getV() const ;
/*!
Получение площади фигуры
\return Площадь фигуры
*/
    double getS() const ;
};

#endif // CONE_H
