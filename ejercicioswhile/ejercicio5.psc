Proceso ejercicio5
	Dimension  notas[8];
    Definir i, suma, aprobados, reprobados, notas Como Entero;
    i <- 0;
    suma <- 0;
    Mientras i < 8 Hacer
        Escribir "Ingresa la notas del alumno #", i + 1, ": ";
        Leer notas[i];
        i <- i + 1;
    FinMientras
    aprobados <- 0;
    i <- 0;
    Mientras i < 8 Hacer
        Si notas[i] >= 70 Entonces
            aprobados <- aprobados + 1;
        FinSi
        suma <- suma + notas[i];
        i <- i + 1;
    FinMientras
    reprobados <- 8 - aprobados;
    Escribir "La cantidad de aprobados es de: ", aprobados;
    Escribir "La cantidad de reprobados es de: ", reprobados;
    Escribir "El promedio general del grupo es de: ", suma / 8;
FinProceso
