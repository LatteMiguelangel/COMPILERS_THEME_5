package main

import (
	"fmt"
	"github.com/antlr4-go/antlr/v4"
	"os"
	"path/filepath"
	"sort"
)

func main() {
	if len(os.Args) < 2 {
		fmt.Println("Uso: ./parser_go <ruta_carpeta>")
		os.Exit(1)
	}

	carpeta := os.Args[1]

	// Buscar archivos .txt y ordenarlos
	archivos, err := filepath.Glob(filepath.Join(carpeta, "*.txt"))
	if err != nil {
		fmt.Println("Error leyendo la carpeta:", err)
		os.Exit(1)
	}
	sort.Strings(archivos)

	// Procesar cada archivo
	for _, ruta := range archivos {
		input, err := antlr.NewFileStream(ruta)
		if err != nil {
			continue
		}

		lexer := NewInterfacesLexer(input)
		stream := antlr.NewCommonTokenStream(lexer, 0)
		parser := NewInterfacesParser(stream)

		parser.ConfigFile()
	}
}
