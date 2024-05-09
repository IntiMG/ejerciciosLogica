Proceso ejercicio7
	Definir long Como Entero;
    Dimension vector1[100], vector2[100], suma[100];
    Definir i, vector1, vector2, suma Como Entero;
    Escribir "Ingresa la longitud para los dos vectores: ";
    Leer long;
    i <- 0;
    Escribir "Ingrese los elementos del primer vector: ";
    Mientras i < long Hacer
        Leer vector1[i];
        i <- i + 1;
    FinMientras
    i <- 0;
    Escribir "Ingrese los elementos del segundo vector: ";
    Mientras i < long Hacer
        Leer vector2[i];
        i <- i + 1;
    FinMientras
    i <- 0;
    Escribir "La suma de los vectores es de: ";
    Mientras i < long Hacer
        suma[i] <- vector1[i] + vector2[i];
        Escribir suma[i];
        i <- i + 1;
    FinMientras
	
FinProceso
