#include <stdlib.h>
#include <stdio.h>
#define pi 3.14159265359
float circulo (float diametro) { return pi * (diametro / 2) * (diametro / 2); }
float losangulo (float D1, float D2) { return (D1 * D2) / 2; }
float paralelogramo (float base, float altura) { return base * altura; }
float trapezio (float B, float base, float altura) { return ((B + base) / 2) * altura; }
float tri_equi(float A, float B, float C) { return ((A*A) / 4) * 1.732050808; }
float tri(float A, float B, float C) { return (B * A) / 2; }
float esf (float diametro) { return ((4 * pi) / 3) * (diametro /2) *  (diametro /2) *  (diametro /2); }
float cone (float diametro, float altura) { return (pi / 3) * (diametro / 2) * (diametro / 2) * altura; }
float cilindro(float diametro, float altura) { return pi * (diametro / 2) * (diametro / 2) * altura; }
float paralelepipedo(float comprimento, float largura, float altura) { return comprimento * largura * altura; }
float m_j(float num) { return num * 1.09361; }
float j_m(float num) { return num / 1.09361; }
float cmcub_polcub(float num) { return num / 16.387064; }
float polcub_cmcub(float num) { return num * 16.387064; }
float litros_galoes(float num) { return num * 0.2642; }
float galoes_litros(float num) { return num / 0.2642; }
float kilo_libras(float num) { return num * 2.20462262; }
float libras_kilo(float num) { return num / 2.20462262; }
float quadrado(float q1) { return q1*q1 ;}
void linha(int num, char ch) { int i; for (i = 0; i < num; i++) putchar (ch); }
void limparBufferEntrada() { int c; while ((c = getchar()) != '\n' && c != EOF); }
void desenho_triangulo_equi () { int i, espaco, meio, altura = 6;
    for (i = 0; i < altura; i++) { for (espaco = 0; espaco < altura -i; espaco++) { printf(" "); }
            printf("/");
        for (meio = 0; meio < 2 * i; meio++) { if (i == altura - 1) { printf("_"); } else { printf(" "); }}
                printf("\\\n"); }}
void desenho_triangulo_esc () { int i, espaco, meio, altura = 6;
    for (i = 0; i < altura; i++) { for (espaco = 0; espaco < altura - i; espaco++) { printf(" "); }
            printf("/");
        for (meio = 0; meio < 4 * i; meio++) { if (i == altura - 1) { printf("_");} else { printf(" "); }}
                printf("\\\n"); }}
void desenho_triangulo_iso () {  int i, espaco, meio, altura = 6;
    for (i = 0; i < altura; i++) { for (espaco = 0; espaco < altura - i; espaco++) { printf(" "); }
            printf("/");
        for (meio = 0; meio < 1 * i; meio++) { if (i == altura - 1) { printf("_"); } else {printf(" "); }}
                printf("\\\n"); }}
void funcao_circulo() { float diametro;
             system("cls");
     		 putchar ('\n'); putchar ('\n'); linha (80, '*'); putchar ('\n'); putchar ('\n'); linha (30, '*'); linha (1, ' ');
    		 printf ("1. AREA DO CIRCULO"); linha (1, ' '); linha (30, '*'); putchar ('\n'); putchar ('\n'); linha  (80, '*');
		     printf("\n\n\nDigite o diametro do circulo: "); scanf("%f", &diametro); limparBufferEntrada();  putchar ('\n'); linha(80, '_');
             printf("\n\n\t\t\t>>> A area do circulo e: %.2f", circulo(diametro)); putchar ('\n'); linha (80, '_'); putchar ('\n');
             printf("\n\nPressione <ENTER> para retornar ao menu"); limparBufferEntrada(); }     
