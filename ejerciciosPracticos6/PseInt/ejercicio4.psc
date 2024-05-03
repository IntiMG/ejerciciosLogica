Proceso ejercicio4
	Dimension notas[10];
	Definir suma, promedio Como Real;
	Definir notas, i como entero;
	
	suma <- 0;
	para i <- 0 hasta 9 Con Paso 1 Hacer
		Escribir "Agrega la nota del estudiante ", i+1, " : ";
		leer notas[i];
		suma <- suma + notas[i];
	FinPara
	
	promedio <- suma / 10;
	Escribir "El promedio es de: ", promedio;
FinProceso
