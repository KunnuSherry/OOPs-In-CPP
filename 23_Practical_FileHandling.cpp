#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Open files
    ifstream fin("abc.txt", ios::in);
    ofstream fout("xyz.txt", ios::out);

    // Check for file errors
    if (!fin) {
        cout << "Error: Unable to open input file!" << endl;
        return 1;
    }
    if (!fout) {
        cout << "Error: Unable to open output file!" << endl;
        return 1;
    }

    char ch;
    while (fin.get(ch)) { // Read each character
        // Skip whitespace characters
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\v' || ch == '\r') {
            continue;
        }
        fout.put(ch); // Write non-whitespace characters to output file
    }

    // Close files
    fin.close();
    fout.close();

    cout << "Whitespace removed and written to xyz.txt" << endl;
    return 0;
}