void funcao_losango() { float D1, D2;
             system ("cls");
     		 putchar ('\n'); putchar ('\n'); linha (80, '*'); putchar ('\n'); putchar ('\n'); linha (29, '*'); linha (1, ' ');
      		 printf ("2. AREA DO LOSANGULO"); linha (1, ' '); linha (29, '*'); putchar ('\n'); putchar ('\n'); linha  (80, '*'); putchar ('\n');
          	 printf("\n\nDigite a diagonal 1: "); scanf("%f", &D1); limparBufferEntrada();
             printf("\nDigite a diagonal 2: "); scanf("%f", &D2); limparBufferEntrada(); putchar ('\n'); linha(80, '_');
             printf("\n\n\t\t\t>>> A area do losangulo e: %.2f", losangulo(D1, D2)); putchar ('\n'); linha (80, '_'); putchar ('\n');
             printf("\n\nPressione <ENTER> para retornar ao menu"); limparBufferEntrada();}	
void funcao_paralelogramo() { float b, altura;
            system ("cls");
            putchar ('\n'); putchar ('\n'); linha (80, '*'); putchar ('\n'); putchar ('\n'); linha (27, '*'); linha (1, ' ');
      		printf ("3. AREA DO PARALELOGRAMO"); linha (1, ' '); linha (27, '*'); putchar ('\n'); putchar ('\n'); linha  (80, '*'); putchar ('\n');
            printf("\n\nDigite a base: "); scanf("%f", &b); limparBufferEntrada();
            printf("\nDigite a altura: "); scanf("%f", &altura); limparBufferEntrada(); putchar ('\n'); linha(80, '_');
            printf("\n\n\t\t\t>>> A area do paralelogramo e: %.2f", paralelogramo(b, altura)); putchar ('\n'); linha (80, '_'); putchar ('\n');
            printf("\n\nPressione <ENTER> para retornar ao menu"); limparBufferEntrada(); }             
void funcao_trapezio() {float b, B, altura;
            system ("cls");
            putchar ('\n'); putchar ('\n'); linha (80, '*'); putchar ('\n'); putchar ('\n'); linha (29, '*'); linha (1, ' ');
            printf ("4. AREA DO TRAPEZIO"); linha (1, ' '); linha (30, '*'); putchar ('\n'); putchar ('\n'); linha  (80, '*'); putchar ('\n');
            printf("\n\nDigite a base maior: "); scanf("%f", &B); limparBufferEntrada();
            printf("\nDigite a base menor: "); scanf("%f", &b);  limparBufferEntrada();
            printf("\nDigite a altura: "); scanf("%f", &altura); limparBufferEntrada(); putchar ('\n'); linha(80, '_');
            printf("\n\n\t\t\t>>> A area do trapezio e: %.2f", trapezio(B, b, altura)); putchar ('\n'); linha (80, '_'); putchar ('\n');
            printf("\n\nPressione <ENTER> para retornar ao menu"); limparBufferEntrada(); }	
void funcao_triangulo() { float A, B, C;
            system ("cls");
            putchar ('\n'); putchar ('\n'); linha (80, '*'); putchar ('\n'); putchar ('\n'); linha (29, '*'); linha (1, ' ');
            printf ("5. AREA DO TRIANGULO"); linha(1, ' '); linha (29, '*'); putchar ('\n'); putchar ('\n'); linha (80, '*'); putchar ('\n');
            printf("\n\nDigite o lado A do triangulo: "); scanf("%f", &A); limparBufferEntrada();
            printf("\nDigite o lado B do triangulo: "); scanf("%f", &B); limparBufferEntrada();
            printf("\nDigite o lado C do triangulo: "); scanf("%f", &C); limparBufferEntrada(); putchar ('\n'); linha(80, '_');
                if (A == B && B == C) {
                    printf("\n\n\t\t\tTriangulo Equilatero >>> area: %.2f", tri_equi(A, B, C)); putchar ('\n'); linha (80, '_'); putchar ('\n');
                    putchar ('\n');putchar ('\n');putchar ('\n'); desenho_triangulo_equi (); putchar ('\n'); putchar ('\n'); linha (80, '*');
                    printf("\n\nPressione <ENTER> para retornar ao menu"); limparBufferEntrada(); }
                        else if (A != B && A != C && B != C) {
                            printf("\n\n\t\t\tTriangulo Escaleno >>> area: %.2f", tri(A, B, C)); putchar ('\n'); linha (80, '_'); putchar ('\n');
                            putchar ('\n');putchar ('\n');putchar ('\n'); desenho_triangulo_esc (); putchar ('\n'); putchar ('\n'); linha (80, '*');
                            printf("\n\nPressione <ENTER> para retornar ao menu"); limparBufferEntrada(); }
                                else if ((A == C && A != B && B != C) || (A == B && A != C && B != C) || (C == B && C != A && B != A)) {
                                    printf("\n\n\t\t\tTriangulo Isosceles >>> area: %.2f", tri(A, B, C)); putchar ('\n'); linha (80, '_'); putchar ('\n');
                                    putchar ('\n');putchar ('\n');putchar ('\n'); desenho_triangulo_iso (); putchar ('\n'); putchar ('\n'); linha (80, '*');
                                    printf("\n\nPressione <ENTER> para retornar ao menu"); limparBufferEntrada(); }}
