#include <iostream>
#include <windows.h>
#include <math.h>
#include <string>

struct Triangle
{
private:
	int side_1;
	int side_2;
	int side_3;
	int corner_1;
	int corner_2;
	int corner_3;

public:
	void Read()
	{
		std::cout << "Введите 1 строну треугольника: "; std::cin >> side_1;
		std::cout << "Введите 2 строну треугольника: "; std::cin >> side_2;
		std::cout << "Введите 3 строну треугольника: "; std::cin >> side_3;
		std::cout << "Введите 1 угол: "; std::cin >> corner_1;
		std::cout << "Введите 2 угол: "; std::cin >> corner_2;
		std::cout << "Введите 3 угол: "; std::cin >> corner_3;
		std::cout << " " << std::endl;
	}

	Triangle()
	{

	}

	void getInit(int& side_1, int& side_2, int& side_3, int& corner_1, int& corner_2, int& corner_3)
	{
		side_1 = this->side_1;
		side_2 = this->side_2;
		side_3 = this->side_3;
		corner_1 = this->corner_1;
		corner_2 = this->corner_2;
		corner_3 = this->corner_3;
	}

	void setInit(int side_1, int side_2, int side_3, int corner_1, int corner_2, int corner_3)
	{
		this->side_1 = side_1;
		this->side_2 = side_2;
		this->side_3 = side_3;
		this->corner_1 = corner_1;
		this->corner_2 = corner_2;
		this->corner_3 = corner_3;
	}

	Triangle(int side_1, int side_2, int side_3, int corner_1, int corner_2, int corner_3)
	{
		this->side_1 = side_1;
		this->side_2 = side_2;
		this->side_3 = side_3;
		this->corner_1 = corner_1;
		this->corner_2 = corner_2;
		this->corner_3 = corner_3;
	}

	double Array()
	{
		double p;
		p = (side_1 + side_2 + side_3) / 2;
		double h;
		h = (2 * sqrt(p * (p - side_1) * (p - side_2) * (p - side_3))) / side_1;
		double s;
		s = ((1 / 2) * (side_1 * h));
		return s;
	}

	void Display(double arr, int Square, double height)
	{
		std::cout << "Инициализированный треугольник:" << std::endl;
		std::cout << "Площадь треугольника: " << arr << "\n" << "Периметр треугольника: " << Square << "\n" << "Высота: " << height << std::endl;
	}

	void toString(double arr, int Square, double height)
	{
		std::cout << "Треугольник, введенный с клавиатуры: " << std::endl;
		std::cout << "Площадь: " << arr << "\n" << "Периметр: " << Square << "\n" << "Высота: " << height << std::endl;
	}

	int Square()
	{
		return side_1 + side_2 + side_3;
	}

	double Height()
	{
		double p;
		p = (side_1 + side_2 + side_3) / 2;
		double h;
		h = (2 * sqrt(p * (p - side_1) * (p - side_2) * (p - side_3))) / side_1;
		return h;
	}

	void Check()
	{
		std::string triangle = "";
		if (side_1 == side_2 && side_1 == side_3 && side_2 == side_3)
		{
			triangle = "Ранвостороний";
		}
		else if (side_2 == side_3 || side_1 == side_2 || side_1 == side_3)
		{
			triangle = "Равнобедренный";
		}
		else if (corner_1 == 90 || corner_2 == 90 || corner_3 == 90)
		{
			triangle = "Прямоугольный";
		}
		std::cout << "Тип треугольника: " << triangle << std::endl;
		std::cout << " " << std::endl;
	}
};

int main()
{
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Triangle a;
	Triangle b(20, 20, 20, 60, 50, 60);
	a.Read();
	double arr;
	arr = b.Array();
	int Square;
	Square = b.Square();
	double height;
	height = b.Height();
	b.Display(arr, Square, height);
	b.Check();
	arr = 0;
	Square = 0;
	height = 0;
	arr = a.Array();
	Square = a.Square();
	height = a.Height();
	a.toString(arr, Square, height);
	a.Check();
}