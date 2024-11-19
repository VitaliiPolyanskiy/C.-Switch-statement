#include <iostream>
using namespace std;

int main()
{
	// Оператор множественного выбора последовательно сравнивает значение выражения со списком 
	// целых чисел или символьных констант. Если обнаруживается совпадение, выполняется оператор, 
	// связанный с соответствующей константой.
	// Синтаксис оператора switch:
	//      switch(выражение)
	//      {
	//          case константа_1 :
	//              тело_1;
	//              break;
	//          case константа_2 :
	//              тело_2;
	//              break;
	//          case константа_3 :
	//              тело_3;
	//              break;
	//          default :
	//              тело_4;
	//      }
	// выражение в скобках - выражение, результатом которого должен быть символ или целое число.
	// константа_1, константа_2, константа_3 - набор констант для проверки.
	// тело-1, тело_2, тело_3 - набор операторов, который будет выполняться.

	// Принцип работы:
	// Значение выражения проверяется на равенство с каждой из констант, указанной в операторе case, 
	// сверху вниз. Как только результат проверки будет ИСТИНА, выполняется тело соответствующего 
	// оператора case, до тех пора, пока не будет обнаружен оператор break. После оператора break 
	// производится выход из оператора switch. Если оператор break не был обнаружен, то будут 
	// выполняться все последующие case, без проверки условий, пока не встретится их оператор break 
	// или не закончится оператор switch.
	// Действия, указанные в секции default, будут выполнены если не будет найден подходящий case.

	// Секция default опциональна и может располагаться в любом месте оператора switch.
	// Константы в разделах case должны иметь уникальные значения.

	// Операторы switch могут быть вложены друг в друга.

	int nValue;
	cout << "Enter number: ";
	cin >> nValue;

	switch (nValue)
	{
	case 1:
		cout << "nValue == 1" << endl;
		break;
	case 2:
		cout << "nValue == 2" << endl;
		break;
	case 3:
		cout << "nValue == 3" << endl;
		break;
	default:
		cout << "nValue > 3 || nValue < 1" << endl;
	}

	// Реализовать калькулятор. Вводятся 2 дробных числа a и b.
	// Необходимо вывести на экран меню с пунктами : 1) a + b  2) a – b  3) a * b  4) a / b.
	// При выборе соответствующего пункта меню происходит вывод результата вычисления.

	double number1, number2;
	cout << "Enter two numbers: ";
	cin >> number1 >> number2;
	cout << " a) a + b\n b) a - b\n c) a * b\n d) a / b\n";
	cout << "Make your choice: ";
	char choice;
	cin >> choice;
	switch (choice)
	{
		case 'a':
			cout << "a + b = " << number1 + number2;
			break;
		case 'b':
			cout << "a - b = " << number1 - number2;
			break;
		case 'c':
			cout << "a * b = " << number1 * number2;
			break;
		case 'd':
			cout << "a / b = " << number1 / number2;
			break;
		default:
			cout << "Incorrect choice!";
	}

	// Ввести порядковый номер карты(от 0 до 35) и определить масть и достоинство карты.

	int number;
	cout << "\nEnter a number of card (0-35): ";
	cin >> number;
	switch (number % 9)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			cout << number % 9 + 6;
			break;
		case 5:
			cout << 'J';
			break;
		case 6:
			cout << 'Q';
			break;
		case 7:
			cout << 'K';
			break;
		case 8:
			cout << 'A';
			break;
	}
	cout << char(6 - number / 9) << endl;

	return 0;
}