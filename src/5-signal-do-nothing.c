#include <stdio.h>
#include <unistd.h>

int main() {

    //sleep(10);
    //printf("Exited.\n");

    int buffer[10];  // Crear un arreglo de caracteres de 10 bytes

    // Llenar el arreglo con el valor 'A'
    memset(buffer, 'A', sizeof(buffer));

    // Imprimir el contenido del arreglo
    printf("Buffer: %s\n", buffer);

    return 0;
}
