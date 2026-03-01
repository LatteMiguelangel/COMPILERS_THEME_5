import sys
from pathlib import Path
from antlr4 import *
from InterfacesLexer import InterfacesLexer
from InterfacesParser import InterfacesParser

def main():
    if len(sys.argv) < 2:
        print("Uso: python main.py <ruta_carpeta>")
        sys.exit(1)

    carpeta = Path(sys.argv[1])

    # Obtener todos los .txt y ordenarlos alfabéticamente
    archivos_txt = sorted(carpeta.glob('*.txt'))

    if not archivos_txt:
        print(f"No se encontraron archivos .txt en {carpeta}")
        return

    for archivo in archivos_txt:
        # 1. Leer archivo
        input_stream = FileStream(str(archivo), encoding='utf-8')

        # 2. Lexer
        lexer = InterfacesLexer(input_stream)
        stream_tokens = CommonTokenStream(lexer)

        # 3. Parser
        parser = InterfacesParser(stream_tokens)

        # 4. Construir el árbol (análisis)
        arbol = parser.configFile()

if __name__ == '__main__':
    main()
