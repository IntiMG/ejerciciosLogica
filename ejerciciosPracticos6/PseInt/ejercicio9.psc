Proceso ejercicio9
	Definir MAX Como Entero;
	MAX <- 3;
	Dimension matriz1[3,3], matriz2[3,3], matrizResultante[3,3];
	Definir i, j, mult, matriz1, matriz2, matrizResultante Como Entero;
	
	Para i <- 0 hasta MAX - 1 Con Paso 1 hacer
		para j <- 0 hasta MAX - 1 Con Paso 1 Hacer
			Escribir "Ingresa un numero, fila ", i + 1, ", columna ", j+1, ": ";
			Leer matriz1[i,j];
		FinPara
	FinPara
	
	Para i <- 0 hasta MAX - 1 Con Paso 1 hacer
		para j <- 0 hasta MAX - 1 Con Paso 1 Hacer
			Escribir "Ingresa un numero, fila ", i + 1, ", columna ", j+1, ": ";
			Leer matriz2[i,j];
		FinPara
	FinPara
	
	Para i <- 0 hasta MAX - 1 Con Paso 1 hacer
		para j <- 0 hasta MAX - 1 Con Paso 1 Hacer
			matrizResultante[i,j] <- matriz1[i,j] * matriz1[i,j];
		FinPara
	FinPara
	
	Para i <- 0 hasta MAX - 1 Con Paso 1 hacer
		para j <- 0 hasta MAX - 1 Con Paso 1 Hacer
			Escribir matrizResultante[i,j];
		FinPara
	FinPara
	
FinProceso
