#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main() {

    std::ifstream ifile("INPUT.txt");
    std::ofstream ofile("OUTPUT.txt");
    
    if (!ifile.is_open()) {
        std::cout << "input error\n" << std::endl;
        return 1;
    }
    
    int MIN, MAX;
    std::cout << "enter your minimum amount of letters and then your maximum amount of letters \n";
    std::cin >> MIN;
    std::cin >> MAX;
    std::string contents;

    while (ifile){
        std::getline(ifile, contents);
        std::string Line = contents;
        int RealLength = Line.length() - 1;
            if (RealLength >= MIN  && RealLength <= MAX ){
            
            if (!ofile.is_open()){
                std::cout << "output error\n" << std::endl;
            return 1;
            }
            ofile << Line << std::endl;
            std::cout<< RealLength << " " << Line << std::endl;
        }
    }
    
    ofile.close();
    ifile.close();
    return 0;
}