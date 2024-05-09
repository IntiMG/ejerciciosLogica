Proceso ejercicio1
	Definir num, suma, i Como Entero;
    num <- 0;
    suma <- 0;
    i <- 0;
	
    Escribir "Ingrese un numero: ";
    Leer num;
	
    Mientras i <= num Hacer
        suma <- suma + i;
        i <- i + 1;
    Fin Mientras
	
    Escribir "La suma de los numeros naturales desde 1 hasta ", num, " es de: ", suma;
	
FinProceso
