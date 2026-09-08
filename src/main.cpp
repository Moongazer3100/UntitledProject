#include <iostream>
#include <fstream>

int main() {

	std::cout << "hello. Text from main. Check the text.txt in resource.\n";

	std::ofstream file(RESOURCES_PATH "text.txt");

	file << "hello. Text from main\n";

	file.close();
	return 0;
}