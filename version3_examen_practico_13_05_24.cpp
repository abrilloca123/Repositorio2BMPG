// version3_examen_practico_13_05_24
#include <stdio.h>
#include <string.h>
int main(){
	
	char nombre[20];
	char contrasena[20];
	int intentos=3;
	while (intentos > 0){
        printf("ingrese el usuario: ");
        scanf("%s",nombre);
        printf("ingrese la contrasena: ");
        scanf("%s",contrasena);

             if (strcmp(nombre,"Abril LC") == 0 && strcmp(contrasena, "2b18") == 0) {
            printf("Bienvenido al sistema %c \n",nombre);
            break;
        } else {
            printf("Datos incorrectos. Intentos restantes: %d\n", intentos - 1);
            intentos--;
        }
    }

    if (intentos == 0) {
        printf("Has agotado tus intentos. Acceso denegado.\n");
	}
    
// aqui va la factura

	int cantidad;
	float precio;
	float total = 0.0;
	
	while (1){
	printf("Ingresa la cantidad de productos: ");
	scanf("%d",&cantidad);
		if(cantidad==0){
			break;
		}else if (cantidad < 0) {
            printf("La cantidad debe ser un n�mero positivo. \n");
            continue;
	}
	 printf("Ingrese el precio unitario: ");
	 scanf("%f",&precio);
	 if(precio<0){
	 	printf("El precio debe ser un numero positivo. \n");
	 	continue;
	 }
	 total+=cantidad*precio;
	}
	
	printf("El precio total es de: %f",total);
	
	return 0;
    }