void funcao_quadrado() { float q1;
            system ("cls");
            putchar ('\n'); putchar ('\n'); linha (80, '*'); putchar ('\n'); putchar ('\n'); linha (30, '*'); linha (1, ' ');
            printf ("6. AREA DO QUADRADO"); linha(1, ' '); linha (29, '*'); putchar ('\n'); putchar ('\n'); linha  (80, '*'); putchar ('\n');
            printf("\n\nDigite o lado do quadrado: "); scanf("%f", &q1); limparBufferEntrada(); putchar ('\n'); linha(80, '_');
            printf("\n\n\t\t\t>>> A area do quadrado e: %.2f", quadrado(q1)); putchar ('\n'); linha (80, '_'); putchar ('\n');
            printf("\n\nPressione <ENTER> para retornar ao menu"); limparBufferEntrada(); }				
void funcao_esfera() { float diametro;
        	system("cls");
        	putchar ('\n'); putchar ('\n'); linha (80, '*'); putchar ('\n'); putchar ('\n'); linha (29, '*'); linha (1, ' ');
            printf ("1. VOLUME DA ESFERA"); linha (1, ' '); linha (30, '*'); putchar ('\n'); putchar ('\n'); linha  (80, '*'); putchar ('\n');
            printf("\n\nDigite o diametro: "); scanf("%f", &diametro); limparBufferEntrada(); putchar ('\n'); linha(80, '_');
            printf("\n\n\t\t\t>>> O volume da esfera e: %.2f",  esf(diametro)); putchar ('\n'); linha (80, '_'); putchar ('\n');
            printf("\n\n Pressione <ENTER> para retornar ao menu."); limparBufferEntrada(); }	
void funcao_ConeCircular() { float diametro, altura;
            system("cls");
            putchar ('\n'); putchar ('\n'); linha (80, '*'); putchar ('\n'); putchar ('\n'); linha (26, '*'); linha (1, ' ');
            printf ("2. VOLUME DO CONE CIRCULAR"); linha (1, ' '); linha (26, '*'); putchar ('\n'); putchar ('\n'); linha  (80, '*'); putchar ('\n');
            printf("\n\nDigite o diametro da base:  "); scanf("%f",&diametro); limparBufferEntrada();
            printf("\nDigite a altura:  "); scanf("%f",&altura); limparBufferEntrada(); putchar ('\n'); linha(80, '_');
            printf("\n\n\t\t\t>>> O volume do cone circular e: %.2f", cone (diametro, altura)); putchar ('\n'); linha (80, '_'); putchar ('\n');
            printf("\n\n Pressione <ENTER> para retornar ao menu."); limparBufferEntrada(); }			
