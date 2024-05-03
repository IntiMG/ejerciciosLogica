Proceso ejercicio7
	Dimension vector1[100], vector2[100], suma[100];
	Definir long, i, vector1, vector2, suma Como Entero;
	
	Escribir "Ingrese la longitud: ";
	leer long;
	
	Escribir "Ingrese los elementos del primer vector: ";
	Para i <- 0 Hasta long - 1 Con Paso 1 Hacer
		leer vector1[i];
	FinPara
	
	Escribir "Ingrese los elementos del segundo vector: ";
	Para i <- 0 Hasta long - 1 Con Paso 1 Hacer
		leer vector2[i];
	FinPara
	
	Para i <- 0 Hasta long - 1 Con Paso 1 Hacer
		suma[i] <- vector1[i] + vector2[i];
	FinPara
	
	Escribir "La suma de los vectores es de: ";
	Para i <- 0 Hasta long - 1 Con Paso 1 Hacer
		Escribir suma[i], " ";
	FinPara
	
FinProceso
