/*!
\file
\brief Заголовочный файл с описанием класса Figure

Данный файл содержит описание абстрактного класса Figure (Фигура)
*/

#ifndef FIGURE_H
#define FIGURE_H
#include <iostream>
using namespace std;


/*!
	\brief Класс Figure
	\version 1.0
	\date 7.12.2021

	Класс - Фигура
*/
class Figure{
public:
/*!
Получение типа фигуры
\return Тип фигуры
*/
    virtual string type()const = 0;
/*!
Получение площади фигуры
\return Площадь фигуры
*/
    virtual double getS()const = 0;
/*!
Получение объема фигуры
\return Объем фигуры
*/
    virtual double getV()const = 0;
/*!
Деструктор
*/
    virtual ~Figure(){};
};

#endif // FIGURE_H
