#include "Shape.h"
#include "Circle.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Parallelogram.h"
#include "Hexagon.h"
#include "Pentagon.h"
#include "ShapeException.h"
#include "InputShapeException.h"
#include <string>
#include <iostream>

int main()
{
	std::string nam, col; double rad = 0, side = 0, ang = 0, ang2 = 180; int height = 0, width = 0;
	Circle circ(col, nam, rad);
	Quadrilateral quad(nam, col, width, height);
	rectangle rec(nam, col, width, height);
	Parallelogram para(nam, col, width, height, ang, ang2);
	Pentagon pen(col, nam, side);
	Hexagon hex(col, nam, side);

	Shape* ptrcirc = &circ;
	Shape* ptrquad = &quad;
	Shape* ptrrec = &rec;
	Shape* ptrpara = &para;
	Shape* ptrhex = &hex;
	Shape* ptrpen = &pen;



	std::cout << "Enter information for your objects" << std::endl;
	const char hexagon = 'h', pentagon = 'P', circle = 'c', quadrilateral = 'q', rectangle = 'r', parallelogram = 'p'; char shapetype;
	char x = 'y';
	while (x != 'x')
	{
		std::cout << "which shape would you like to work with?.. \nc=circle, q = quadrilateral, r = rectangle, p = parallelogram, h = hexagon, P = pentagon" << std::endl;
		std::cin >> shapetype;

		if (std::cin.peek() != '\n')
		{
			std::cout << "Warning – Don’t try to build more than one shape at once" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}
		try
		{

			switch (shapetype) 
			{
			case 'h':
				try
				{
					std::cout << "enter color, name,  side" << std::endl;
					std::cin >> col >> nam >> side;
					if (std::cin.fail())
					{
						throw InputException();
					}
					hex.setColor(col);
					hex.setName(nam);
					hex.setSide(side);
					ptrhex->draw();

				}
				catch (const InputException& ex)
				{
					std::cerr << ex.what() << std::endl;

					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				}
				break;
			case 'P':
				try
				{
					std::cout << "enter color, name,  side" << std::endl;
					std::cin >> col >> nam >> side;
					if (std::cin.fail())
					{
						throw InputException();
					}

					pen.setColor(col);
					pen.setName(nam);
					pen.setSide(side);
					ptrpen->draw();

				}
				catch (const InputException& ex)
				{
					std::cerr << ex.what() << std::endl;

					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				}
				break;
			case 'c':
				try 
				{
					std::cout << "enter color, name,  rad for circle" << std::endl;
					std::cin >> col >> nam >> rad;
					if (std::cin.fail())
					{
						throw InputException();
					}
					circ.setColor(col);
					circ.setName(nam);
					circ.setRad(rad);
					ptrcirc->draw();
				}
				catch (const InputException& ex)
				{
					std::cerr << ex.what() << std::endl;

					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				}
				break;
			case 'q':
				try
				{
					std::cout << "enter name, color, height, width" << std::endl;
					std::cin >> nam >> col >> height >> width;

					if (std::cin.fail())
					{
						throw InputException();
					}

					quad.setName(nam);
					quad.setColor(col);
					quad.setHeight(height);
					quad.setWidth(width);
					ptrquad->draw();
				}
				catch (const InputException& ex)
				{
					std::cerr << ex.what() << std::endl;

					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				}
				break;
			case 'r':
				try
				{
					std::cout << "enter name, color, height, width" << std::endl;
					std::cin >> nam >> col >> height >> width;

					if (std::cin.fail())
					{
						throw InputException();
					}

					rec.setName(nam);
					rec.setColor(col);
					rec.setHeight(height);
					rec.setWidth(width);
					ptrrec->draw();
				}
				catch (const InputException& ex)
				{
					std::cerr << ex.what() << std::endl;

					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				}
				break;
			case 'p':
				try
				{
					std::cout << "enter name, color, height, width, 2 angles" << std::endl;
					std::cin >> nam >> col >> height >> width >> ang >> ang2;

					if (std::cin.fail())
					{
						throw InputException();
					}

					para.setName(nam);
					para.setColor(col);
					para.setHeight(height);
					para.setWidth(width);
					para.setAngle(ang, ang2);
					ptrpara->draw();
				}
				catch (const InputException& ex)
				{
					std::cerr << ex.what() << std::endl;

					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				}
				break;

			default:
				std::cout << "you have entered an invalid letter, please re-enter" << std::endl;
				break;
			}
			std::cout << "would you like to add more object press any key if not press x" << std::endl;
			std::cin.get() >> x;
		}
		catch (const std::exception& e)
		{
			printf(e.what());
		}
		catch (const InputException& ex)
		{
			std::cerr << ex.what() << std::endl;

			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		catch (...)
		{
			printf("caught a bad exception. continuing as usual\n");
		}
	}



	system("pause");
	return 0;

}