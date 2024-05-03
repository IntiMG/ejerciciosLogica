Proceso ejercicio8
	Dimension vector1[100], vector2[100];
	Definir long, i, vector1, vector2, resultado Como Entero;
	
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
	
	resultado <- 0;
	Para i <- 0 Hasta long - 1 Con Paso 1 Hacer
		resultado <- resultado + (vector1[i] * vector2[i]);
	FinPara
	
	Escribir "El prodcuto putno de los vectores es de: ", resultado;
	
FinProceso