void funcao_cilindro() {  float diametro, altura;
            system("cls");
            putchar ('\n'); putchar ('\n'); linha (80, '*'); putchar ('\n'); putchar ('\n'); linha (28, '*'), linha (1, ' ');
            printf("3. VOLUME DO CILINDRO"); linha (1, ' '); linha (29, '*'); putchar ('\n'); putchar ('\n'); linha (80, '*'); putchar ('\n');
            printf("\n\nDigite o diametro: "); scanf("%f", &diametro); limparBufferEntrada();
            printf("\nDigite altura:  "); scanf("%f", &altura); limparBufferEntrada(); putchar ('\n'); linha(80, '_');
            printf("\n\n\t\t\t>>>O volume do cilindro e: %.2f", cilindro(diametro, altura)); putchar ('\n'); linha (80, '_'); putchar ('\n');
            printf("\n\n Pressione <ENTER> para retornar ao menu."); limparBufferEntrada(); }
void funcao_paralelepipedo() { float comprimento, altura, largura;
            system("cls");
            putchar ('\n'); putchar ('\n'); linha (80, '*'); putchar ('\n'); putchar ('\n'); linha (26, '*'), linha (1, ' ');
            printf("4. VOLUME DO PARALELEPIPEDO"); linha (1, ' '); linha (25, '*'); putchar ('\n'); putchar ('\n'); linha (80, '*'); putchar ('\n');
            printf("\n\nDigite o comprimento:  "); scanf("%f",&comprimento); limparBufferEntrada();
            printf("\nDigite a largura:  "); scanf("%f",&largura); limparBufferEntrada();
            printf("\nDigite a altura:  "); scanf("%f",&altura); limparBufferEntrada(); putchar ('\n'); linha(80, '_');
            printf("\n\n\t\t\t>>>O volume do paralelepipedo e: %.2f", paralelepipedo (comprimento, largura, altura)); putchar ('\n'); linha (80, '_'); putchar ('\n');
            printf("\n\n Pressione <ENTER> para retornar ao menu."); limparBufferEntrada(); }		
void funcao_metros_jardas() { float num; system("cls");
            putchar ('\n'); putchar('\n'); linha (80, '*'); putchar('\n'); putchar ('\n'); linha (29, '*'); linha (1, ' ');
            printf("1. METROS EM JARDAS"); linha (1, ' '); linha (30, '*'); putchar ('\n'); putchar ('\n'); linha (80, '*'); putchar ('\n');
            printf("\n\nDigite o valor em metros a ser convertido: "); scanf("%f", &num); limparBufferEntrada(); putchar ('\n'); linha(80, '_');
            printf("\n\n\t\t\t\t%.2f Metros = %.2f Jardas", num, m_j (num)); putchar ('\n'); linha (80, '_'); putchar ('\n');
            printf("\n\n Pressione <ENTER> para retornar ao menu."); limparBufferEntrada(); }	
void funcao_jardas_metros() { float num; system("cls");
            putchar ('\n'); putchar('\n'); linha (80, '*'); putchar('\n'); putchar ('\n'); linha (30, '*'); linha (1, ' ');
            printf("2. JARDAS EM METROS"); linha (1, ' '); linha (29, '*'); putchar ('\n'); putchar ('\n'); linha (80, '*'); putchar ('\n');
            printf("\n\nDigite o valor em jardas a ser convertido: "); scanf("%f", &num); limparBufferEntrada(); putchar ('\n'); linha(80, '_');
            printf("\n\n\t\t\t\t%.2f Jardas = %.2f Metros", num, j_m(num)); putchar ('\n'); linha (80, '_'); putchar ('\n');
            printf("\n\n Pressione <ENTER> para retornar ao menu."); limparBufferEntrada(); }	
