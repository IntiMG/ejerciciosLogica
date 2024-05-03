Proceso ejercicio10
	Dimension matriz[3,3];
	definir i, j, matriz como entero;
	
	Para i <- 0 hasta 3 - 1 Con Paso 1 hacer
		para j <- 0 hasta 3 - 1 Con Paso 1 Hacer
			Escribir "Ingresa un numero, fila ", i + 1, ", columna ", j+1, ": ";
			Leer matriz[i,j];
		FinPara
	FinPara
	
	Para i <- 0 hasta 3 - 1 Con Paso 1 hacer
		para j <- 0 hasta 3 - 1 Con Paso 1 Hacer
			Escribir  matriz[j,i];
		FinPara
		Escribir "";
	FinPara
	
	
FinProceso
