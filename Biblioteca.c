/*
 ============================================================================
 Name        : finalProjectt.c
 Author      : Sarah y Jesús PRUEBA DE TAGS
 Version     :
 Copyright   : Your copyright notice
 Description : Programa registro biblioteca
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "raiz.h"

#define SIZE	10 //define un tamaño de 10

struct libro{ //características que debe tener un libro
	int numLibro;
	char titulo[50];
	char autor[50];
	int codigo[SIZE];
	int year;
};

int cambio(int, int); //prototipo de función cambio
int pago = 0; //inicialización para la variable pago
int depositado = 0; //inicialización para la variable depositado

int menu(void); //prototipo función menu

int returnMenu(void); //prototipo función returnMenu
int answer;

//Declaración de los libros en base a sus características inicializadas del struct
struct libro lib1001 = {1, "Cien axos de soledad", "Gabriel Garcia Marquez", {1001}, 1967};
struct libro lib1002 = {2, "Don Quijote de la Mancha", "Miguel de Cervantes", {1002}, 1605};
struct libro lib1003 = {3, "El Senor de los Anillos", "J.R.R. Tolkien", {1003}, 1954};
struct libro lib1004 = {4, "El gran Gatsby", "F. Scott Fitzgerald", {1004}, 1925};
struct libro lib1005 = {5, "Matar a un ruisenor", "Harper Lee", {1005}, 1960};

// Programa principal
int main() {

	// llamada a la funcion menu
	menu();
	return EXIT_SUCCESS;

}

//funcion MENU
int menu(void){
	puts("Bienvenido al programa de la Biblioteca"); //bienvenida

	printf("MENÚ: \n1. Revisar la lista de libros\n2. Característica del libro\n3. Préstamo del libro\n4. Entregar libro\n5. Pagar libro\n6. Salir\n"); //acciones que puede hacer el programa

	int operacion; //inicializa variable operación (número de operación que el usuario desea realizar)
	scanf("%d", &operacion);

	switch(operacion){ //depende el caso la acción se realizará
	case 1:{
		char *n[5][1] = { //arreglo para una tabla de dos dimensiones con los títulos del libro y su número
								{lib1001.titulo},
								{lib1002.titulo},
								{lib1003.titulo},
								{lib1004.titulo},
								{lib1005.titulo},
				};

				printf("Lista de libros\n");

				for(int i = 0; i < 5; i++){
					printf("%d\t %s\n", i+1, n[i][0]); //se imprime el número de libro y el título del libro

				}

				printf("¿Quieres realizar otra acción?(1 para si, 6 para salir)\n");
				returnMenu(); //regresa al menú
	}
		break;

	case 2:
		printf("Escribe el número del libro que quieras buscar: \n"); //le pide al usuario el número de libro deseado

		int number; //inicialización variable para el número dle libro
		scanf("%d", &number);

		if(number == 1){ //evalúa el número del libro

			//lista las características del libro 1 accediendo a los miembros de struct
			printf("Número del libro: %d\n", lib1001.numLibro);
			printf("Título: %s\n", lib1001.titulo);
			printf("Autor: %s\n", lib1001.autor);
			printf("Código: %d\n", lib1001.codigo[0]);
			printf("Año de publicación: %d\n", lib1001.year);

		}else if (number == 2){ //evalúa el número del libro

			//lista las características del libro 2 accediendo a los miembros de struct
			printf("Número del libro: %d\n", lib1002.numLibro);
			printf("Título: %s\n", lib1002.titulo);
			printf("Autor: %s\n", lib1002.autor);
			printf("Código: %d\n", lib1002.codigo[0]);
			printf("Año de publicación: %d\n", lib1002.year);

		}else if(number == 3){ //evalúa el número del libro

			//lista las características del libro 3 accediendo a los miembros de struct
			printf("Número del libro: %d\n", lib1003.numLibro);
			printf("Título: %s\n", lib1003.titulo);
			printf("Autor: %s\n", lib1003.autor);
			printf("Código: %d\n", lib1003.codigo[0]);
			printf("Año de publicación: %d\n", lib1003.year);

		}else if(number == 4){ //evalúa el número del libro

			//lista las características del libro 4 accediendo a los miembros de struct
			printf("Número del libro: %d\n", lib1004.numLibro);
			printf("Título: %s\n", lib1004.titulo);
			printf("Autor: %s\n", lib1004.autor);
			printf("Código: %d\n", lib1004.codigo[0]);
			printf("Año de publicación: %d\n", lib1004.year);

		}else if(number == 5){ //evalúa el número del libro

			//lista las características del libro 5 accediendo a los miembros de struct
			printf("Número del libro: %d\n", lib1005.numLibro);
			printf("Título: %s\n", lib1005.titulo);
			printf("Autor: %s\n", lib1005.autor);
			printf("Código: %d\n", lib1005.codigo[0]);
			printf("Año de publicación: %d\n", lib1005.year);

		} else {
			printf("No existe ese libro\n"); //si el número no está en la lista
		}

		printf("¿Quieres realizar otra acción?(1 para si, 6 para salir)\n"); //le deja elegir al usuario si quiere regresar al menu o salir
		returnMenu(); //función returnMenu

		break;

	//PRESTAMO DEL LIBRO
	case 3:{

    char eleccion;

    do {

		//Le pide al usuario un numero de libro
        int NumLibro;
        printf("Que libro deseas seleccionar: ");
        scanf("%d", &NumLibro);

		//Evalua el numero de libro
        if (NumLibro == 1) {
            puts("\nGRACIAS POR PEDIR EL SIGUIENTE LIBRO: \n");
            printf("LIBRO SOLICITADO\n");
            printf("Título\t ----- %s\n", lib1001.titulo);
            printf("Autor\t ----- %s\n", lib1001.autor);
            printf("Año\t ----- %d\n", lib1001.year);
            puts("RECUERDE tiene 10 dias para devolverlo, de lo contrario debera pagar una cuota");

        } else if (NumLibro == 2) {
            puts("\nGRACIAS POR PEDIR EL SIGUIENTE LIBRO: \n");
            printf("LIBRO SOLICITADO\n");
            printf("Título\t ----- %s\n", lib1002.titulo);
            printf("Autor\t ----- %s\n", lib1002.autor);
            printf("Año\t ----- %d\n", lib1002.year);
            puts("RECUERDE tiene 10 dias para devolverlo, de lo contrario debera pagar una cuota");

        } else if (NumLibro == 3) {
            puts("\nGRACIAS POR PEDIR EL SIGUIENTE LIBRO: \n");
            printf("LIBRO SOLICITADO\n");
            printf("Título\t ----- %s\n", lib1003.titulo);
            printf("Autor\t ----- %s\n", lib1003.autor);
            printf("Año\t ----- %d\n", lib1003.year);
            puts("RECUERDE tiene 10 dias para devolverlo, de lo contrario debera pagar una cuota");

        } else if (NumLibro == 4) {
            puts("\nGRACIAS POR PEDIR EL SIGUIENTE LIBRO: \n");
            printf("LIBRO SOLICITADO\n");
            printf("Título\t ----- %s\n", lib1004.titulo);
            printf("Autor\t ----- %s\n", lib1004.autor);
            printf("Año\t ----- %d\n", lib1004.year);
            puts("RECUERDE tiene 10 dias para devolverlo, de lo contrario debera pagar una cuota");

        } else if (NumLibro == 5) {
            puts("\nGRACIAS POR PEDIR EL SIGUIENTE LIBRO: \n");
            printf("LIBRO SOLICITADO\n");
            printf("Título\t ----- %s\n", lib1005.titulo);
            printf("Autor\t ----- %s\n", lib1005.autor);
            printf("Año\t ----- %d\n", lib1005.year);
            puts("RECUERDE tiene 10 dias para devolverlo, de lo contrario debera pagar una cuota");


			//Numero de libro invalido
        } else {
            printf("%d no es una opcion valida de libro\n", NumLibro);
        }

        printf("\n¿Deseas pedir otro libro? (s/n): ");
        scanf(" %c", &eleccion); // El espacio antes de %c es importante

		//Evalua el caracter para repetir la accion
    } while (eleccion == 's' || eleccion == 'S');

	printf("¿Quieres realizar otra acción?(1 para si, 6 para salir)\n");
	returnMenu();

    break;
}

	// ENTREGA DE LIBRO
	case 4:{
		int dias;
		int numLibro;

		//Mensaje de bienvenida
		puts("BIENVENIDO AL SISTEMA DE ENTREGA DE LIBRO");


		// Le pide al usuario un numero de libro
		printf("¿Qué número de libro estás entregando (1-5)?: ");
		scanf("%d", &numLibro);

	// Mostrar el título sin nuevos arreglos
	switch (numLibro) {
		case 1:  printf("Entregaste: %s\n", lib1001.titulo); break;
		case 2:  printf("Entregaste: %s\n", lib1002.titulo); break;
		case 3:  printf("Entregaste: %s\n", lib1003.titulo); break;
		case 4:  printf("Entregaste: %s\n", lib1004.titulo); break;
		case 5:  printf("Entregaste: %s\n", lib1005.titulo); break;


		//En caso de que el usuario no digite una opcion valida
		default:
			printf("Ese libro no existe.\n");
			break;
	}

	//Evalua si el numero de libro es validp
	if (numLibro <= 5){
		printf("¿Cuántos días lleva con el libro?: ");
		scanf("%d", &dias);


		//Evalua la cantidad de dias para calcular la multa
		if (dias <= 10) {
			puts("GRACIAS POR TU DEVOLUCION\n NO DEBES NADA");
			printf("¿Quieres realizar otra acción?(1 para si, 6 para salir)\n");
			returnMenu();


		// Si el numero de dias supera 10 calcula la multa
		} else {

			int k = 5;
			int diasretraso = dias - 10;

			size_t multa = k * sqrt(diasretraso);

			printf("Tu PAGO a REALIZAR es de: $%zu\n", multa);
			printf("¿Quieres realizar otra acción?(1 para si, 6 para salir)\n");
			returnMenu();

	}

	//Si el numero de libro no es valido
	} else {
		printf("Redireccionando al menu...(1 para si, 6 para no)\n");
		returnMenu();
	}

		//break;
	}

	break;

		// Pago de libro retraso
	case 5:{}

		printf("Bienvenido al sistema de pagos con retraso\nIngrese el monto a pagar: \n"); //le pide al usuario el monto que debe pagar
		scanf("%d", &pago);
		printf("Ingrese cantidad depositada: \n"); //le pide al usuario con que billete o cantidad va a cubrir el pago
		scanf("%d", &depositado);

		cambio(pago, depositado); //llama la funciín cambio
		puts("Gracias por tu pago");

		printf("¿Quieres realizar otra acción?(1 para si, 6 para salir)\n"); //deja que el usuario elija regresar al menu o salir
		returnMenu(); //llama a returnMenu

		break;

	case 6:
        puts("Gracias por comprar ");
    	break; //termina el programa


	//Se digito un numero distinto de 1-6
    default:
        puts("OPCION INVALIDA, por favor digite otra :)");
		printf("1 para regresar al menu, 6 para salir)\n"); //deja que el usuario elija regresar al menu o salir
		returnMenu(); //llama a returnMenu
        break;
	}

	return 0;
}

// Funcion cambio
int cambio(int pago, int depositado){ //datos que inserta el usuario
	int cambio = depositado - pago; //operación a realizar (resta)
	printf("Tu cambio es: %d\n", cambio); //imprime el resultado
	return 0;
}

//FUNCION REGRESAR AL MENU, cerrar programa o respuesta invalida
int returnMenu(void){
	scanf("%d", &answer); //scanea la respuesta del usuario

	if(answer == 1){ //evalua si la respuesta es 1
		menu(); //llama a la función menú (muestra las opciones para realizar)
	} else if (answer == 6){ //evalua si la respuesta es 6
		printf("Cerrando programa..."); //cierra el programa
	} else {
		printf("Respuesta inválida\nRedirigiendo al menu..."); //en dado caso que no sea ni 1 ni 6, se repite la operación
		menu();
	}

	return 0;
}

