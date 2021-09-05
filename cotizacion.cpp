#include <cstdio>

int main () {

    int salario;
    float salario_por_dia;
    float salario_por_hora;
    int cant_de_programadores;
    int cant_horas_hombre;
    int cant_dias_hombre_por_semana;
    int cant_horas_hombre_por_semana;
    int semanas_de_proyecto;
    float precio_del_proyecto;
    float pago_por_programador;

    int subpago;

    printf("Salario promedio de programador (int): ");
    scanf("%i", &salario);

    salario_por_dia = salario / 20;
    salario_por_hora = salario_por_dia / 9;

    printf("Cantidad de programadores (int): ");
    scanf("%i", &cant_de_programadores);

    printf("Cantidad de horas hombre (int): ");
    scanf("%i", &cant_horas_hombre);

    printf("Cantidad de dias hombre por semana (int): ");
    scanf("%i", &cant_dias_hombre_por_semana);

    cant_horas_hombre_por_semana =  cant_de_programadores * cant_horas_hombre * cant_dias_hombre_por_semana;

    printf("Semanas para el desarrollo del proyecto (int): ");
    scanf("%i", &semanas_de_proyecto);

    precio_del_proyecto = cant_horas_hombre_por_semana * semanas_de_proyecto * salario_por_hora;
    pago_por_programador = precio_del_proyecto / cant_de_programadores;

    printf("\n\nData::::::::::::::::::::::::::::::::::::::::::::::\n\n");

    printf("Salario del programador: $%i\n", salario);
    printf("Salario por dia del programador: $%f\n", salario_por_dia);
    printf("Salario por hora del programador: $%f\n", salario_por_hora);
    printf("Cantidad de programadores: %i\n", cant_de_programadores);
    printf("Cantidad de horas hombre: %i\n", cant_horas_hombre);
    printf("Cantidad de dias hombre por semana: %i\n", cant_dias_hombre_por_semana);
    printf("Cantidad de horas hombre por semana: %i\n", cant_horas_hombre_por_semana);
    printf("Semanas para el desarrollo del proyecto: %i\n", semanas_de_proyecto);
    printf("Costo del proyecto: $%f\n", precio_del_proyecto);
    printf("Pago por programadores: $%f\n\n", pago_por_programador);

    /*/
    printf("Subpago por programador (int): ");
    scanf("%i", &subpago);

    float jefe_ganancia = precio_del_proyecto - ((cant_de_programadores - 1) * subpago);

    printf("\nSubpago por programador (int): $%f\n\n", jefe_ganancia);
    //*/

    return 0;
}
