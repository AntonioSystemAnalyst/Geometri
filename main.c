#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define Pi 3.14159265
#define PI 3.14159265
//Variaveis Globais
int idiota = 1;
//---------------------------------------------------------------------------------------Variaveis globais
// Funções Geometri//
int Quadrado (int a);
int Retangulo (int a);
int Paralelogramo (int a);
int Triangulo(int a);
int Pitagoras(int a);
int Circulo (int a);
int Setor_circular (int a);
int Anel_circular (int a);
int Trapezoide (int a);
int Cubo (int a); 
int Esfera (int a);
int Cilindro (int a);
int Caixa_retangular (int a);
int Cone_Cir_Reto (int a);
int Tronco_d_cone (int a);
//------------------------------------------------------------------------------------------Funções Geometri
int main() {
//------------------------------------------------------------------------------------------Menu Geometri
   int A;    //Switch
   int W=1, Z1, Z2, Z3, Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15;   // While
   int E, E1;  //If
   int AS=1; //Bug
   do //w
   {
    idiota = 1;
	system("cls");
	printf (" ----------------------------------------------------");
    printf ("\n GEOMETRI                                   Orpheu\n");
    printf (" ----------------------------------------------------");
    printf ("\n BIDIMENSIONAIS:              TRIDIMENSIONAIS:\n");
    printf ("\n 1.QUADRADO                   10.CUBO\n 2.RETANGULO                  11.ESFERA");
    printf ("\n 3.PARALELOGRAMO              12.CILINDRO\n 4.TRIANGULO                  13.CAIXA RETANGULAR");
    printf ("\n 5.TEOREMA DE PITAGORAS       14.CONE CIRCULO RETO\n 6.TRAPEZOIDE                 15.TRONCO DE CONE");
    printf ("\n 7.CIRCULO                    16.SAIR\n 8.SETOR CIRCULAR \n 9.ANEL CIRCULAR\n");
    printf (" ----------------------------------------------------");
    printf ("\n  Codigo: \n ----------------------------------------------------\n  > ");
    scanf ("%i", &A);
    switch (A)
     {
   	  case 1:
   	  Z1=Quadrado(AS);
      if (Z1 == 0)
      {
      	W = 0;
      }
	  break;
	  case 2:
	  Z2=Retangulo(AS);
	  if (Z2 == 0)
      {
      	W = 0;
      }
	  break;
	  case 3:
	  Z3=Paralelogramo(AS);
	  if (Z3 == 0)
      {
      	W = 0;
      }
	  break; 
	  case 4:
	  Z4=Triangulo(AS);
	  if (Z4 == 0)
      {
      	W = 0;
      }
	  break; 
	  case 5:
	  Z5=Pitagoras(AS);
	  if (Z5 == 0)
      {
      	W = 0;
      }
	  break; 
	  case 6:
	  Z6=Trapezoide(AS);
	  if (Z6 == 0)
      {
      	W = 0;
      }
      break; 
	  case 7:
	  Z7=Circulo(AS);
	  if (Z7 == 0)
      {
      	W = 0;
      } 
	  break; 	  
	  case 8:
	  Z8=Setor_circular(AS);
	  if (Z8 == 0)
      {
      	W = 0;
      }
	  break; 
	  case 9:
	  Z9=Anel_circular(AS);
	  if (Z9 == 0)
      {
      	W = 0;
      }
	  break; 
	  case 10:
	  Z10=Cubo(AS);
	  if (Z10 == 0)
      {
      	W = 0;
      }
	  break; 
	  case 11:
	  Z11=Esfera(AS);
	  if (Z11 == 0)
      {
      	W = 0;
      }
	  break; 
	 case 12:
	  Z12=Cilindro(AS);
	  if (Z12 == 0)
      {
      	W = 0;
      }
	  break; 
	 case 13:
	  Z13=Caixa_retangular(AS);
	  if (Z13 == 0)
      {
      	W = 0;
      }
	  break; 
	 case 14:
	  Z14=Cone_Cir_Reto(AS);
	  if (Z14 == 0)
      {
      	W = 0;
      }
	  break; 	   
	  case 15:
	  Z15=Tronco_d_cone(AS);
	  if (Z15 == 0)
      {
      	W = 0;
      }
	  break; 	  
	  case 16:
	  system("cls");
	  printf ("\n ----------------------------------------------------");
	  printf ("\n        Thanks for usem    ...    By Orpheu\n");
	  printf (" ----------------------------------------------------\n");
	  W=0; 
	 }	 
   }while (W==1); 
   //---------------------------------------------------------------------------------Menu Geometri

return 0;  }
  //----------------------------------------------------------------------------------Funçoes Geometri
int Quadrado (int a)
 {
 	 int W1=1, W2=1; //Swith
	 int E, E1; // If
	 float X, Y; // Variavel
	 do //W1
   	    {
   	     idiota = 1;
		 system("cls");
	     printf ("\n ----------------------------------------------------");
	     printf ("\n QUADRADO: \n");	
   	     printf (" ----------------------------------------------------\n");
	     printf ("\n Area (1) Perimetro (2) | Menu principal (3)\n\n Codigo: > ");
   	     scanf ("%i", &E);
   	     if (E == 1)
   	      {
   	  	     system("cls");
			 printf ("\n ----------------------------------------------------");
		     printf ("\n QUADRADO - Area:      < X ^ 2 >\n");
		     printf (" ----------------------------------------------------\n");
			 printf ("\n Digite o lado do quadrado: ");
   	         scanf  ("%f", &X); 
	         Y = X * X;
		     printf ("\n A Area do quadro eh: [%.2f] unidades", Y); 
	         printf ("\n\n ----------------------------------------------------");
		     do//W2
		     {
		        W2 = 1;
		        printf ("\n ----------------------------------------------------");
		        printf ("\n\n Deseja repetir ?\n\n Sim (1) Nao/Sair (2) | Menu principal (3)\n\n Codigo: > ");
		        scanf ("%i", &E1);
		        printf ("\n ----------------------------------------------------");
		        if (E1 == 1)
		         {
		  	       break;
		         } 
		        else
		         {
		  	       if (E1 == 2)
		  	        {
		  	          system("cls");
			          printf ("\n ----------------------------------------------------");
			          printf ("\n Thanks for usem !!!                        Orpheu\n");
		  	          printf (" ----------------------------------------------------");
			          printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			          system ("Pause");
	                  W2 = 0;
		  	          W1 = 0;
		  	          return 0;
			         }
		            else
		             {
		    	        if (E1 == 3)
		    	         {
		    	           W1 = 2;
		    	           break;
			             }
		                else 
		                 {
		        	       system ("Cls");
						   printf ("\n Erro! Nenhuma opcao corresponde\a\n");
		                   W2 = 1; 
						   idiota = idiota + 1; 
						   if (idiota >= 4)
						   {
						   	printf ("\n Larga de ser idiota \n");
						   }
						    if (idiota > 7)
						   {
						   	 printf ("\n Meu deus do ceu -.-' \n");
						   }
						 
						 }
			         }
		         }
		     }while (W2==1);
	  
	  
	      }
         else
	      {
	         if (E == 2)
	          {
	            system ("cls");
				printf ("\n ----------------------------------------------------");
				printf ("\n QUADRADO - Perimetro:      < X * 4 >\n");	
	            printf (" ----------------------------------------------------\n");
				printf ("\n Digite o lado do quadrado: ");
		        scanf ("%f", &X);
		        Y= X*4;
		        printf ("\n\n O Perimetro eh: [%.2f] unidades\n\n", Y);  
		        printf (" ----------------------------------------------------");
		        do
		        {
		          printf ("\n ----------------------------------------------------");
				  printf ("\n\n Deseja repetir ?\n\n Sim (1) Nao/Sair (2) | Menu principal (3)\n\n Codigo: ");
		          scanf ("%i", &E1);
		          if (E1 == 1)
		           {
		  	         break;
		           } 
		          else
		           {
		  	          if (E1 == 2)
		  	           {
		  	             system("cls");
			             printf ("\n ----------------------------------------------------");
			             printf ("\n Thanks for usem !!!                        Orpheu\n");
		  	             printf (" ----------------------------------------------------");
			             printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			             system ("Pause");
	                     W2 = 0;
		  	             W1 = 0;
		  	             return 0;
			           }
		              else
		               {
		    	         if (E1 == 3)
		    	          {
		    		        W1=2;
					        break;
				          }
		                 else 
		                  {
		        	       system ("Cls");
						   printf ("\n Erro! Nenhuma opcao corresponde\a\n");
		                   W2 = 1; 
						   idiota = idiota + 1; 
						   if (idiota >= 4)
						   {
						   	printf ("\n Larga de ser idiota \n");
						   }
						    if (idiota > 7)
						   {
						   	 printf ("\n Meu deus do ceu -.-' \n");
						   }
		                  }
			           }
		           }
		        }while (W2==1);
	          }
		     else
		      {
		        if ( E == 3)
		         {
		           break;
		         }
		        else
		         {
					printf ("\a");
		         }	
		      } 
		   } 
          }while (W1 == 1);
 }
