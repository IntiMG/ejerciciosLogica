Proceso sin_titulo
	Definir long Como Entero;
    Dimension vector1[100], vector2[100] Como Entero;
    Definir i, producto, vector1, vector2 Como Entero;
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
    producto <- 0;
    Mientras i < long Hacer
        producto <- producto + vector1[i] * vector2[i];
        i <- i + 1;
    FinMientras
    Escribir "El producto punto de los dos vectores es de: ", producto;
FinProceso
