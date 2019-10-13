#pragma once

class Triangle {
public:
	int sideA;
	int sideB;
	int sideC;

	int CalcHypotenus(int sideA, int sideB) {
		sideC = sqrt((sideA * sideA) + (sideB * sideB));
		if (sideC < 0) {
			return 0;
		}
		return sideC;
	}
};