int Retangulo (int a)
  {
  	 int W1=1, W2=1; //Swith
	 int E, E1; // If
	 float X, Y, Z; // Variavel
	 do //W1
   	  {
      idiota = 1;         	  
	  system("cls");
	  printf ("\n ----------------------------------------------------");
	  printf ("\n RETANGULO: \n");	
   	  printf (" ----------------------------------------------------\n");
	  printf ("\n Area (1) Perimetro (2) | Menu principal (3)\n\n Codigo: > ");
   	  scanf ("%i", &E);
   	  if (E == 1)
   	  {
   	  	 system ("cls");
		 printf ("\n ----------------------------------------------------");
		 printf ("\n RETANGULO - Area:  <X1  X2>\n");
		 printf (" ----------------------------------------------------\n");
		 printf ("\n Digite a altura do retangulo: ");
   	     scanf  ("%f", &X); 
	     printf ("\n Digite a largura do retangulo: ");
   	     scanf  ("%f", &Z); 
		 Y = X * Z;
		 printf ("\n A Area do Retangulo eh: [%.2f] unidades", Y); 
	     printf ("\n ----------------------------------------------------");
		 do//W2
		  {
		  W2 = 1;
		  printf ("\n ----------------------------------------------------");
		  printf ("\n\n Deseja repetir ?\n\n Sim (1) Nao/Sair (2) | Menu principal (3)\n\n Codigo: ");
		  scanf ("%i", &E1);
		  printf ("\n ----------------------------------------------------");
		  if (E1 == 1)
		  {
		  	break;
		  } 
		  else
		  {
		  	if (E1 == 2)
		  	{
		  	  system("cls");
			  printf ("\n ----------------------------------------------------");
			  printf ("\n Thanks for usem !!!                        Orpheu\n");
		  	  printf (" ----------------------------------------------------");
			  printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			  system ("Pause");
	          W2 = 0;
		  	  W1 = 0;
		  	  return 0;
			}
		    else
		    {
		    	if (E1 == 3)
		    	{
		    	   W1 = 2;
		    	   break;
				}
		        else 
		        {
		        	system ("Cls");
					printf ("\n Erro! Nenhuma opcao corresponde\a\n");
		            W2 = 1; 
					idiota = idiota + 1; 
					if (idiota >= 4)
					{
					 printf ("\n Larga de ser idiota \n");
					}
					if (idiota > 7)
					{
					  printf ("\n Meu deus do ceu -.-' \n");
				    }
		        }
			}
		  }
		 }while (W2==1);
	  
	  
	  }
      else
	  {
	     if (E == 2)
	     {
	      system ("cls");
		  printf ("\n ----------------------------------------------------");
		  printf ("\n RETANGULO - Perimetro:      <2 * X1 + 2 * X2>\n");	
	      printf (" ----------------------------------------------------\n");
		  printf ("\n Digite a altura do retangulo: ");
		  scanf ("%f", &X);
		  printf ("\n Digite a largura do retangulo: ");
		  scanf ("%f", &Z);
		  Y= (X*2)+(Z*2);
		  printf ("\n\n O Perimetro eh: [%.2f] unidades\n", Y);  
		  printf (" ----------------------------------------------------");
		  do
		  {
		   printf ("\n ----------------------------------------------------");
		  printf ("\n\n Deseja repetir ?\n\n Sim (1) Nao/Sair (2) | Menu principal (3)\n\n Codigo: ");
		  scanf ("%i", &E1);
		  if (E1 == 1)
		  {
		  	break;
		  } 
		  else
		  {
		  	if (E1 == 2)
		  	{
		  	  system("cls");
			  printf ("\n ----------------------------------------------------");
			  printf ("\n Thanks for usem !!!                        Orpheu\n");
		  	  printf (" ----------------------------------------------------");
			  printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			  system ("Pause");
	          W2 = 0;
		  	  W1 = 0;
		  	  return 0;
			}
		    else
		    {
		    	if (E1 == 3)
		    	{
		    		W1=2;
					break;
				}
		        else 
		        {
		         system ("Cls");
				 printf ("\n Erro! Nenhuma opcao corresponde\a\n");
		         W2 = 1; 
				 idiota = idiota + 1; 
				 if (idiota >= 4)
				 {
				   printf ("\n Larga de ser idiota \n");
				 }
				 if (idiota > 7)
				 {
				   printf ("\n Meu deus do ceu -.-' \n");
				 }
		        }
			}
		  }
		 }while (W2==1);
	     }
		 else
		 {
		   if ( E == 3)
		   {
		    break;
		   }
		   else
		   {
		   	printf ("\a");
		   }	
		 } 
		} 
      }while (W1 == 1);
  } 
int Paralelogramo (int a)
 {
 	 int W1=1, W2=1; //Swith
	 int E, E1; // If
	 float X, Y, Z; // Variavel
	 do //W1
   	  {
   	  system("cls");
	  printf ("\n ----------------------------------------------------");
	  printf ("\n PARALELOGRAMO: \n");	
   	  printf (" ----------------------------------------------------\n");
	  printf ("\n Area (1) Perimetro (2) | Menu principal (3)\n\n Codigo: ");
   	  scanf ("%i", &E);
   	  if (E == 1)
   	  {
   	  	 system ("cls");
		 printf ("\n ----------------------------------------------------");
		 printf ("\n PARALELOGRAMO - Area:\n");
		 printf (" ----------------------------------------------------");
		 printf ("\n\n Digite a diagonal do Paralelogramo: ");
   	     scanf  ("%f", &X); 
	     printf ("\n Digite a largura do Paralelogramo: ");
   	     scanf  ("%f", &Z); 
		 Y = X * Z;
		 printf ("\n A Area do Paralelogramo eh: [%.2f]", Y); 
	     printf ("\n ----------------------------------------------------");
		 do//W2
		  {
		  W2 = 1;
		  printf ("\n ----------------------------------------------------");
		  printf ("\n\n Deseja repetir ?\n\n Sim (1) Nao/Sair (2) | Menu principal (3)\n\n Codigo: ");
		  scanf ("%i", &E1);
		  printf ("\n ----------------------------------------------------");
		  if (E1 == 1)
		  {
		  	break;
		  } 
		  else
		  {
		  	if (E1 == 2)
		  	{
		  	  system("cls");
			  printf ("\n ----------------------------------------------------");
			  printf ("\n Thanks for usem !!!                        Orpheu\n");
		  	  printf (" ----------------------------------------------------");
			  printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			  system ("Pause");
	          W2 = 0;
		  	  W1 = 0;
		  	  return 0;
			}
		    else
		    {
		    	if (E1 == 3)
		    	{
		    	   W1 = 2;
		    	   break;
				}
		        else 
		        {
		          system ("Cls");
				  printf ("\n Erro! Nenhuma opcao corresponde\a\n");
		          W2 = 1; 
				  idiota = idiota + 1; 
				  if (idiota >= 4)
				  {
				   printf ("\n Larga de ser idiota \n");
				  }
				  if (idiota > 7)
				  {
				   printf ("\n Meu deus do ceu -.-' \n");
				  }
		         }
			}
		  }
		 }while (W2==1);
	  
	  
	  }
      else
	  {
	     if (E == 2)
	     {
	      idiota = 1;
		  system ("cls");
		  printf ("\n ----------------------------------------------------");
		  printf ("\n PARELELOGRAMO - Perimetro:\n");	
	      printf (" ----------------------------------------------------");
		  printf ("\n\n Digite a diagonal do Paralelogramo: ");
		  scanf ("%f", &X);
		  printf ("\n Digite a largura do Paralelogramo: ");
		  scanf ("%f", &Z);
		  Y= (X*2)+(Z*2);
		  printf ("\n\n O Perimetro eh: [%.2f]\n", Y);  
		  printf (" ----------------------------------------------------");
		  do
		  {
		  printf ("\n ----------------------------------------------------");
		  printf ("\n\n Deseja repetir ?\n\n Sim (1) Nao/Sair (2) | Menu principal (3)\n\n Codigo: ");
		  scanf ("%i", &E1);
		  if (E1 == 1)
		  {
		  	break;
		  } 
		  else
		  {
		  	if (E1 == 2)
		  	{
		  	  system("cls");
			  printf ("\n ----------------------------------------------------");
			  printf ("\n Thanks for usem !!!                        Orpheu\n");
		  	  printf (" ----------------------------------------------------");
			  printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			  system ("Pause");
	          W2 = 0;
		  	  W1 = 0;
		  	  return 0;
			}
		    else
		    {
		    	if (E1 == 3)
		    	{
		    		W1=2;
					break;
				}
		        else 
		        {
		          system ("Cls");
				  printf ("\n Erro! Nenhuma opcao corresponde\a\n");
		          W2 = 1; 
				  idiota = idiota + 1; 
				  if (idiota >= 4)
				  {
				   printf ("\n Larga de ser idiota \n");
				  }
				  if (idiota > 7)
				  {
				   printf ("\n Meu deus do ceu -.-' \n");
				  }
		        }
			}
		  }
		 }while (W2==1);
	     }
		 else
		 {
		   if ( E == 3)
		   {
		    break;
		   }
		   else
		   {
		   	printf ("\a");
		   }	
		 } 
		} 
      }while (W1 == 1);
 }
