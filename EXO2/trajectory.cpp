#include <iostream>
#include <algorithm>
#include "Trajectory.hpp"


//constructeur :

Trajectory::Trajectory() {};


void Trajectory::print() {
	for (int i = 0; i <= sizeof(points); i++) {
		std::cout << "point num " << i << endl;
		std::cout << points[i]->print() << endl;
	}
}


Trajectory::Point3D& getPoint(const int& n) {
	return points[n];
}


float Trajectory::getTotalDistance() {
	float TotalDistance = 0;
	for (int i = 0; i <= sizeof(points); i++) {
		TotalDistance += 
}



