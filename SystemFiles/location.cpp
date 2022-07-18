#include <iostream>
#include "weapons.h"

using namespace std;

void set_coordinates(double lat_value, double long_value, double coordinate_vector[]) {
	coordinate_vector[0] = lat_value;
	coordinate_vector[1] = long_value;
}