int Triangulo(int a)
  {
  	int W1=1, W2=1; //Swith
	 int E, E1; // If
	 float X, Y, Z; // Variavel
	 do //W1
   	  {
   	  system("cls");
	  printf ("\n ----------------------------------------------------");
	  printf ("\n TRIANGULO: \n");	
   	  printf (" ----------------------------------------------------\n");
	  printf ("\n Area (1) Perimetro (2) | Menu principal (3)\n\n Codigo: ");
   	  scanf ("%i", &E);
   	  if (E == 1)
   	  {
   	  	 idiota = 1;
		 system ("cls");
		 printf ("\n ----------------------------------------------------");
		 printf ("\n TRIANGULO - Area:\n");
		 printf (" ----------------------------------------------------");
		 printf ("\n\n Digite o lado 1 do Triangulo: ");
   	     scanf  ("%f", &X); 
	     printf ("\n Digite o lado 2 do  Triangulo: ");
   	     scanf  ("%f", &Z); 
		 Y = X * Z;
		 printf ("\n A Area do Triangulo eh: [%.2f] unidades", Y); 
	     printf ("\n ----------------------------------------------------");
		 do//W2
		  {
		  W2 = 1;
		  printf ("\n ----------------------------------------------------");
		  printf ("\n\n Deseja repetir ?\n\n Sim (1) Nao/Sair (2) | Menu principal (3)\n\n Codigo: ");
		  scanf ("%i", &E1);
		  printf ("\n ----------------------------------------------------");
		  if (E1 == 1)
		  {
		  	break;
		  } 
		  else
		  {
		  	if (E1 == 2)
		  	{
		  	  system("cls");
			  printf ("\n ----------------------------------------------------");
			  printf ("\n Thanks for usem !!!                        Orpheu\n");
		  	  printf (" ----------------------------------------------------");
			  printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			  system ("Pause");
	          W2 = 0;
		  	  W1 = 0;
		  	  return 0;
			}
		    else
		    {
		    	if (E1 == 3)
		    	{
		    	   W1 = 2;
		    	   break;
				}
		        else 
		        {
		          system ("Cls");
				  printf ("\n Erro! Nenhuma opcao corresponde\a\n");
		          W2 = 1; 
				  idiota = idiota + 1; 
				  if (idiota >= 4)
				  {
				   printf ("\n Larga de ser idiota \n");
				  }
				  if (idiota > 7)
				  {
				   printf ("\n Meu deus do ceu -.-' \n");
				  }
		        }
			}
		  }
		 }while (W2==1);
	  
	  
	  }
      else
	  {
	     if (E == 2)
	     {
	      idiota = 1;
		  system ("cls");
		  printf ("\n ----------------------------------------------------");
		  printf ("\n Perimetro:\n");	
		  printf (" ----------------------------------------------------");
	      printf ("\n\n Digite o cateto 1 do Triangulo: ");
		  scanf ("%f", &X);
		  printf ("\n Digite o cateto 2 do Triangulo: ");
		  scanf ("%f", &Z);
		  Y= (X*2)+(Z*2);
		  printf ("\n\n O Perimetro eh: [%.2f] unidades\n", Y);  
		  printf (" ----------------------------------------------------");
		  do
		  {
		  printf ("\n ----------------------------------------------------");
		  printf ("\n\n Deseja repetir ?\n\n Sim (1) Nao/Sair (2) | Menu principal (3)\n\n Codigo: ");
		  scanf ("%i", &E1);
		  if (E1 == 1)
		  {
		  	break;
		  } 
		  else
		  {
		  	if (E1 == 2)
		  	{
		  	  system("cls");
			  printf ("\n ----------------------------------------------------");
			  printf ("\n Thanks for usem !!!                        Orpheu\n");
		  	  printf (" ----------------------------------------------------");
			  printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			  system ("Pause");
	          W2 = 0;
		  	  W1 = 0;
		  	  return 0;
			}
		    else
		    {
		    	if (E1 == 3)
		    	{
		    		W1=2;
					break;
				}
		        else 
		        {
		          system ("Cls");
				  printf ("\n Erro! Nenhuma opcao corresponde\a\n");
		          W2 = 1; 
				  idiota = idiota + 1; 
				  if (idiota >= 4)
				  {
				   printf ("\n Larga de ser idiota \n");
				  }
				  if (idiota > 7)
				  {
				   printf ("\n Meu deus do ceu -.-' \n");
				  }
		        }
			}
		  }
		 }while (W2==1);
	     }
		 else
		 {
		   if ( E == 3)
		   {
		    break;
		   }
		   else
		   {
		   	printf ("\a");
		   }	
		 } 
		} 
      }while (W1 == 1);
  }
int Pitagoras (int a)
  {
  	int W1=1, W2=1; //Swith
	 int E, E1; // If
	 float X, Y, Z; // Variavel
	 do //W1
   	  {
   	  system("cls");
	  printf ("\n ----------------------------------------------------");
	  printf ("\n PITAGORAS: \n");	
   	  printf (" ----------------------------------------------------\n");
	  printf ("\n Valor a encontrar:\n");
	  printf ("\n Cateto (1) Hipotenusa (2) | Menu principal (3)\n\n Codigo: ");
   	  scanf ("%i", &E);
   	  if (E == 1)
   	  {
   	  	 idiota = 1;
   	  	 system ("cls");
		 printf ("\n ----------------------------------------------------");
		 printf ("\n PITAGORAS - Cateto:\n");
		 printf (" ----------------------------------------------------\n");
		 printf ("\n\n Digite o 1 cateto do Triangulo: ");
   	     scanf  ("%f", &X); 
	     printf ("\n Digite a Hipotenusa do  Triangulo: ");
   	     scanf  ("%f", &Z); 
		 Y = sqrt(-(X*X)+(Z*Z));
	     printf ("\n O cateto 2 eh: [%.2f]", Y); 
	     printf ("\n ----------------------------------------------------");
		 do//W2
		  {
		  W2 = 1;
		  printf ("\n ----------------------------------------------------");
		  printf ("\n\n Deseja repetir ?\n\n Sim (1) Nao/Sair (2) | Menu principal (3)\n\n Codigo: ");
		  scanf ("%i", &E1);
		  printf ("\n ----------------------------------------------------");
		  if (E1 == 1)
		  {
		  	break;
		  } 
		  else
		  {
		  	if (E1 == 2)
		  	{
		  	  system("cls");
			  printf ("\n ----------------------------------------------------");
			  printf ("\n Thanks for usem !!!                        Orpheu\n");
		  	  printf (" ----------------------------------------------------");
			  printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			  system ("Pause");
	          W2 = 0;
		  	  W1 = 0;
		  	  return 0;
			}
		    else
		    {
		    	if (E1 == 3)
		    	{
		    	   W1 = 2;
		    	   break;
				}
		        else 
		        {
		          system ("Cls");
				  printf ("\n Erro! Nenhuma opcao corresponde\a\n");
		          W2 = 1; 
				  idiota = idiota + 1; 
				  if (idiota >= 4)
				  {
				   printf ("\n Larga de ser idiota \n");
				  }
				  if (idiota > 7)
				  {
				   printf ("\n Meu deus do ceu -.-' \n");
				  }
		        }
			}
		  }
		 }while (W2==1);
	  
	  
	  }
      else
	  {
	     if (E == 2)
	     {
	      idiota = 1;
		  system ("cls");
		  printf ("\n ----------------------------------------------------");
		  printf ("\n PITAGORAS - Hipotenusa:\n");	
		  printf (" ----------------------------------------------------\n");
	      printf ("\n\n Digite o cateto 1 do Triangulo: ");
		  scanf ("%f", &X);
		  printf ("\n Digite o cateto 2 do Triangulo: ");
		  scanf ("%f", &Z);
		  Y= sqrt ((X*X)+(Z*Z));
		  printf ("\n\n A Hipotenusa eh: [%.2f]\n", Y);  
		  printf (" ----------------------------------------------------");
		  do
		  {
		  printf ("\n ----------------------------------------------------");	
		  printf ("\n\n Deseja repetir ?\n\n Sim (1) Nao/Sair (2) | Menu principal (3)\n\n Codigo: ");
		  scanf ("%i", &E1);
		  if (E1 == 1)
		  {
		  	break;
		  } 
		  else
		  {
		  	if (E1 == 2)
		  	{
		  	  system("cls");
			  printf ("\n ----------------------------------------------------");
			  printf ("\n Thanks for usem !!!                        Orpheu\n");
		  	  printf (" ----------------------------------------------------");
			  printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			  system ("Pause");
	          W2 = 0;
		  	  W1 = 0;
		  	  return 0;
			}
		    else
		    {
		    	if (E1 == 3)
		    	{
		    		W1=2;
					break;
				}
		        else 
		        {
		          system ("Cls");
				  printf ("\n Erro! Nenhuma opcao corresponde\a\n");
		          W2 = 1; 
				  idiota = idiota + 1; 
				  if (idiota >= 4)
				  {
				   printf ("\n Larga de ser idiota \n");
				  }
				  if (idiota > 7)
				  {
				   printf ("\n Meu deus do ceu -.-' \n");
				  }
		        }
			}
		  }
		 }while (W2==1);
	     }
		 else
		 {
		   if ( E == 3)
		   {
		    break;
		   }
		   else
		   {
		   	printf ("\a");
		   }	
		 } 
		} 
      }while (W1 == 1);
  }
