#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

struct puntuacion {
int jugador;
int puntos;
};

int main(int argc, char **argv) {
    int fd;
    struct puntuacion p;
    char buffer[1024];

    // borrar FIFO por si existiera previamente
    unlink("FIFO");

    /* crear el FIFO */
    if (mkfifo("FIFO",0600)<0) {
        perror("No puede crearse el FIFO");
        return(1);
    }
    /* Abrir el FIFO */
    if ((fd=open("FIFO",O_RDONLY))<0) {
        perror("No puede abrirse el FIFO");
        return(1);
    }
    /* Leer de la FIFO */
    while (read(fd,&p,sizeof(puntuacion))>0) {
	printf("JUgador %d marca 1 punto,lleva un total de %d putnos\n",p.jugador,p.puntos); //: Imprimir el texto en la pantalla
    }
    close(fd);
    unlink("FIFO");
    return(0);
}
