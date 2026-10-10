/*
 * Ejercicio 1: Variables y Tipos de Datos Básicos
 * 
 * Objetivos:
 * - Aprender a declarar variables de diferentes tipos
 * - Entender la entrada y salida básica
 * - Practicar la asignación de valores
 * - Conocer los tipos de datos fundamentales de C++
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "=== EJERCICIO 1: VARIABLES Y TIPOS DE DATOS ===\n\n";
    
    // ===== PARTE 1: DECLARACIÓN DE VARIABLES =====
    cout << "1. Declarando variables de diferentes tipos:\n";
    
    // Variables enteras
    int edad = 25;
    int añoNacimiento = 1998;
    
    // Variables de punto flotante
    float altura = 1.75f;
    double peso = 70.5;
    
    // Variables de caracteres
    char inicial = 'D';
    char genero = 'M';
    
    // Variables booleanas
    bool esEstudiante = true;
    bool tieneExperiencia = false;
    
    // Variable de cadena
    string nombre = "Daniel";
    string apellido = "García";
    
    // ===== PARTE 2: MOSTRAR VALORES =====
    cout << "   - Edad: " << edad << " años\n";
    cout << "   - Año de nacimiento: " << añoNacimiento << "\n";
    cout << "   - Altura: " << altura << " metros\n";
    cout << "   - Peso: " << peso << " kg\n";
    cout << "   - Inicial: " << inicial << "\n";
    cout << "   - Género: " << genero << "\n";
    cout << "   - ¿Es estudiante? " << (esEstudiante ? "Sí" : "No") << "\n";
    cout << "   - ¿Tiene experiencia? " << (tieneExperiencia ? "Sí" : "No") << "\n";
    cout << "   - Nombre completo: " << nombre << " " << apellido << "\n\n";
    
    // ===== PARTE 3: ENTRADA DEL USUARIO =====
    cout << "2. Ahora vamos a pedir datos al usuario:\n";
    
    string nombreUsuario;
    int edadUsuario;
    float alturaUsuario;
    
    cout << "   Por favor, ingresa tu nombre: ";
    cin >> nombreUsuario;
    
    cout << "   Por favor, ingresa tu edad: ";
    cin >> edadUsuario;
    
    cout << "   Por favor, ingresa tu altura (en metros): ";
    cin >> alturaUsuario;
    
    // ===== PARTE 4: MOSTRAR DATOS INGRESADOS =====
    cout << "\n3. Datos ingresados por el usuario:\n";
    cout << "   - Nombre: " << nombreUsuario << "\n";
    cout << "   - Edad: " << edadUsuario << " años\n";
    cout << "   - Altura: " << alturaUsuario << " metros\n\n";
    
    // ===== PARTE 5: OPERACIONES CON VARIABLES =====
    cout << "4. Realizando operaciones con las variables:\n";
    
    int añosParaJubilacion = 65 - edadUsuario;
    float alturaEnCentimetros = alturaUsuario * 100;
    
    cout << "   - Años para jubilación: " << añosParaJubilacion << "\n";
    cout << "   - Altura en centímetros: " << alturaEnCentimetros << " cm\n\n";
    
    // ===== PARTE 6: EJERCICIOS PARA PRACTICAR =====
    cout << "=== EJERCICIOS PARA PRACTICAR ===\n";
    cout << "1. Modifica este programa para incluir más tipos de datos\n";
    cout << "2. Agrega variables para calcular el IMC (peso / altura²)\n";
    cout << "3. Crea variables para almacenar información de contacto\n";
    cout << "4. Experimenta con diferentes valores y tipos\n\n";
    
    cout << "¡Programa ejecutado exitosamente!\n";
    
    return 0;
}