int Circulo (int a)
  {
  	int W1=1, W2=1; //Swith
	 int E, E1; // If
	 float X, Y, Z; // Variavel
	 do //W1
   	  {
   	  system("cls");
	  printf ("\n ----------------------------------------------------");
	  printf ("\n CIRCULO: \n");	
   	  printf (" ----------------------------------------------------\n");
	  printf ("\n Valor a encontrar:\n");
	  printf ("\n Area (1) Perimetro (2) | Menu principal (3)\n\n Codigo: ");
   	  scanf ("%i", &E);
   	  if (E == 1)
   	  {
   	  	 idiota = 1;
		 system ("cls");
		 printf ("\n ----------------------------------------------------");
   	  	 printf ("\n CIRCULO - Area:\n");
		 printf (" ----------------------------------------------------\n");
		 printf ("\n Digite o raio: ");
   	     scanf  ("%f", &X); 
	     Y = ((X*X)*Pi);
		 printf ("\n A Area do Circulo eh: [%.2f]", Y); 
	     printf ("\n ----------------------------------------------------");
		 do//W2
		  {
		  W2 = 1;
		  printf ("\n ----------------------------------------------------");
		  printf ("\n\n Deseja repetir ?\n\n Sim (1) Nao/Sair (2) | Menu principal (3)\n\n Codigo: ");
		  scanf ("%i", &E1);
		  printf ("\n ----------------------------------------------------");
		  if (E1 == 1)
		  {
		  	break;
		  } 
		  else
		  {
		  	if (E1 == 2)
		  	{
		  	  system("cls");
			  printf ("\n ----------------------------------------------------");
			  printf ("\n Thanks for usem !!!                        Orpheu\n");
		  	  printf (" ----------------------------------------------------");
			  printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			  system ("Pause");
	          W2 = 0;
		  	  W1 = 0;
		  	  return 0;
			}
		    else
		    {
		    	if (E1 == 3)
		    	{
		    	   W1 = 2;
		    	   break;
				}
		        else 
		        {
		          system ("Cls");
				  printf ("\n Erro! Nenhuma opcao corresponde\a\n");
		          W2 = 1; 
				  idiota = idiota + 1; 
				  if (idiota >= 4)
				  {
				   printf ("\n Larga de ser idiota \n");
				  }
				  if (idiota > 7)
				  {
				   printf ("\n Meu deus do ceu -.-' \n");
				  }
		        }
			}
		  }
		 }while (W2==1);
	  
	  
	  }
      else
	  {
	     if (E == 2)
	     {
	      idiota = 1;
		  system ("cls");
		  printf ("\n ----------------------------------------------------");	
	      printf ("\n CIRCULO - Perimetro:\n");	
	      printf (" ----------------------------------------------------\n");
		  printf ("\n Digite o raio: ");
		  scanf ("%f", &X);
		  Y= (2*Pi*X);
		  printf ("\n\n O Perimetro eh: [%.2f]\n", Y);  
		  printf (" ----------------------------------------------------");
		  do
		  {
		  printf ("\n ----------------------------------------------------");
		  printf ("\n\n Deseja repetir ?\n\n Sim (1) Nao/Sair (2) | Menu principal (3)\n\n Codigo: ");
		  scanf ("%i", &E1);
		  if (E1 == 1)
		  {
		  	break;
		  } 
		  else
		  {
		  	if (E1 == 2)
		  	{
		  	  system("cls");
			  printf ("\n ----------------------------------------------------");
			  printf ("\n Thanks for usem !!!                        Orpheu\n");
		  	  printf (" ----------------------------------------------------");
			  printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			  system ("Pause");
	          W2 = 0;
		  	  W1 = 0;
		  	  return 0;
			}
		    else
		    {
		    	if (E1 == 3)
		    	{
		    		W1=2;
					break;
				}
		        else 
		        {
		          system ("Cls");
				  printf ("\n Erro! Nenhuma opcao corresponde\a\n");
		          W2 = 1; 
				  idiota = idiota + 1; 
				  if (idiota >= 4)
				  {
				   printf ("\n Larga de ser idiota \n");
				  }
				  if (idiota > 7)
				  {
				   printf ("\n Meu deus do ceu -.-' \n");
				  }
		        }
			}
		  }
		 }while (W2==1);
	     }
		 else
		 {
		   if ( E == 3)
		   {
		    break;
		   }
		   else
		   {
		   	printf ("\a");
		   }	
		 } 
		} 
      }while (W1 == 1);
  }
int Setor_circular (int a)
{
     int W1=1, W2=1; //Swith
	 int E, E1; // If
	 float X, Y, Z; // Variavel
	 do //W1
   	  {
   	  system("cls");
	  printf ("\n ----------------------------------------------------");
	  printf ("\n SETOR CIRCULAR: \n");	
   	  printf (" ----------------------------------------------------\n");
	  printf ("\n Area do setor (1) Comprimento do setor (2) | Menu principal (3)\n\n Codigo: ");
   	  scanf ("%i", &E);
   	  if (E == 1)
   	  {
   	  	 idiota = 1;
		 system ("cls");
		 printf ("\n ----------------------------------------------------");
   	  	 printf ("\n SETOR CIRCULAR - Area:\n");
		 printf (" ----------------------------------------------------\n");
		 printf ("\n Digite o raio do setor: ");
   	     scanf  ("%f", &X); 
	     printf ("\n Digite o angulo referente ao setor: ");
   	     scanf  ("%f", &Z); 
		 Y =  ((Pi * X) * (Z/180));
	     printf ("\n A Area do setor eh: [%.2f]", Y); 
	     printf ("\n ----------------------------------------------------");
		 do//W2
		  {
		  W2 = 1;
		  printf ("\n ----------------------------------------------------");
		  printf ("\n\n Deseja repetir ?\n\n Sim (1) Nao/Sair (2) | Menu principal (3)\n\n Codigo: ");
		  scanf ("%i", &E1);
		  printf ("\n ----------------------------------------------------");
		  if (E1 == 1)
		  {
		  	break;
		  } 
		  else
		  {
		  	if (E1 == 2)
		  	{
		  	  system("cls");
			  printf ("\n ----------------------------------------------------");
			  printf ("\n Thanks for usem !!!                        Orpheu\n");
		  	  printf (" ----------------------------------------------------");
			  printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			  system ("Pause");
	          W2 = 0;
		  	  W1 = 0;
		  	  return 0;
			}
		    else
		    {
		    	if (E1 == 3)
		    	{
		    	   W1 = 2;
		    	   break;
				}
		        else 
		        {
		          system ("Cls");
				  printf ("\n Erro! Nenhuma opcao corresponde\a\n");
		          W2 = 1; 
				  idiota = idiota + 1; 
				  if (idiota >= 4)
				  {
				   printf ("\n Larga de ser idiota \n");
				  }
				  if (idiota > 7)
				  {
				   printf ("\n Meu deus do ceu -.-' \n");
				  }
		        }
			}
		  }
		 }while (W2==1);
	  
	  
	  }
      else
	  {
	     if (E == 2)
	     {
	      idiota = 1;
		  system ("cls");	
	      printf ("\n ----------------------------------------------------");	
	      printf ("\n SETOR CIRCULAR - Comprimento:\n");	
	      printf (" ----------------------------------------------------\n");
		  printf ("\n Digite o raio do setor: ");
		  scanf ("%f", &X);
		  printf ("\n Digite o angulo referente ao setor: ");
		  scanf ("%f", &Z);
		  Y = (Pi* (pow (X,2)))*(Z/360);
		  printf ("\n\n O comprimento do setor eh: [%.2f]\n", Y);  
		  printf (" ----------------------------------------------------");
		  do
		  {
		  printf ("\n ----------------------------------------------------");	
		  printf ("\n\n Deseja repetir ?\n\n Sim (1) Nao/Sair (2) | Menu principal (3)\n\n Codigo: ");
		  scanf ("%i", &E1);
		  if (E1 == 1)
		  {
		  	break;
		  } 
		  else
		  {
		  	if (E1 == 2)
		  	{
		  	  system("cls");
			  printf ("\n ----------------------------------------------------");
			  printf ("\n Thanks for usem !!!                        Orpheu\n");
		  	  printf (" ----------------------------------------------------");
			  printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			  system ("Pause");
	          W2 = 0;
		  	  W1 = 0;
		  	  return 0;
			}
		    else
		    {
		    	if (E1 == 3)
		    	{
		    		W1=2;
					break;
				}
		        else 
		        {
		          system ("Cls");
				  printf ("\n Erro! Nenhuma opcao corresponde\a\n");
		          W2 = 1; 
				  idiota = idiota + 1; 
				  if (idiota >= 4)
				  {
				   printf ("\n Larga de ser idiota \n");
				  }
				  if (idiota > 7)
				  {
				   printf ("\n Meu deus do ceu -.-' \n");
				  }
		        }
			}
		  }
		 }while (W2==1);
	     }
		 else
		 {
		   if ( E == 3)
		   {
		    break;
		   }
		   else
		   {
		   	printf ("\a");
		   }	
		 } 
		} 
      }while (W1 == 1);
  }
