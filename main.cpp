#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

vector<string> readFromFile(const string& filename)
{
    vector<string> lines;
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Ошибка открытия файла: " << filename << endl;
        return lines;
    }

    string line;
    while (getline(file, line)) {
        lines.push_back(line);
    }
    file.close();
    return lines;
}

void printToScreen(const vector<string>& lines)
{
     wcout << L"Вывод строк на экран" << endl;
    for (const string& line : lines) {
        cout << line << endl;
    }
}

void writeToFile(const vector<string>& lines, const string& filename)
{
    cout<<endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    string inputFile = "input.txt";
    string outputFile = "output.txt";

    vector<string> lines = readFromFile(inputFile);
    printToScreen(lines);
    writeToFile(lines, outputFile);

    wcout << L"Программа завершена." << endl;
    return 0;
}