void funcao_cmCubicas_polegadasCubicas()	{ float num; system("cls");
             putchar ('\n'); putchar('\n'); linha (80, '*'); putchar('\n'); putchar ('\n'); linha (17, '*'); linha (1, ' ');
             printf("3. CENTIMETROS CUBICOS EM POLEGADAS CUBICAS"); linha (1, ' '); linha (18, '*'); putchar ('\n'); putchar ('\n'); linha (80, '*'); putchar ('\n');
             printf("\n\nDigite o valor em centimetros cubicos a ser convertido: "); scanf("%f", &num); limparBufferEntrada (); putchar ('\n'); linha(80, '_');
             printf("\n\n\t\t%.2f Centimetros cubicos = %.2f Polegadas cubicas", num, cmcub_polcub(num)); putchar ('\n'); linha (80, '_'); putchar ('\n');
             printf("\n\n Pressione <ENTER> para retornar ao menu."); limparBufferEntrada(); }
void funcao_polegadasCubicas_cmCubicas() { float num; system("cls");
            putchar ('\n'); putchar('\n'); linha (80, '*'); putchar('\n'); putchar ('\n'); linha (17, '*'); linha (1, ' ');
            printf("4. POLEGADAS CUBICAS EM CENTIMETROS CUBICOS"); linha (1, ' '); linha (18, '*'); putchar ('\n'); putchar ('\n'); linha (80, '*'); putchar ('\n');
            printf("\n\nDigite o valor em polegadas cubicas a ser convertido: "); scanf("%f", &num); limparBufferEntrada (); putchar ('\n'); linha(80, '_');
            printf("\n\n\t\t%.2f Polegadas cubicas = %.2f Centimetros cubicos", num, polcub_cmcub(num)); putchar ('\n'); linha (80, '_'); putchar ('\n');
            printf("\n\n Pressione <ENTER> para retornar ao menu."); limparBufferEntrada(); }           
void funcao_litros_galoes() { float num; system("cls");
            putchar ('\n'); putchar('\n'); linha (80, '*'); putchar('\n'); putchar ('\n'); linha (30, '*'); linha (1, ' ');
            printf("5. LITROS EM GALOES"); linha (1, ' '); linha (29, '*'); putchar ('\n'); putchar ('\n'); linha (80, '*'); putchar ('\n');
            printf("\n\nDigite o valor em litros a ser convertido: "); scanf("%f", &num); limparBufferEntrada (); putchar ('\n'); linha(80, '_');
            printf("\n\n\t\t\t%.2f Litros = %.2f Galoes", num, litros_galoes(num)); putchar ('\n'); linha (80, '_'); putchar ('\n');
            printf("\n\n Pressione <ENTER> para retornar ao menu."); limparBufferEntrada(); }	
void funcao_galoes_litros() { float num; system("cls");
            putchar ('\n'); putchar('\n'); linha (80, '*'); putchar('\n'); putchar ('\n'); linha (29, '*'); linha (1, ' ');
            printf("6. GALOES EM LITROS"); linha (1, ' '); linha (30, '*'); putchar ('\n'); putchar ('\n'); linha (80, '*'); putchar ('\n');
            printf("\n\nDigite o valor em galoes a ser convertido: "); scanf("%f", &num); limparBufferEntrada(); putchar ('\n'); linha(80, '_');
            printf("\n\n\t\t\t%.2f Galoes = %.2f Litros", num, galoes_litros(num)); putchar ('\n'); linha (80, '_'); putchar ('\n');
            printf("\n\n Pressione <ENTER> para retornar ao menu."); limparBufferEntrada(); }		
void funcao_quilogramas_libras() { float num; system("cls");
            putchar ('\n'); putchar('\n'); linha (80, '*'); putchar('\n'); putchar ('\n'); linha (27, '*'); linha (1, ' ');
            printf("7. QUILOGRAMAS EM LIBRAS"); linha (1, ' '); linha (27, '*'); putchar ('\n'); putchar ('\n'); linha (80, '*'); putchar ('\n');
            printf("\n\nDigite o valor em quilogramas a ser convertido: "); scanf("%f", &num); limparBufferEntrada(); putchar ('\n'); linha(80, '_');
            printf("\n\n\t\t\t%.2f Quilogramas = %.2f Libras", num, kilo_libras(num)); putchar ('\n'); linha (80, '_'); putchar ('\n');
            printf("\n\n Pressione <ENTER> para retornar ao menu."); limparBufferEntrada(); }	