int Anel_circular (int a)
  {
  	 int W1=1, W2=1; //Swith
	 int E, E1; // If
	 float X, Y, Z; // Variavel
	 do //W1
   	  {
   	  system("cls");
	  printf ("\n ----------------------------------------------------");
	  printf ("\n ANEL CIRCULAR: \n");	
   	  printf (" ----------------------------------------------------\n");
	  printf ("\n Area (1) Sair (2) | Menu principal (3)\n\n Codigo: ");
   	  scanf ("%i", &E);
   	  if (E == 1)
   	  {  
   	     idiota = 1;
   	     system ("cls");
		 printf ("\n ----------------------------------------------------"); 
   	  	 printf ("\n ANEL CIRCULAR - Area:\n");
		 printf (" ----------------------------------------------------\n");
		 printf ("\n Digite o raio maior: ");
   	     scanf  ("%f", &X); 
	     printf ("\n Digite o raio menor: ");
   	     scanf  ("%f", &Z); 
		 Y = (Pi *((pow (X,2))- (pow (Z,2))));
		 printf ("\n A Area do Setor Circular eh: [%.2f]", Y); 
	     printf ("\n ----------------------------------------------------");
		 do //W2
		  {
		  W2 = 1;
		  printf ("\n ----------------------------------------------------");
		  printf ("\n\n Deseja repetir ?\n\n Sim (1) Nao/Sair (2) | Menu principal (3)\n\n Codigo: ");
		  scanf ("%i", &E1);
		  printf ("\n ----------------------------------------------------");
		  if (E1 == 1)
		  {
		  	break;
		  } 
		  else
		  {
		  	if (E1 == 2)
		  	{
		  	  system("cls");
			  printf ("\n ----------------------------------------------------");
			  printf ("\n Thanks for usem !!!                        Orpheu\n");
		  	  printf (" ----------------------------------------------------");
			  printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			  system ("Pause");
	          W2 = 0;
		  	  W1 = 0;
		  	  return 0;
			}
		   else
		    {
		    	if (E1 == 3)
		    	{
		    	   W1 = 2;
		    	   break;
				}
		        else 
		        {
		          system ("Cls");
				  printf ("\n Erro! Nenhuma opcao corresponde\a\n");
		          W2 = 1; 
				  idiota = idiota + 1; 
				  if (idiota >= 4)
				  {
				   printf ("\n Larga de ser idiota \n");
				  }
				  if (idiota > 7)
				  {
				   printf ("\n Meu deus do ceu -.-' \n");
				  }
		        }
			}
		  }
	     }while (W2==1);
	  }
	  else
	  {
	     if (E == 2)
	     {
	     	system("cls");
			printf ("\n ----------------------------------------------------");
			printf ("\n Thanks for usem !!!                        Orpheu\n");
		  	printf (" ----------------------------------------------------");
			printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			system ("Pause");
	        W2 = 0;
		  	W1 = 0;
		  	return 0;
         }  
		    else
		  {
		    	if (E == 3)
		    	{
		    		W1=2;
				    break;
				}
		        else 
		        {
		        	printf ("\a");
		        }  	
		  }
         }
      }while (W1 == 1);
  }
int Trapezoide (int a)
  {
  	int W1=1, W2=1; //Swith
	 int E, E1; // If
	 float X, Y, Z, V, T; // Variavel
	 do //W1
   	  {
   	  system("cls");
	  printf ("\n ----------------------------------------------------");
	  printf ("\n TRAPEZOIDE: \n");	
   	  printf (" ----------------------------------------------------\n");
	  printf ("\n Area (1) Perimetro (2) | Menu principal (3)\n\n Codigo: > ");
   	  scanf ("%i", &E);
   	  if (E == 1)
   	  {
   	  	 idiota = 1;
   	  	 system ("cls");
		 printf ("\n ----------------------------------------------------");
		 printf ("\n TRAPEZOIDE - Area:\n");
		 printf (" ----------------------------------------------------\n");
		 printf ("\n Digite o comprimento maior do Trapezoide: ");
   	     scanf  ("%f", &V); 
		 printf ("\n Digite o comprimento menor do Trapezoide: ");
   	     scanf  ("%f", &T); 
		 printf ("\n Digite a altura do Trapezoide: ");
   	     scanf  ("%f", &X); 
		 Y = (X *((V+T)/2));
		 printf ("\n A Area do Trapezoide eh: [%.2f]", Y); 
	     printf ("\n ----------------------------------------------------");
		 do//W2
		  {
		  W2 = 1;
		  printf ("\n ----------------------------------------------------");
		  printf ("\n\n Deseja repetir ?\n\n Sim (1) Nao/Sair (2) | Menu principal (3)\n\n Codigo: ");
		  scanf ("%i", &E1);
		  printf ("\n ----------------------------------------------------");
		  if (E1 == 1)
		  {
		  	break;
		  } 
		  else
		  {
		  	if (E1 == 2)
		  	{
		  	  system("cls");
			  printf ("\n ----------------------------------------------------");
			  printf ("\n Thanks for usem !!!                        Orpheu\n");
		  	  printf (" ----------------------------------------------------");
			  printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			  system ("Pause");
	          W2 = 0;
		  	  W1 = 0;
		  	  return 0;
			}
		    else
		    {
		    	if (E1 == 3)
		    	{
		    	   W1 = 2;
		    	   break;
				}
		        else 
		        {
		          system ("Cls");
				  printf ("\n Erro! Nenhuma opcao corresponde\a\n");
		          W2 = 1; 
				  idiota = idiota + 1; 
				  if (idiota >= 4)
				  {
				   printf ("\n Larga de ser idiota \n");
				  }
				  if (idiota > 7)
				  {
				   printf ("\n Meu deus do ceu -.-' \n");
				  }
		        }
			}
		  }
		 }while (W2==1);
	  
	  
	  }
      else
	  {
	     if (E == 2)
	     {
	      idiota = 1;
	      system ("cls");
		  printf ("\n ----------------------------------------------------");	
	      printf ("\n TRAPEZOIDE - Perimetro:\n");	
	      printf (" ----------------------------------------------------\n");
		  printf ("\n Digite 1 diagonal do Trapezoide: ");
   	      scanf  ("%f", &X); 
	      printf ("\n Digite 2 diagonal do Trapezoide: ");
   	      scanf  ("%f", &Z); 
		  printf ("\n Digite o comprimento maior do Trapezoide: ");
   	      scanf  ("%f", &V); 
		  printf ("\n Digite o comprimento menor do Trapezoide: ");
   	      scanf  ("%f", &T);
		  Y = X + Z + V + T;
		  printf ("\n\n O Perimetro eh: [%.2f]\n", Y);  
		  printf (" ----------------------------------------------------");
		  do
		  {
		  printf ("\n ----------------------------------------------------");	
		  printf ("\n\n Deseja repetir ?\n\n Sim (1) Nao/Sair (2) | Menu principal (3)\n\n Codigo: ");
		  scanf ("%i", &E1);
		  if (E1 == 1)
		  {
		  	break;
		  } 
		  else
		  {
		  	if (E1 == 2)
		  	{
		  	  system("cls");
			  printf ("\n ----------------------------------------------------");
			  printf ("\n Thanks for usem !!!                        Orpheu\n");
		  	  printf (" ----------------------------------------------------");
			  printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			  system ("Pause");
	          W2 = 0;
		  	  W1 = 0;
		  	  return 0;
			}
		    else
		    {
		    	if (E1 == 3)
		    	{
		    		W1=2;
					break;
				}
		        else 
		        {
		          system ("Cls");
				  printf ("\n Erro! Nenhuma opcao corresponde\a\n");
		          W2 = 1; 
				  idiota = idiota + 1; 
				  if (idiota >= 4)
				  {
				   printf ("\n Larga de ser idiota \n");
				  }
				  if (idiota > 7)
				  {
				   printf ("\n Meu deus do ceu -.-' \n");
				  }
		        }
			}
		  }
		 }while (W2==1);
	     }
		 else
		 {
		   if ( E == 3)
		   {
		    break;
		   }
		   else
		   {
		   	printf ("\a");
		   }	
		 } 
		} 
      }while (W1 == 1);
  }
