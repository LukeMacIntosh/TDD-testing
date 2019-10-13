#pragma once

class Triangle {
public:
	int sideA;
	int sideB;
	int sideC;

	int CalcHypotenus(int sideA, int sideB) {
		if (sideA < 0 || sideB < 0) {
			return 0;
		}
		sideC = sqrt((sideA * sideA) + (sideB * sideB));
		return sideC;
	}
	int CalcArea(int sideA, int sideB) {
		if (sideA < 0 || sideB < 0) {
			return 0; // not valid
		}
		int Area = (sideA * sideB) / 2;
		return Area;
	}
};