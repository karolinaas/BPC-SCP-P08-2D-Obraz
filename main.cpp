#include <iostream>
#include <fstream>
#include <cstdint>

template<class T> class Obraz {
	T** pole;
	int width, length;

public:
	//// Inicializa�n� konstruktor
	//Obraz() {

	//}

	//// Kop�rovac� konstruktor
	//Obraz() {

	//}

	//// Konverzn� konstruktor
	//Obraz() {

	//}

	//// Destruktor
	//~Obraz() {

	//}

	// Bin�rn� oper�tory +, -, * (konvoluce), +=, -=
	friend Obraz operator+(const Obraz& operand1, const Obraz& operand2);
	friend Obraz operator-(const Obraz& operand1, const Obraz& operand2);
	friend Obraz operator*(const Obraz& operand1, const Obraz& operand2);
	friend Obraz operator+=(const Obraz& operand1, const Obraz& operand2);
	friend Obraz operator-=(const Obraz& operand1, const Obraz& operand2);

	// Un�rn� oper�tor ~ pro v�po�et negativu
	Obraz operator~() {
		Obraz result();

		return result;
	}

	// Oper�tory pro rovnost, nerovnost, p�i�azen�
	Obraz& operator==(const Obraz& operand) {

	}
	Obraz& operator!=(const Obraz& operand) {

	}
	Obraz& operator=(const Obraz& operand) {

	}

	// Oper�tor [] pro vracen�/p�i�azen� intenzity pixelu
	T* operator[](int i) const {
		return pole[i];
	}

	// Oper�tor << pro ulo�en� do souboru
	friend std::ostream& operator<<(std::ostream& out, Obraz& x);

	// Funkce pro filtraci obrazu, prahov�n�, detekci objektu
	Obraz filter() {
		Obraz result();

		return result;
	}
	Obraz prahovani() {
		Obraz result();

		return result;
	}
	Obraz object_detection() {
		Obraz result();

		return result;
	}
};

//// Bin�rn� oper�tor +
//Obraz operator+(const Obraz& operand1, const Obraz& operand2) {
//	Obraz result();
//
//	return result;
//}
//// Bin�rn� oper�tor -
//Obraz operator-(const Obraz& operand1, const Obraz& operand2) {
//	Obraz result();
//
//	return result;
//}
//// Bin�rn� oper�tor * (konvoluce)
//Obraz operator*(const Obraz& operand1, const Obraz& operand2) {
//	Obraz result();
//
//	return result;
//}
//// Bin�rn� oper�tor +=
//Obraz operator+=(const Obraz& operand1, const Obraz& operand2) {
//	Obraz result();
//
//	return result;
//}
//// Bin�rn� oper�tor -=
//Obraz operator-=(const Obraz& operand1, const Obraz& operand2) {
//	Obraz result();
//
//	return result;
//}
//
//// Oper�tor << pro ulo�en� do souboru
//std::ostream& operator<<(std::ostream& out, Obraz& x) {
//
//	return out;
//}

class Pixel {

};

int main() {
	std::cout << "Hello World" << std::endl;

	std::ifstream file;
	char test[14];

	file.open("bmp_test_input_bw.bmp", std::ios::binary | std::ios::in);
	file.read((char*)&test, sizeof(test));

	for (int i = 0; i < 14; i++) {
		std::cout << std::hex << (unsigned int)test[i] << " ";
	}

	return 0;
}