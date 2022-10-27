﻿/*Задание 6. Вклады
Что нужно сделать
Вклад в банке составляет X рублей.Ежегодно он увеличивается на P процентов, после чего дробная часть копеек отбрасывается.Определите, через сколько лет вклад составит не менее Y рублей.Напишите программу, которая по данным числам X, Y, P определяет, сколько лет пройдёт, прежде чем сумма достигнет значения Y.

Пример выполнения

Введите размер вклада : 100
Введите процентную ставку : 10
Введите желаемую сумму : 200
Придётся подождать : 8 лет

Рекомендации по выполнению
Расчёты проводятся в целых числах.
У вклада есть капитализация процентов(проценты начисляются на весь остаток на счёте).
Что оценивается
Программа аварийно не завершается и не зависает при подсчёте вклада.*/

#include <iostream>

int main()
{
	// количество цифр в номере билета
	int numberLength = 6;
	// множитель для разделения номера на две половины
	int multiplierOfHalf = 1000;

	std::cout << "Введите номер билета (" << numberLength << " цифр): ";
	int ticketNumber;
	std::cin >> ticketNumber;

	// разделение числа на две половины
	int leftHalfOfNumber = ticketNumber / multiplierOfHalf;
	int rightHalfOfNumber = ticketNumber % multiplierOfHalf;

	int leftSum = 0, rightSum = 0;

	while (leftHalfOfNumber > 0) {
		leftSum += leftHalfOfNumber % 10;
		leftHalfOfNumber /= 10;
		rightSum += rightHalfOfNumber % 10;
		rightHalfOfNumber /= 10;
	}

	if (leftSum == rightSum) std::cout << "Билет счастливый\n";
	else std::cout << "Билет не счастливый\n";

}
