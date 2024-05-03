Proceso ejercicio5
	Dimensionar notas[8];
	Definir suma, promedio Como Real;
	Definir notas, i, aprobados, reprobados como entero;
	
	suma <-0;
	aprobados <- 0;
	reprobados <- 0;
	para i <- 0 hasta 7 Con Paso 1 Hacer
		Escribir "Agrega la nota del estudiante ", i+1, " : ";
		leer notas[i];
	FinPara
	
	
	para i <- 0 hasta 7 con paso 1 Hacer
		si notas[i] >= 70 Entonces
			aprobados <- aprobados + 1;
		sino 
			reprobados <- reprobados + 1;
		FinSi
	FinPara
	
	
	Para i <- 0 Hasta 7 Con Paso 1 Hacer
        suma <- suma + notas[i];
    FinPara
	
    promedio <- suma / 8;
	Escribir "Cantidad de alumnos aprobados: ", aprobados;
    Escribir "Cantidad de alumnos reprobados: ", reprobados;
	Escribir "El promedio es de: ", promedio;
	
FinProceso