void funcao_libras_quilogramas() { float num; system("cls");
            putchar ('\n'); putchar('\n'); linha (80, '*'); putchar('\n'); putchar ('\n'); linha (27, '*'); linha (1, ' ');
			printf("8. LIBRAS EM QUILOGRAMAS");  linha (1, ' '); linha (27, '*');putchar ('\n'); putchar ('\n'); linha (80, '*'); putchar ('\n');
            printf("\n\nDigite o valor em libras a ser convertido: "); scanf("%f", &num); limparBufferEntrada(); putchar ('\n'); linha(80, '_');
            printf("\n\n\t\t\t%.2f Libras = %.2f Quilogramas", num, libras_kilo(num)); putchar ('\n'); linha (80, '_'); putchar ('\n');
            printf("\n\n Pressione <ENTER> para retornar ao menu."); limparBufferEntrada(); }						
void opcao_invalida() { system ("cls");
    int i;
    printf("\n\n\n\t\t+------------------------+\n");
    printf("\t\t|                        |\n");   
    printf("\t\t|    OPCAO INVALIDA!!    |\n");
    printf("\t\t|                        |\n");   
    printf("\t\t+------------------------+\n");
	printf("\n\n\t Pressione <ENTER> para retornar ao menu."); limparBufferEntrada(); system ("cls"); }			
					           
