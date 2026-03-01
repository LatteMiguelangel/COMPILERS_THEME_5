#include <iostream>
#include <fstream>
#include <filesystem>
#include <vector>
#include <algorithm>
#include <antlr4-runtime.h>
#include "InterfacesLexer.h"
#include "InterfacesParser.h"

using namespace antlr4;
namespace fs = std::filesystem;

int main(int argc, const char* argv[]) {
    if (argc < 2) {
        std::cerr << "Uso: ./parser_cpp <ruta_carpeta>" << std::endl;
        return 1;
    }

    std::string carpeta = argv[1];
    std::vector<std::string> archivos;

    // Obtener todos los archivos .txt del directorio
    for (const auto& entry : fs::directory_iterator(carpeta)) {
        if (entry.path().extension() == ".txt") {
            archivos.push_back(entry.path().string());
        }
    }

    // Ordenar alfabéticamente
    std::sort(archivos.begin(), archivos.end());

    // Procesar cada archivo
    for (const auto& ruta : archivos) {
        std::ifstream stream;
        stream.open(ruta);
        
        ANTLRInputStream input(stream);
        InterfacesLexer lexer(&input);
        CommonTokenStream tokens(&lexer);
        InterfacesParser parser(&tokens);
        
        tree::ParseTree *arbol = parser.configFile();
    }

    return 0;
}
