#include <iostream>

/*
Función principal de mi programa
Main
*/
int main()
{
    // Antes de usar una variable debo declararla
    int x;
    int y;
    int z;
    // Despues de declarar la variable, recien puedo inicializar
    std::cout << "Ingrese el valor de la variable x : ";
    std::cin >> x;
    std::cout << "Ingrese el valor de la variable y : ";
    std::cin >> y;

    std::cout << "El resultado de la suma es : " << x+y << std::endl;
    
    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
