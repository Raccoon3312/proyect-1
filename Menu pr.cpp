#include <iostream>
#include <math.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
	int main()
	{
		int O,S1,S2,S,A,C,Ca,SC,OS,SM1,SM2;
		float D,P;
		srand(time(NULL));
			do
			{
				SC=0;
				C=0;
				system("cls");
						printf("\t\tBienvenido usuario, elige una opcion\n");
						printf("\n1.- Suma\n");
						printf("\n2.- Resta\n");
						printf("\n3.- Multiplicacion\n");
						printf("\n4.- Division\n");
						printf("\n5.- Potencia\n");
						printf("\n6.- Raiz\n");
						printf("\n7.- Promedio de alumnos\n");
						printf("\n8.- Promedio de tiempo\n");
						printf("\n9.-Salir\n");
						printf("\nopcion elegida:");
						scanf("%i",&O);
						switch(O)
							{
									case 1 :
									system("cls");
									printf("\t Suma");	
									do
									{
										do
										{
											system("cls");
											printf("\n\tSuma\n ");
											printf("\nElija si quiere un numero aleatorio o usted ingresar un numero\n");
											printf("\n1.-Poner los numeros");
											printf("\n2.-Numeros aleatorios");
											printf("\n3.-Volver");
											printf("\nOpcion elegida: ");
											scanf("%i",&OS);
										}
										while(OS>4);
									}
									while(OS<0);
								
									switch(OS)
										{
											case 1: 
											printf("\n\nElija el primer numero: ");
											scanf("%i",&SM1);
											printf("\nElija el segundo numero: ");
											scanf("%i",&SM2);
											S=SM1+SM2;
											printf("La suma de estos 2 es: %i",S);
											system ("pause");
											break;
									
											case 2:
											S1=rand()%(10);
											S2=rand()%(10);
											printf("\nEl primer numero es: %i",S1);
											printf("\nEl segundo numero es: %i",S2);
											S=S1+S2;
											printf("\nel resultado es: %i\n",S);
											system("pause");	
											break;
											
											default:
											break;
										}
									break;
									
									
									case 2 :
									system("cls");
									printf("\t Resta");
									S1=rand()%(10);
									S2=rand()%(10);
									printf("\nEl primer numero es: %i",S1);
									printf("\nEl segundo numero es: %i",S2);
									S=S1-S2;
									printf("\nel resultado es: %i\n",S);
									system("pause");	
									break;
									
									case 3 :
									system("cls");
									printf("\t Multiplicacion");
									S1=rand()%(10);
									S2=rand()%(10);
									printf("\nEl primer numero es: %i",S1);
									printf("\nEl segundo numero es: %i",S2);
									S=S1*S2;
									printf("\nel resultado es: %i\n",S);
									system("pause");	
									break;
									
									case 4 :
									system("cls");
									printf("\t division");
									S1=rand()%(10);
									S2=rand()%(10);
									printf("\nEl primer numero es: %i",S1);
									printf("\nEl segundo numero es: %i",S2);
									if (S2!=0)
										{
											D=(float)S1/S2;
											printf("\nel resultado es: %.2f\n",D);
											
										}
									else
										{
											printf("\nEsta division no es posible\n");
										}
									system("pause");	
									break;
									
									case 5 :
									system("cls");
									printf("\t Potencia");
									S1=rand()%(10);
									S2=rand()%(10);
									printf("\nEl primer numero es: %i",S1);
									printf("\nEl segundo numero es: %i",S2);
									S=pow(S1,S2);
									printf("\nel resultado es: %i\n",S);
									system("pause");	
									break;
									
									case 6 :
									system("cls");
									printf("\t Raiz Cuadrada");
									S1=rand()%(10);
									printf("\nTu dijito es: %i\n",S1);
									if (S2>=0)
										{
											D=(float)sqrt(S1);
											printf("\nel resultado es: %.2f\n",D);
											
										}
									else
										{
											printf("\nEsta raiz no es posible\n");
										}
									system("pause");	
									break;
									
									case 7 :
										system ("cls");
										printf("\tPromedio de alumnos\n");
										printf("\nDigite el numero de alumnos que tiene su grupo: ");
										scanf("%i",&A);
										do
											{
												C=C+1;
												Ca=rand()%(10);
												printf("\nEl alumno %i tiene una calificacion de %i\n",C,Ca);
												if(Ca>6)
													{
														printf("\nel alumno esta aprobado\n");
													}
												else
												{
													printf("\nel alumno esta reprobado\n\n");
												}
												SC=SC+Ca;
											}
										while(C!=A);
										P=(float)SC/A;
										printf("El promedio del grupo es: %.2f",P);
										if(Ca>6)
													{
														printf("\nel grupo esta aprobado\n");
													}
												else
													{
														printf("\nel grupo esta reprobado\n\n");
													}
										system("pause");
										break;
										
										case 8 :
										system ("cls");
										printf("\tPromedio de tiempo\n");
										S1=30+rand()%(2);
										printf("\nLos dias de este mes fueron %i\n",S1);
										do
											{
												C=C+1;
												Ca=30+rand()%(16);
												printf("\nEl dia %i tiene una temperatura: de %i\n",C,Ca);
												SC=SC+Ca;
											}
										while(C!=S1);
										P=(float)SC/S1;
										printf("\nEl promedio de temperatura es: %.2f\n",P);
										if(Ca<36)
													{
														printf("\nla temperatura estuvo en un promedio de 30 a 35\n");
													}
												else
													{
														if(Ca<41)
														{
															printf("\nla temperatura estuvo en un promedio de 36 a 40\n");
														}
														else
														{
															printf("\nla temperatura estuvo en un promedio de 41 a 45\n");
														}
													}
										printf("");
										system("pause");
										break;
										
										case 9:
										break;
										
										default:
											{
												system("cls");
												printf("\n\tElija una opcion Valida\n\n");
												system("pause");
											}
										break;
									
							}
			}
			while(O!=9);
			system("cls");
			printf("\n\t Hata luego :)\n");
	return 0;
	}
