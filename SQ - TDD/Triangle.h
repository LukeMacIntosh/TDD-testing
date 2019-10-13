#pragma once

class Triangle {
public:
	int sideA;
	int sideB;
	int sideC;

	int angleA;
	int angleB;
	int angleC;

	int CalcHypotenus(int sideA, int sideB) {
		if (sideA < 0 || sideB < 0) {
			return 0;
		}
		sideC = sqrt((sideA * sideA) + (sideB * sideB));
		return sideC;
	}
	int CalcArea(int sideA, int sideB) {
		if (sideA < 0 || sideB < 0) {
			return 0;
		}
		int Area = (sideA * sideB) / 2;
		return Area;
	}
	int CalcAngle(int angleA, int angleB) {
		if (angleA < 0 || angleB < 0) {
			return 0;
		}
		angleC = 180 - (angleA + angleB);
		return angleC; 
	}
};