Proceso ejercicio10
	Dimension matriz[3,3] Como Entero;
    Definir i, j, matriz Como Entero;
    i <- 0;
    Mientras i < 3 Hacer
        j <- 0;
        Mientras j < 3 Hacer
            Escribir "Ingresa un numero, fila ", i + 1, ", columna ", j + 1, ": ";
            Leer matriz[i, j];
            j <- j + 1;
        FinMientras
        i <- i + 1;
    FinMientras
    Escribir "Matriz transpuesta";
    i <- 0;
    Mientras i < 3 Hacer
        j <- 0;
        Mientras j < 3 Hacer
            Escribir matriz[j, i];
            j <- j + 1;
        FinMientras
        Escribir "";
        i <- i + 1;
    FinMientras
FinProceso
