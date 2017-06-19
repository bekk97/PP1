#include "Shape.h"
#include "Container.h"

void MultiMethod(Container &c, ofstream &ofst) {
	ofst << "Мультиметод!" << endl;
	for (int i = 0; i < c.len - 1; i++) {
		for (int j = i + 1; j < c.len; j++) {
			switch (c.cont[i]->k) {
			case Shape::DIAGARR:
				switch (c.cont[j]->k) {
				case Shape::DIAGARR:
					ofst << "Диагональная и квадратная матрица" << endl;
					break;
				case Shape::QUADARR:
					ofst << "Диагональная и диагональная матрица" << endl;
					break;
				default:
					ofst << "Unknown type" << endl;
				}
				break;
			case Shape::QUADARR:
				switch (c.cont[j]->k) {
				case Shape::DIAGARR:
					ofst << "Квадратная и диагональная матрица" << endl;
					break;
				case Shape::QUADARR:
					ofst << "Квадратная и квадратная матрица" << endl;
					break;
				default:
					ofst << "Unknown type" << endl;
				}
				break;
			default:
				ofst << "Unknown type" << endl;
			}
			Out(*(c.cont[i]), ofst);
			Out(*(c.cont[j]), ofst);
		}
	}
}
