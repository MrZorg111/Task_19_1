#include <fstream>
#include <iostream>

int look(std::string w) {
    int count = 0;
    std::ifstream reader;
    std::string text;
    reader.open("P:\\word.txt");
    while (!reader.eof())
    {
        reader >> text;
        if (text == w) {
            count++;
        }

    }
    reader.close();
    return count;
}
int main() {
    std::string word;
    int l;
    std::cout << "Enter the word you are looking for: \n";
    std::cin >> word;
    l = look(word);
    if (l > 0) {
        std::cout << "The search word occurs " << l << " times in the text.";
    }
    else {
        std::cout << "The word you are looking for is not found in the text.";
    }
}
