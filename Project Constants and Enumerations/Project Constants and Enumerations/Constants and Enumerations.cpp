#include <iostream>

using namespace std;

int main() {

	const int SIZE = 42;
	cout << SIZE << endl;

	const double PI = 3.142;
	int radius = 15;
	long area = PI * (radius ^ 2);
	cout << area << endl;

	enum Interns {
		Simi,
		Eka,
		Precious,
		Segun,
		Bukola,
		Aghogho,
		Victor,
};
	Interns name1 = Interns(Segun);
		cout << name1 << endl;

		enum Places {
			Lagos,
			Ikoyi,
			Port Harcourt,
};
	Places place1 = Ikoyi;
		cout << place1 << endl;


	return 0;
}