#include <iostream>
#include "Point3D.hpp"

using namespace std;


// develloppement des méthodes : 

// Constructeur par défaut
Point3D::Point3D() {};

// 1) get 

void Point3D::setXYZ(const float& newx, const float& newy, const float& newz) {
	x = newx;
	y = newy;
	z = newz;
}

void Point3D::setX(const float& newx) {
	x = newx;
}

void Point3D::setY(const float& newy) {
	y = newy;
}

void Point3D::setZ(const float& newz) {
	z = newz;
}

float Point3D::getX() {
	return x;
}

float Point3D::getY() {
	return y;
}

float Point3D::getZ() {
	return z;
}


void Point3D::print() {
	std::cout << "x = " << x << endl;
	std::cout << "y = " << y << endl;
	std::cout << "z = " << z << endl;
}

float Point3D::distanceTo(const Point3D& otherPoint3D) {
	float distance = sqrt(pow(otherPoint3D.x - x, 2) + pow(otherPoint3D.y - y, 2) + pow(otherPoint3D.z - z, 2));
	return distance;
}
