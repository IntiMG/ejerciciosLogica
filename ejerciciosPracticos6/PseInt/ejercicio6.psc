Proceso ejercicio6
	Definir i, suma Como Entero;
	suma <- 0;
	
	para i <- 100 hasta 200 con paso 1 Hacer
		si i MOD 2 = 0 entonces
			suma <- suma + 1;
		FinSi
	FinPara
	Escribir "La suma de los pares es: ", suma;
FinProceso
