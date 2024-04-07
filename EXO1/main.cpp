#include <iostream>
#include <cstdlib>
#include "Point3D.hpp"

using namespace std;

int main() {
	Point3D* MonPoint = new Point3D;
	Point3D* AutrePoint = new Point3D;
	/*const float x = 2;
	const float y = 4;
	const float z = -2;
	/*std::cout << "donnez les valeurs des coordonnes de votre point :" << endl;
	std::cin >> x;
	std::cin >> y;
	std::cin >> z; */

	MonPoint->setXYZ(7, 8, 54);
	AutrePoint->setXYZ(0, 0, 0);
	MonPoint->print();

	std::cout << "la distance entre les deux points d = " << MonPoint->distanceTo(*AutrePoint) << endl;

	delete MonPoint;
	delete AutrePoint;

	return 1;
}