int Cubo (int a)
  {
  	 int W1=1, W2=1; //Swith
	 int E, E1; // If
	 float X, Y, Z; // Variavel
	 do //W1
   	  {
   	  system("cls");
	  printf ("\n ----------------------------------------------------");
	  printf ("\n CUBO: \n");	
   	  printf (" ----------------------------------------------------\n");
	  printf ("\n Area (1) Volume (2) | Menu principal (3)\n\n Codigo: ");
   	  scanf ("%i", &E);
   	  if (E == 1)
   	  {
   	  	 idiota = 1;
		 system ("cls");	
   	  	 printf ("\n ----------------------------------------------------");
   	  	 printf ("\n CUBO - Area:\n");
		 printf (" ----------------------------------------------------\n");
		 printf ("\n Digite o comprimento da aresta do cubo: ");
   	     scanf  ("%f", &X); 
	     Y = X * 6;
		 printf ("\n A Area do Cubo eh: [%.2f] unidades", Y); 
	     printf ("\n ----------------------------------------------------");
		 do//W2
		  {
		  W2 = 1;
		  printf ("\n ----------------------------------------------------");
		  printf ("\n\n Deseja repetir ?\n\n Sim (1) Nao/Sair (2) | Menu principal (3)\n\n Codigo: ");
		  scanf ("%i", &E1);
		  printf ("\n ----------------------------------------------------");
		  if (E1 == 1)
		  {
		  	break;
		  } 
		  else
		  {
		  	if (E1 == 2)
		  	{
		  	  system("cls");
			  printf ("\n ----------------------------------------------------");
			  printf ("\n Thanks for usem !!!                        Orpheu\n");
		  	  printf (" ----------------------------------------------------");
			  printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			  system ("Pause");
	          W2 = 0;
		  	  W1 = 0;
		  	  return 0;
			}
		    else
		    {
		    	if (E1 == 3)
		    	{
		    	   W1 = 2;
		    	   break;
				}
		        else 
		        {
		          system ("Cls");
				  printf ("\n Erro! Nenhuma opcao corresponde\a\n");
		          W2 = 1; 
				  idiota = idiota + 1; 
				  if (idiota >= 4)
				  {
				   printf ("\n Larga de ser idiota \n");
				  }
				  if (idiota > 7)
				  {
				   printf ("\n Meu deus do ceu -.-' \n");
				  }
		        }
			}
		  }
		 }while (W2==1);
	  
	  
	  }
      else
	  {
	     if (E == 2)
	     {
	      idiota = 1;
		  system ("cls");	
	      printf ("\n ----------------------------------------------------");  	
	      printf ("\n CUBO - Volume:\n");	
	      printf (" ----------------------------------------------------\n");
		  printf ("\n Digite o comprimento de uma aresta do cubo: ");
		  scanf ("%f", &X);
		  Y= pow (X,3);
		  printf (" ----------------------------------------------------");
		  printf ("\n\n O Volume eh: [%.2f]\n", Y);  
		  printf (" ----------------------------------------------------");
		  do
		  {
		  printf ("\n ----------------------------------------------------");
		  printf ("\n\n Deseja repetir ?\n\n Sim (1) Nao/Sair (2) | Menu principal (3)\n\n Codigo: ");
		  scanf ("%i", &E1);
		  if (E1 == 1)
		  {
		  	break;
		  } 
		  else
		  {
		  	if (E1 == 2)
		  	{
		  	  system("cls");
			  printf ("\n ----------------------------------------------------");
			  printf ("\n Thanks for usem !!!                        Orpheu\n");
		  	  printf (" ----------------------------------------------------");
			  printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			  system ("Pause");
	          W2 = 0;
		  	  W1 = 0;
		  	  return 0;
			}
		    else
		    {
		    	if (E1 == 3)
		    	{
		    		W1=2;
					break;
				}
		        else 
		        {
		          system ("Cls");
				  printf ("\n Erro! Nenhuma opcao corresponde\a\n");
		          W2 = 1; 
				  idiota = idiota + 1; 
				  if (idiota >= 4)
				  {
				   printf ("\n Larga de ser idiota \n");
				  }
				  if (idiota > 7)
				  {
				   printf ("\n Meu deus do ceu -.-' \n");
				  }
		        }
			}
		  }
		 }while (W2==1);
	     }
		 else
		 {
		   if ( E == 3)
		   {
		    break;
		   }
		   else
		   {
		   	printf ("\a");
		   }	
		 } 
		} 
      }while (W1 == 1);
}
int Esfera (int a)
{
	 int W1=1, W2=1; //Swith
	 int E, E1; // If
	 float X, Y, Z; // Variavel
	 do //W1
   	  {
   	  system("cls");
	  printf ("\n ----------------------------------------------------");
	  printf ("\n ESFERA: \n");	
   	  printf (" ----------------------------------------------------\n");
	  printf ("\n Area (1) Volume (2) | Menu principal (3)\n\n Codigo: ");
   	  scanf ("%i", &E);
   	  if (E == 1)
   	  {
   	  	 idiota = 1;
   	  	 system ("cls");
		 printf ("\n ----------------------------------------------------");
   	  	 printf ("\n ESFERA - Area:\n");
   	  	 printf (" ----------------------------------------------------\n");
		 printf ("\n Digite o raio da Esfera: ");
   	     scanf  ("%f", &X); 
	     Y = 4 * PI * pow(X,2);
		 printf ("\n A Area do Esfera eh: [%.2f]", Y); 
	     printf ("\n ----------------------------------------------------");
		 do//W2
		  {
		  W2 = 1;
		  printf ("\n ----------------------------------------------------");
		  printf ("\n\n Deseja repetir ?\n\n Sim (1) Nao/Sair (2) | Menu principal (3)\n\n Codigo: ");
		  scanf ("%i", &E1);
		  printf ("\n ----------------------------------------------------");
		  if (E1 == 1)
		  {
		  	break;
		  } 
		  else
		  {
		  	if (E1 == 2)
		  	{
		  	  system("cls");
			  printf ("\n ----------------------------------------------------");
			  printf ("\n Thanks for usem !!!                        Orpheu\n");
		  	  printf (" ----------------------------------------------------");
			  printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			  system ("Pause");
	          W2 = 0;
		  	  W1 = 0;
		  	  return 0;
			}
		    else
		    {
		    	if (E1 == 3)
		    	{
		    	   W1 = 2;
		    	   break;
				}
		        else 
		        {
		         system ("Cls");
				  printf ("\n Erro! Nenhuma opcao corresponde\a\n");
		          W2 = 1; 
				  idiota = idiota + 1; 
				  if (idiota >= 4)
				  {
				   printf ("\n Larga de ser idiota \n");
				  }
				  if (idiota > 7)
				  {
				   printf ("\n Meu deus do ceu -.-' \n");
				  }
		        }
			}
		  }
		 }while (W2==1);
	  
	  
	  }
      else
	  {
	     if (E == 2)
	     {
	      idiota = 1;
   	  	  system ("cls");	
	      printf ("\n ----------------------------------------------------");	
	      printf ("\n ESFERA - Volume:\n");
		  printf (" ----------------------------------------------------\n");	
	      printf ("\n Digite o raio da Esfera: ");
		  scanf ("%f", &X);
		  Y= 4 * Pi * (pow (X,3)/3);
		  printf ("\n\n O Volume eh: [%.2f]\n", Y);  
		  printf (" ----------------------------------------------------");
		  do
		  {
		  printf ("\n ----------------------------------------------------");	
		  printf ("\n\n Deseja repetir ?\n\n Sim (1) Nao/Sair (2) | Menu principal (3)\n\n Codigo: ");
		  scanf ("%i", &E1);
		  if (E1 == 1)
		  {
		  	break;
		  } 
		  else
		  {
		  	if (E1 == 2)
		  	{
		  	  system("cls");
			  printf ("\n ----------------------------------------------------");
			  printf ("\n Thanks for usem !!!                        Orpheu\n");
		  	  printf (" ----------------------------------------------------");
			  printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			  system ("Pause");
	          W2 = 0;
		  	  W1 = 0;
		  	  return 0;
			}
		    else
		    {
		    	if (E1 == 3)
		    	{
		    		W1=2;
					break;
				}
		        else 
		        {
		          system ("Cls");
				  printf ("\n Erro! Nenhuma opcao corresponde\a\n");
		          W2 = 1; 
				  idiota = idiota + 1; 
				  if (idiota >= 4)
				  {
				   printf ("\n Larga de ser idiota \n");
				  }
				  if (idiota > 7)
				  {
				   printf ("\n Meu deus do ceu -.-' \n");
				  }
		        }
			}
		  }
		 }while (W2==1);
	     }
		 else
		 {
		   if ( E == 3)
		   {
		    break;
		   }
		   else
		   {
		   	printf ("\a");
		   }	
		 } 
		} 
      }while (W1 == 1);
  }
