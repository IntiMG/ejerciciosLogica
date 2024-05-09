Proceso ejercicio4
	Dimension  notas[10];
    Definir i, suma, promedio, notas Como Real;
    i <- 0;
    suma <- 0;
    Mientras i < 10 Hacer
        Escribir "Ingrese la nota del estudiante ", i + 1, ": ";
        Leer notas[i];
        i <- i + 1;
    FinMientras
    i <- 0;
    Mientras i < 10 Hacer
        suma <- suma + notas[i];
        i <- i + 1;
    FinMientras
    promedio <- suma / 10;
	
FinProceso
