#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;


int main() {
    string filename = "./text1.txt";
    ofstream outfile(filename, ios::app);

    if(!outfile.is_open()) {
        cerr << "File " << filename << " not open correctly!\n";
    }

    outfile << "Hello the";
    outfile.put('k');
    
    // cout << outfile.tellp() << "\n";

    // outfile.seekp(5);

    // outfile << "one";

    // cout << outfile.tellp() << "\n";

    outfile.close();

    // ifstream infile;
    // infile.open(filename, ios::in);

    // if(!infile.is_open()) {
    //     cerr << "File " << filename << " not open correctly!\n";
    // }

    // string input;

    // char ch;
    // while(infile.get(ch)) {
    //     input.append(1,ch);        
    // }

    // cout << input << "\n";

    // cout << infile.tellg() << "\n";

    // infile.close();



    return 0;
}