int main() {
        int opcao_menu = 0;
        do {
            putchar('\n'); putchar('\n'); linha(81, '*'); putchar('\n'); putchar('\n');
            linha(27, '*'); linha(1, ' '); printf("P R O G R A M A   M E N U"); linha(1, ' '); linha(27, '*');
            putchar('\n'); putchar('\n'); linha(81, '*');
            printf("\n\nEscolha a opcao desejada:\n\n");
            printf("\t1 - Calcular area de figuras planas\n");
            printf("\t2 - Calcular volume de solidos geometricos\n");
            printf("\t3 - Conversao de medidas\n");
            printf("\t4 - Sair\n");
            printf("\t\tOpcao: ");
                if (scanf("%d", &opcao_menu) != 1) {
                   system ("cls"); printf("Entrada invalida!\n");
                    limparBufferEntrada(); 
                    continue; }
            limparBufferEntrada();
	switch (opcao_menu) {     //escolha
    case 1: {
        int op_area = 0;
                do {   //segundo looping
             system("cls");
             putchar ('\n');  putchar ('\n'); linha (80, '*'); putchar ('\n'); putchar ('\n'); linha (16, '*'); linha (1, ' ');
             printf ("A R E A S   D E   F I G U R A S   P L A N A S"); linha(1, ' '); linha (17, '*'); putchar ('\n'); putchar ('\n'); linha  (80, '*');
             printf ("\n\nEscolha a opcao desejada:\n");
             printf("\n\t1 - Circulo\n");
             printf("\t2 - Losango\n");
             printf("\t3 - Paralelogramo\n");
             printf("\t4 - Trapezio\n");
             printf("\t5 - Triangulo\n");
             printf("\t6 - Quadrado\n");
             printf("\t0 - Retornar\n");
          	 printf("\t\tOpcao: ");
          	    if (scanf ("%d", &op_area) != 1) {
          	         system ("cls"); printf("Entrada invalida!\n");
          	         limparBufferEntrada();
          	         continue; }
          	limparBufferEntrada ();  system("cls");         // variáveis que serão usadas no switch
    switch (op_area) { //segunda escolha - 1° submenu 
    case 1: {
    	funcao_circulo(); break; }
    case 2:
        { funcao_losango(); break; }
    case 3:
        { funcao_paralelogramo(); break; }
    case 4:
        { funcao_trapezio(); break; }
    case 5:
        { funcao_triangulo(); break; }
    case 6:
        { funcao_quadrado(); break; }   
    case 0: break;    
    default:
            opcao_invalida(); }
      } while (op_area != 0);
      break; }
    case 2:
    { int op_vol = 0;
        do {
            system ("cls");
            putchar ('\n'); putchar ('\n'); linha (80, '*'); putchar ('\n'); putchar ('\n'); linha (24, '*'); linha (1, ' ');
            printf("VOLUME DE SOLIDOS GEOMETRICOS"); linha (1, ' '); linha (25, '*'); putchar ('\n'); putchar ('\n'); linha (80, '*'); putchar('\n');
            printf("\nEscolha a opcao desejada:\n");
            printf("\n\t1 - Esfera\n");
            printf("\t2 - Cone Circular\n");
            printf("\t3 - Cilindro\n");
            printf("\t4 - Paralelepipedo\n");
            printf("\t0 - Retornar\n");
            printf("\t\tOpcao: ");
            if (scanf("%d", &op_vol) != 1) {
            system ("cls"); printf("Entrada Invalida\n");
            limparBufferEntrada ();
            continue; }
            limparBufferEntrada(); 
    switch (op_vol) {
    case 1: 
	    { funcao_esfera(); break; }
    case 2: 
	    { funcao_ConeCircular(); break; }
    case 3: 
	    { funcao_cilindro(); break; }
    case 4: 
	    { funcao_paralelepipedo(); break; }
    case 0: break;       
    default: { opcao_invalida(); }}         //fecha o terceiro switch 
          } while(op_vol!=0); system ("cls");      //condição para voltar para o submenu 2
           break; }
	   	 case 3: {
                int op_conv = 0;  
           do   {	//submenu    
            system("cls");
			putchar ('\n'); putchar('\n'); linha (80, '*'); putchar('\n'); putchar ('\n'); linha (29, '*'); linha (1, ' ');
            printf("CONVERSAO DE MEDIDAS"); linha (1, ' '); linha (29, '*'); putchar ('\n'); putchar ('\n'); linha (80, '*'); putchar ('\n');
            printf("\n Escolha a opcao desejada de conversao:\n\n");
            printf("\t1 - Metros para Jardas");                                   printf("\t\t\t\t\t5 - Litros para Galoes\n");
            printf("\n\t2 - Jardas para Metros");                                 printf("\t\t\t\t\t6 - Galoes para Litros\n");
            printf("\n\t3 - Centimetros cubicos para Polegadas cubicas");         printf("\t\t7 -Quilogramas para Libras\n");
            printf("\n\t4 - Polegadas cubicas para Centimetros cubicos");         printf("\t\t8 -Libras para Quilogramas\n");          
            printf("\n\t0 - Retornar");
            printf("\n\t\tOpcao: "); if (scanf("%d", &op_conv) != 1) {
            system ("cls"); printf("Entrada Invalida\n"); limparBufferEntrada (); continue; }
      switch (op_conv) {
    case 1: 
	    { funcao_metros_jardas(); break; }
    case 2: 
	    { funcao_jardas_metros(); break; }
    case 3: 
	    { funcao_cmCubicas_polegadasCubicas(); break; }
    case 4: 
	    { funcao_polegadasCubicas_cmCubicas(); break; }
    case 5:
	    { funcao_litros_galoes(); break; }
    case 6:
	    { funcao_galoes_litros(); break; }
    case 7:
	    { funcao_quilogramas_libras(); break; }
    case 8: 
	    { funcao_libras_quilogramas(); break; }
    case 0: break;
    default: opcao_invalida(); }	   
   }  while(op_conv!=0); system ("cls");   //cond. volta para o terceiro submenu
    break; }
    case 4: { system ("cls");
            printf("Saindo do programa...\n"); break; }
    default:
             opcao_invalida();  }  //fecha o primeito switch
} while (opcao_menu != 4);
 return 0; }