int Cilindro (int a)
{
	 int W1=1, W2=1; //Swith
	 int E, E1; // If
	 float X, Y, Z; // Variavel
	 do //W1
   	  {
   	  system("cls");
	  printf ("\n ----------------------------------------------------");
	  printf ("\n CILINDRO: \n");	
   	  printf (" ----------------------------------------------------\n");
	  printf ("\n Area (1) Volume (2) | Menu principal (3)\n\n Codigo: ");
   	  scanf ("%i", &E);
   	  if (E == 1)
   	  {
         idiota = 1;
		 system ("cls");    	  	
   	  	 printf ("\n ----------------------------------------------------");
   	  	 printf ("\n CILINDRO - Area:\n");
   	  	 printf (" ----------------------------------------------------\n");
		 printf ("\n Digite a altura do Cilindro: ");
   	     scanf  ("%f", &X); 
	     printf ("\n Digite o raio da base do Cilindro: ");
   	     scanf  ("%f", &Z); 
		 Y = 2 * Pi * Z * (Z+X);
		 printf ("\n A Area do Triangulo eh: [%.2f]", Y); 
	     printf ("\n ----------------------------------------------------");
		 do//W2
		  {
		  W2 = 1;
		  printf ("\n ----------------------------------------------------");
		  printf ("\n\n Deseja repetir ?\n\n Sim (1) Nao/Sair (2) | Menu principal (3)\n\n Codigo: ");
		  scanf ("%i", &E1);
		  printf ("\n ----------------------------------------------------");
		  if (E1 == 1)
		  {
		  	break;
		  } 
		  else
		  {
		  	if (E1 == 2)
		  	{
		  	  system("cls");
			  printf ("\n ----------------------------------------------------");
			  printf ("\n Thanks for usem !!!                        Orpheu\n");
		  	  printf (" ----------------------------------------------------");
			  printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			  system ("Pause");
	          W2 = 0;
		  	  W1 = 0;
		  	  return 0;
			}
		    else
		    {
		    	if (E1 == 3)
		    	{
		    	   W1 = 2;
		    	   break;
				}
		        else 
		        {
		          system ("Cls");
				  printf ("\n Erro! Nenhuma opcao corresponde\a\n");
		          W2 = 1; 
				  idiota = idiota + 1; 
				  if (idiota >= 4)
				  {
				   printf ("\n Larga de ser idiota \n");
				  }
				  if (idiota > 7)
				  {
				   printf ("\n Meu deus do ceu -.-' \n");
				  }
		        }
			}
		  }
		 }while (W2==1);
	  
	  
	  }
      else
	  {
	     if (E == 2)
	     {
	      idiota = 1;
		  system ("cls");    
		  printf ("\n ----------------------------------------------------");
		  printf ("\n CILINDRO - Volume:\n");	
	      printf (" ----------------------------------------------------\n");
		  printf ("\n Digite a altura do Cilindro: ");
		  scanf ("%f", &X);
		  printf ("\n Digite o raio do Cilindro: ");
		  scanf ("%f", &Z);
		  Y = Pi*(pow(Z,2)*X);
		  printf ("\n\n O Volume eh: [%.2f] unidades\n", Y);  
		  printf (" ----------------------------------------------------");
		  do
		  {
		  printf ("\n ----------------------------------------------------");
		  printf ("\n\n Deseja repetir ?\n\n Sim (1) Nao/Sair (2) | Menu principal (3)\n\n Codigo: ");
		  scanf ("%i", &E1);
		  if (E1 == 1)
		  {
		  	break;
		  } 
		  else
		  {
		  	if (E1 == 2)
		  	{
		  	  system("cls");
			  printf ("\n ----------------------------------------------------");
			  printf ("\n Thanks for usem !!!                        Orpheu\n");
		  	  printf (" ----------------------------------------------------");
			  printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			  system ("Pause");
	          W2 = 0;
		  	  W1 = 0;
		  	  return 0;
			}
		    else
		    {
		    	if (E1 == 3)
		    	{
		    		W1=2;
					break;
				}
		        else 
		        {
		          system ("Cls");
				  printf ("\n Erro! Nenhuma opcao corresponde\a\n");
		          W2 = 1; 
				  idiota = idiota + 1; 
				  if (idiota >= 4)
				  {
				   printf ("\n Larga de ser idiota \n");
				  }
				  if (idiota > 7)
				  {
				   printf ("\n Meu deus do ceu -.-' \n");
				  }
		        }
			}
		  }
		 }while (W2==1);
	     }
		 else
		 {
		   if ( E == 3)
		   {
		    break;
		   }
		   else
		   {
		   	printf ("\a");
		   }	
		 } 
		} 
      }while (W1 == 1);
} 
int Caixa_retangular (int a)
{
	int W1=1, W2=1; //Swith
	 int E, E1; // If
	 float X, Y, Z, V; // Variavel
	 do //W1
   	  {
   	  system("cls");
	  printf ("\n ----------------------------------------------------");
	  printf ("\n CAIXA RETANGULAR: \n");	
   	  printf (" ----------------------------------------------------\n");
	  printf ("\n Area (1) Volume (2) | Menu principal (3)\n\n Codigo: ");
   	  scanf ("%i", &E);
   	  if (E == 1)
   	  { 
   	     idiota = 1;
   	     system ("cls");
		 printf ("\n ----------------------------------------------------");
   	  	 printf ("\n CAIXA RETANGULAR - Area:\n");
   	  	 printf (" ----------------------------------------------------\n");
		 printf ("\n Digite a altura da caixa: ");
   	     scanf  ("%f", &X); 
	     printf ("\n Digite a largura da caixa: ");
   	     scanf  ("%f", &Z); 
	     printf ("\n Digite o comprimento da caixa: ");
   	     scanf  ("%f", &V); 
	     Y = 2*X*V+2*X*Z+2*Z*V;
		 printf ("\n A Area da Caixa Retangular eh: [%.2f] unidades", Y); 
	     printf ("\n ----------------------------------------------------");
		 do//W2
		  {
		  W2 = 1;
		  printf ("\n ----------------------------------------------------");
		  printf ("\n\n Deseja repetir ?\n\n Sim (1) Nao/Sair (2) | Menu principal (3)\n\n Codigo: ");
		  scanf ("%i", &E1);
		  printf ("\n ----------------------------------------------------");
		  if (E1 == 1)
		  {
		  	break;
		  } 
		  else
		  {
		  	if (E1 == 2)
		  	{
		  	  system("cls");
			  printf ("\n ----------------------------------------------------");
			  printf ("\n Thanks for usem !!!                        Orpheu\n");
		  	  printf (" ----------------------------------------------------");
			  printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			  system ("Pause");
	          W2 = 0;
		  	  W1 = 0;
		  	  return 0;
			}
		    else
		    {
		    	if (E1 == 3)
		    	{
		    	   W1 = 2;
		    	   break;
				}
		        else 
		        {
		          system ("Cls");
				  printf ("\n Erro! Nenhuma opcao corresponde\a\n");
		          W2 = 1; 
				  idiota = idiota + 1; 
				  if (idiota >= 4)
				  {
				   printf ("\n Larga de ser idiota \n");
				  }
				  if (idiota > 7)
				  {
				   printf ("\n Meu deus do ceu -.-' \n");
				  }
		        }
			}
		  }
		 }while (W2==1);
	  
	  
	  }
      else
	  {
	     if (E == 2)
	     {
	      idiota = 1;
   	      system ("cls");
   	      printf ("\n ----------------------------------------------------");
		  printf ("\n CAIXA RETANGULAR - Volume:\n");	
	      printf (" ----------------------------------------------------\n");
		  printf ("\n Digite a altura da caixa: ");
   	      scanf  ("%f", &X); 
	      printf ("\n Digite a largura da caixa: ");
   	      scanf  ("%f", &Z); 
	      printf ("\n Digite o comprimento da caixa: ");
   	      scanf  ("%f", &V); 
		  Y= X*Z*V;
		  printf ("\n\n O Volume eh: [%.2f] unidades\n", Y);  
		  printf (" ----------------------------------------------------");
		  do
		  {
		   printf ("\n ----------------------------------------------------");
		  printf ("\n\n Deseja repetir ?\n\n Sim (1) Nao/Sair (2) | Menu principal (3)\n\n Codigo: ");
		  scanf ("%i", &E1);
		  if (E1 == 1)
		  {
		  	break;
		  } 
		  else
		  {
		  	if (E1 == 2)
		  	{
		  	  system("cls");
			  printf ("\n ----------------------------------------------------");
			  printf ("\n Thanks for usem !!!                        Orpheu\n");
		  	  printf (" ----------------------------------------------------");
			  printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			  system ("Pause");
	          W2 = 0;
		  	  W1 = 0;
		  	  return 0;
			}
		    else
		    {
		    	if (E1 == 3)
		    	{
		    		W1=2;
					break;
				}
		        else 
		        {
		          system ("Cls");
				  printf ("\n Erro! Nenhuma opcao corresponde\a\n");
		          W2 = 1; 
				  idiota = idiota + 1; 
				  if (idiota >= 4)
				  {
				   printf ("\n Larga de ser idiota \n");
				  }
				  if (idiota > 7)
				  {
				   printf ("\n Meu deus do ceu -.-' \n");
				  }
		        }
			}
		  }
		 }while (W2==1);
	     }
		 else
		 {
		   if ( E == 3)
		   {
		    break;
		   }
		   else
		   {
		   	printf ("\a");
		   }	
		 } 
		} 
      }while (W1 == 1);
}
int Cone_Cir_Reto (int a)
{
	int W1=1, W2=1; //Swith
	 int E, E1; // If
	 float X, Y, Z; // Variavel
	 do //W1
   	  {
   	  system("cls");
	  printf ("\n ----------------------------------------------------");
	  printf ("\n CONE CIRCULAR RETO: \n");	
   	  printf (" ----------------------------------------------------\n");
	  printf ("\n Area (1) Volume (2) Comprimento Diagonal (3)\n\n Menu principal (4)\n\n Codigo: ");
   	  scanf ("%i", &E);
   	  if (E == 1)
   	  {
   	  	 idiota = 1;
   	  	 system ("cls");
   	  	 printf ("\n ----------------------------------------------------");
   	  	 printf ("\n CONE CIRCULAR RETO - Area:\n");
   	  	 printf (" ----------------------------------------------------\n");
		 printf ("\n Digite o raio do Cone:");
   	     scanf  ("%f", &X); 
	     printf ("\n Digite o comprimento diagonal do Cone: ");
   	     scanf  ("%f", &Z); 
		 Y = Pi * (pow(X,2))*Pi*X*Z;
	     printf ("\n A Area do Cone eh: [%.2f]", Y); 
	     printf ("\n ----------------------------------------------------");
		 do//W2
		  {
		  W2 = 1;
		  printf ("\n ----------------------------------------------------");
		  printf ("\n\n Deseja repetir ?\n\n Sim (1) Nao/Sair (2) | Menu principal (3)\n\n Codigo: ");
		  scanf ("%i", &E1);
		  printf ("\n ----------------------------------------------------");
		  if (E1 == 1)
		  {
		  	break;
		  } 
		  else
		  {
		  	if (E1 == 2)
		  	{
		  	  system("cls");
			  printf ("\n ----------------------------------------------------");
			  printf ("\n Thanks for usem !!!                        Orpheu\n");
		  	  printf (" ----------------------------------------------------");
			  printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			  system ("Pause");
	          W2 = 0;
		  	  W1 = 0;
		  	  return 0;
			}
		    else
		    {
		    	if (E1 == 3)
		    	{
		    	   W1 = 2;
		    	   break;
				}
		        else 
		        {
		          system ("Cls");
				  printf ("\n Erro! Nenhuma opcao corresponde\a\n");
		          W2 = 1; 
				  idiota = idiota + 1; 
				  if (idiota >= 4)
				  {
				   printf ("\n Larga de ser idiota \n");
				  }
				  if (idiota > 7)
				  {
				   printf ("\n Meu deus do ceu -.-' \n");
				  }
		        }
			}
		  }
		 }while (W2==1);
	  
	  
	  }
      else
	  {
	     if (E == 2)
	     {
	      idiota = 1;
   	  	  system ("cls");	
	      printf ("\n ----------------------------------------------------");	
	      printf ("\n CONE CIRCULAR RETO - Volume:\n");	
	      printf (" ----------------------------------------------------\n");
	      printf ("\n Digite o raio do Cone: ");
		  scanf ("%f", &X);
		  printf ("\n Digite a altura do Cone: ");
		  scanf ("%f", &Z);
		  Y = (((1/3)*Pi)*(pow(X,2))*Z);
		  printf ("\n\n O Volume eh eh: [%.2f]\n", Y);  
		  printf (" ----------------------------------------------------");
		  do
		  {
		  printf ("\n ----------------------------------------------------");	
		  printf ("\n\n Deseja repetir ?\n\n Sim (1) Nao/Sair (2) | Menu principal (3)\n\n Codigo: ");
		  scanf ("%i", &E1);
		  if (E1 == 1)
		  {
		  	break;
		  } 
		  else
		  {
		  	if (E1 == 2)
		  	{
		  	  system("cls");
			  printf ("\n ----------------------------------------------------");
			  printf ("\n Thanks for usem !!!                        Orpheu\n");
		  	  printf (" ----------------------------------------------------");
			  printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			  system ("Pause");
	          W2 = 0;
		  	  W1 = 0;
		  	  return 0;
			}
		    else
		    {
		    	if (E1 == 3)
		    	{
		    		W1=2;
					break;
				}
		        else 
		        {
		          system ("Cls");
				  printf ("\n Erro! Nenhuma opcao corresponde\a\n");
		          W2 = 1; 
				  idiota = idiota + 1; 
				  if (idiota >= 4)
				  {
				   printf ("\n Larga de ser idiota \n");
				  }
				  if (idiota > 7)
				  {
				   printf ("\n Meu deus do ceu -.-' \n");
				  }
		        }
			}
		  }
		 }while (W2==1);
	     }
		 else
		 {
		   if (E == 3)
	     {
	      idiota = 1;
   	  	  system ("cls");	
	      printf ("\n ----------------------------------------------------"); 	
	      printf ("\n CONE CIRCULAR RETO - Comprimento Diagonal:\n");
		  printf (" ----------------------------------------------------\n");	
	      printf ("\n Digite o raio do cone: ");
		  scanf ("%f", &X);
		  printf ("\n Digite a altura do Cone: ");
		  scanf ("%f", &Z);
		  Y = sqrt (pow(X,2)+pow(Z,2));
		  printf ("\n\n O Perimetro eh: [%.2f] unidades\n", Y);  
		  printf (" ----------------------------------------------------");
		  do
		  {
		  printf ("\n ----------------------------------------------------");	
		  printf ("\n\n Deseja repetir ?\n\n Sim (1) Nao/Sair (2) | Menu principal (3)\n\n Codigo: ");
		  scanf ("%i", &E1);
		  if (E1 == 1)
		  {
		  	break;
		  } 
		  else
		  {
		  	if (E1 == 2)
		  	{
		  	  system("cls");
			  printf ("\n ----------------------------------------------------");
			  printf ("\n Thanks for usem !!!                        Orpheu\n");
		  	  printf (" ----------------------------------------------------");
			  printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			  system ("Pause");
	          W2 = 0;
		  	  W1 = 0;
		  	  return 0;
			}
		    else
		    {
		    	if (E1 == 3)
		    	{
		    		W1=2;
					break;
				}
		        else 
		        {
		          system ("Cls");
				  printf ("\n Erro! Nenhuma opcao corresponde\a\n");
		          W2 = 1; 
				  idiota = idiota + 1; 
				  if (idiota >= 4)
				  {
				   printf ("\n Larga de ser idiota \n");
				  }
				  if (idiota > 7)
				  {
				   printf ("\n Meu deus do ceu -.-' \n");
				  }
		        }
			}
		  }
		 }while (W2==1);
	     }
		   else
		   {
		   	 if (E == 4)
		   	 {
		   	 	break;
		   	 }
		     else
		     {
		       printf ("\a");
		     }
		   }	
		 } 
		} 
      }while (W1 == 1);
}
int Tronco_d_cone (int a)
{
	 int W1=1, W2=1; //Swith
	 int E, E1; // If
	 float X, Y, Z, V; // Variavel
	 do //W1
   	  {
   	  system("cls");
	  printf ("\n ----------------------------------------------------");
	  printf ("\n TRONCO DE CONE: \n");	
   	  printf (" ----------------------------------------------------\n");
	  printf ("\n Volume (1) Sair (2) | Menu principal (3)\n\n Codigo: ");
   	  scanf ("%i", &E);
   	  if (E == 1)
   	  {
   	  	 idiota = 1;
   	  	 system ("cls");
		 printf ("\n ----------------------------------------------------");
		 printf ("\n TRONCO DE CONE - Volume:\n");
		 printf (" ----------------------------------------------------\n");
		 printf ("\n Digite o raio maior: ");
   	     scanf  ("%f", &X); 
	     printf ("\n Digite o raio menor: ");
   	     scanf  ("%f", &Z); 
		 printf ("\n Digite a altura do cone: ");
   	     scanf  ("%f", &V); 
		 Y = ((1/3)*Pi*V*(pow(Z,2)+(X*Z)+pow(X,2)));
		 printf ("\n O volume do tronco de cone eh: [%.2f]", Y); 
	     printf ("\n ----------------------------------------------------");
		 do //W2
		  {
		  W2 = 1;
		  printf ("\n ----------------------------------------------------");
		  printf ("\n\n Deseja repetir ?\n\n Sim (1) Nao/Sair (2) | Menu principal (3)\n\n Codigo: ");
		  scanf ("%i", &E1);
		  printf ("\n ----------------------------------------------------");
		  if (E1 == 1)
		  {
		  	break;
		  } 
		  else
		  {
		  	if (E1 == 2)
		  	{
		  	  system("cls");
			  printf ("\n ----------------------------------------------------");
			  printf ("\n Thanks for usem !!!                        Orpheu\n");
		  	  printf (" ----------------------------------------------------");
			  printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			  system ("Pause");
	          W2 = 0;
		  	  W1 = 0;
		  	  return 0;
			}
		   else
		    {
		    	if (E1 == 3)
		    	{
		    	   W1 = 2;
		    	   break;
				}
		        else 
		        {
		          system ("Cls");
				  printf ("\n Erro! Nenhuma opcao corresponde\a\n");
		          W2 = 1; 
				  idiota = idiota + 1; 
				  if (idiota >= 4)
				  {
				   printf ("\n Larga de ser idiota \n");
				  }
				  if (idiota > 7)
				  {
				   printf ("\n Meu deus do ceu -.-' \n");
				  }
		        	
		        }
			}
		  }
	     }while (W2==1);
	  }
	  else
	  {
	     if (E == 2)
	     {
	          system("cls");
			  printf ("\n ----------------------------------------------------");
			  printf ("\n Thanks for usem !!!                        Orpheu\n");
		  	  printf (" ----------------------------------------------------");
			  printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			  system ("Pause");
	          W2 = 0;
		  	  W1 = 0;
		  	  return 0;
         } 
		 else
		  {
		    	if (E == 3)
		    	{
		    		W1=2;
				    break;
				}
		        else 
		        {
		        	printf ("\a");
		        }  	
		  }
	  } 
      }while (W1 == 1);
}
//----------------------------------------------------------------------------------Funçoes Geometri
