#include "abstract.h"
int main() {
	setlocale(0, "");
	Student student("Toryanik", "Alexander", "Vitalievich", 18, 1);
	Boss boss("Toryanik", "Alexander", "Vitalievich", 100, 1000000);
	student.print();
	boss.print();
}

