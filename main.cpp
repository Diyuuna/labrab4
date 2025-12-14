#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

vector<string> readFromFile(const string& filename)
{
    vector<string> lines;
    return lines;
}

void printToScreen(const vector<string>& lines)
{
    cout<<endl;
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
