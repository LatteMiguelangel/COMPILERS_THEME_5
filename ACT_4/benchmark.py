import os
import time
import subprocess
import matplotlib.pyplot as plt

# Configuraciones de rutas
CARPETA_BENCH = "benchfiles"
TIEMPOS = {}

def ejecutar_comando(comando, cwd=None):
    """Ejecuta un comando en la terminal de forma silenciosa."""
    try:
        subprocess.run(comando, shell=True, check=True, cwd=cwd, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
        return True
    except subprocess.CalledProcessError as e:
        print(f"Error ejecutando: {comando} \nCon error: {e}")
        return False

def medir_tiempo(nombre, comando):
    """Mide cuánto tarda en ejecutarse un comando."""
    print(f"Ejecutando {nombre}...")
    inicio = time.perf_counter()
    exito = ejecutar_comando(comando)
    fin = time.perf_counter()

    if exito:
        TIEMPOS[nombre] = fin - inicio
        print(f"  -> {nombre}: {TIEMPOS[nombre]:.4f} segundos")
    else:
        print(f"  -> {nombre} falló.")

def main():
    print("--- INICIANDO BENCHMARK DE PARSERS ---")

    # 1. Compilar C++
    # NOTA CANDIDA: Asegúrate de que las rutas a las cabeceras (-I) y librerías (-L) de ANTLR4
    # coincidan con donde las tienes instaladas en tu sistema (ej. /usr/local/include/antlr4-runtime).
    print("Compilando C++...")
    cmd_cpp = "g++ -O3 -std=c++17 main.cpp Interfaces*.cpp -I/usr/include/antlr4-runtime -lantlr4-runtime -o parser_cpp; chmod +x parser_cpp"

    if not ejecutar_comando(cmd_cpp, cwd="cpp"):
        print("Fallo en compilación de C++. Abortando benchmark de C++.")

    # 2. Compilar Go
    print("Compilando Go...")
    cmd_go = "go build -o parser_go main.go interfaces*.go; chmod +x parser_go"

    if not ejecutar_comando(cmd_go, cwd="go"):
         print("Fallo en compilación de Go. Abortando benchmark de Go.")

    print("\n--- MIDIENDO TIEMPOS DE EJECUCIÓN ---")

    # 3. Medir Tiempos pasando la ruta de la carpeta (absoluta para evitar problemas de contexto)
    ruta_absoluta_bench = os.path.abspath(CARPETA_BENCH)

    medir_tiempo("Python", f"python3 py/main.py {ruta_absoluta_bench}")
    medir_tiempo("C++", f"./cpp/parser_cpp {ruta_absoluta_bench}")
    medir_tiempo("Go", f"./go/parser_go {ruta_absoluta_bench}")

    # 4. Graficar
    if TIEMPOS:
        lenguajes = list(TIEMPOS.keys())
        tiempos_seg = list(TIEMPOS.values())

        plt.figure(figsize=(8, 6))
        plt.bar(lenguajes, tiempos_seg, color=['blue', 'green', 'cyan'])
        plt.title('Experimento de Carga: Tiempo de Análisis Sintáctico')
        plt.xlabel('Lenguaje del Parser')
        plt.ylabel('Tiempo de Ejecución (Segundos)')

        # Añadir el valor exacto encima de cada barra
        for i, v in enumerate(tiempos_seg):
            plt.text(i, v, f"{v:.4f}s", ha='center', va='bottom', fontweight='bold')

        plt.grid(axis='y', linestyle='--', alpha=0.7)
        nombre_grafica = 'benchmark_resultados.png'
        plt.savefig(nombre_grafica)
        print(f"\n¡Benchmark finalizado! Gráfica guardada como '{nombre_grafica}'")
        plt.show()
    else:
        print("No se registraron tiempos para graficar.")

if __name__ == '__main__':
    main()
