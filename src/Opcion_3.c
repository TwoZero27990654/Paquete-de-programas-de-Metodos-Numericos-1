#include <stdio.h>
#include <math.h>

static double CalcularDeterminante(double matriz[3][3]) {
    double det = 0;
    
    det = matriz[0][0] * (matriz[1][1] * matriz[2][2] - matriz[1][2] * matriz[2][1])
        - matriz[0][1] * (matriz[1][0] * matriz[2][2] - matriz[1][2] * matriz[2][0])
        + matriz[0][2] * (matriz[1][0] * matriz[2][1] - matriz[1][1] * matriz[2][0]);
    
    return det;
}

static void DeterminanteMatriz() {
    double matriz[3][3];
    int i, j;
    
    puts("Ingrese los elementos de la matriz 3x3:");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%lf", &matriz[i][j]);
        }
    }
    
    double det = CalcularDeterminante(matriz);
    
    puts("\nMatriz ingresada:");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%10.4lf", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\nDeterminante: %.4lf\n", det);
}

void Opcion_02() {
    int respuesta;
    
    do {
        LIMPIAR_PANTALLA();
        DeterminanteMatriz();
        puts("--------------------------------------------------");
        respuesta = Pregunta_cerrada("¿Quiere calcular otro determinante");
    }
    while(respuesta == 1);
}
