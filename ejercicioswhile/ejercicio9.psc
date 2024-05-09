Proceso ejercicio9
	Definir fila1, columna1, fila2, columna2 Como Entero;
    Dimension matriz1[10,10], matriz2[10,10], matrizResultante[10,10] Como Entero;
    Escribir "Ingrese el numero de filas y columnas para la primera matriz: ";
    Leer fila1, columna1;
    Escribir "Ingrese el numero de filas y columnas para la segunda matriz: ";
    Leer fila2, columna2;
    Si columna1 <> fila2 Entonces
        Escribir "Las matrices no son compatibles para la multiplicacion...";
        Terminar Proceso;
		FinSi
		Definir i, j, k Como Entero;
		Escribir "Ingresa los elementos de la primera matriz: ";
		Para i <- 0 Hasta fila1 - 1 Hacer
			Para j <- 0 Hasta columna1 - 1 Hacer
				Escribir "Ingresa un numero, fila ", i + 1, ", columna ", j + 1, ": ";
				Leer matriz1[i, j];
			FinPara
		FinPara
		Escribir "Ingresa los elementos de la segunda matriz: ";
		Para i <- 0 Hasta fila2 - 1 Hacer
			Para j <- 0 Hasta columna2 - 1 Hacer
				Escribir "Ingresa un numero, fila ", i + 1, ", columna ", j + 1, ": ";
				Leer matriz2[i, j];
			FinPara
		FinPara
		Para i <- 0 Hasta fila1 - 1 Hacer
			Para j <- 0 Hasta columna2 - 1 Hacer
				matrizResultante[i, j] <- 0;
				Para k <- 0 Hasta columna1 - 1 Hacer
					matrizResultante[i, j] <- matrizResultante[i, j] + matriz1[i, k] * matriz2[k, j];
				FinPara
			FinPara
		FinPara
		Escribir "El producto de las matrices es: ";
		Para i <- 0 Hasta fila1 - 1 Hacer
			Para j <- 0 Hasta columna2 - 1 Hacer
				Escribir matrizResultante[i, j], " ";
			FinPara
			Escribir "";
		FinPara
FinProceso
