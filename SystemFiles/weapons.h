#ifndef WEAPONS_H
#define WEAPONS_H
#define TEST_VALUE "This is a test of weapons\n"
#define TEST_TURRET_NAME "sam_adams"
#define TEST_TURRET_LOCATION "mount_laurel_nj"
#define TURRET_COORDINATES_VECTOR_CAP 2
#define TEST_TURRET_LAT_VALUE 39.97197582183035
#define TEST_TURRET_LONG_VALUE -74.91162790230287
#define TEST_TURRET_CAPACITY 10
#define TEST_TURRET_TYPE "ivan1"

#include <ctime>

using namespace std;

void set_coordinates(double, double, double[]);

class Turret {
	private:
		string turret_name;
		string turret_date_created;
		int turret_id_number;
		bool turret_is_online;
		double turret_location_coordinates[TURRET_COORDINATES_VECTOR_CAP];
		string turret_location_name;
		int turret_missile_bay[TEST_TURRET_CAPACITY];
		string turret_type = TEST_TURRET_TYPE;

		string get_turret_date_created() {
			time_t current_time = time(0);
			return ctime(&current_time);
		}

	public:
		Turret() {
			turret_name = TEST_TURRET_NAME;
			turret_location_name = TEST_TURRET_LOCATION;
			turret_date_created = get_turret_date_created();
			turret_is_online = true;
			set_coordinates(TEST_TURRET_LAT_VALUE, TEST_TURRET_LONG_VALUE,
					turret_location_coordinates);
			for (int i = 0; i < TEST_TURRET_CAPACITY; i++)
				turret_missile_bay[i] = 0;
		}

		void display_turret_info_to_screen() {
			cout << turret_name << "\t";
			cout << turret_type << "\t";
			if (turret_is_online)
				cout << "Online " << "\t\t";
			else
				cout << "Offline" << "\t\t";
			cout << turret_location_name << "\t\t";
			cout << "(" << turret_location_coordinates[0] << ", "
				<< turret_location_coordinates[1] << ")\t";
			cout << turret_date_created << "\n";
		}
};

#endif
