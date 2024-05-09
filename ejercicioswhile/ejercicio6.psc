Proceso ejercicio6
	Definir i, suma Como Entero;
    i <- 100;
    suma <- 0;
    Mientras i <= 200 Hacer
        Si (i Mod 2) = 0 Entonces
            Escribir i;
            suma <- suma + i;
        FinSi
        i <- i + 1;
    FinMientras
    Escribir "La suma de los numeros pares entre 100 y 200 es: ", suma;
FinProceso
