#include <iostream>
#include <fstream>

int main()
{
    std::cout << "Text form main2(TestDemo). Check the text.txt in resource.\n";
    std::ofstream file(RESOURCES_PATH "text.txt");
    file << "Text from main2.";
    file.close();
    return 0;
}