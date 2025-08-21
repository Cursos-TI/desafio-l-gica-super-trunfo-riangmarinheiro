//O código funcionou normalmente aonde fiz no Visual Studio Code (aplicativo). O código tinha apresentado problemas quando exportei para cá, mas
//rodou normalmente. Tanto aqui como no VS Code. Neste caso, eu confio no VS Code.
//É esperado que esse código cumpra o nível mestre, ou pelo menos, o nível intermediário.

#include <stdio.h>

int main(){

    char estado[8];  //Registra estado da carta
    char codigo[4];  //Registra código da carta 
    char cidade[50]; //Registra cidade da carta 
    int populacao;   //Registra população da carta
    float area;      //Registra area km2 da carta (apenas numeros)
    float pib;       //Registra pib da carta
    int pturisticos; //Registra pontos turisticos da carta


    printf("Bem vindo ao registro de cartas do SuperTrunfo \n"); //Programa é iniciado
   
    printf("Insira estado da carta 1 de A-H \n"); //Usuario insere estado da carta 1
    scanf("%s", &estado); 

    printf("Insira o codigo da carta 1, com 1 letra e 2 numeros \n"); //Usuario insere codigo da carta 1; ex: A01, B11, C22
    scanf("%s", &codigo);

    printf("Insira o nome da cidade da carta 1 \n"); //Usuario insere nome da cidade (max 50 letras)
    scanf("%s", &cidade);

    printf("Insira o numero da população da carta 1 \n"); //Usuario insere num da populacao
    scanf("%d", &populacao);

    printf("Insira a área em km2 da carta 1 [xxxx.xx] \n"); //Usuario insere area em km2 (apenas numeros ex: 1000.00)
    scanf("%f", &area);

    printf("Insira o PIB da carta 1 [xxx.xx] \n"); //Usuario insere PIB (apenas numeros ex: 999.99)
    scanf("%f", &pib);

    printf("Insira o número de pontos turísticos da carta 1 \n"); //Usuario insere numero de pontos turisticos
    scanf ("%d", &pturisticos); 
    // ---------------------------------------- Inserção de dados da carta 1 termina aqui

        float densidade = (float) populacao / area; // Cálculo de densidade populacional
        float pibcapita = (float) pib * 10000000000 / populacao;   // Calculo de PIB p Capita
        float densidadeinversa = (float) 1.0 / densidade;   //Calculo de densidade inversa????? (pode ter algo de errado aqui)
        float superpoder = (float) populacao + area + pibcapita + pturisticos + densidadeinversa; //Calculo de superpoder  

    printf("Vamos ver os dados da sua carta 1. \n \n");  
    printf("ESTADO: %s\n", estado);                        //Mostra estado C1
    printf("CÓDIGO: %s\n", codigo);                        //Mostra código da C1
    printf("CIDADE: %s\n", cidade);                        //Mostra cidade da C1
    printf("POPULAÇÃO: %d\n", populacao);                  //Mostra população da C1
    printf("ÁREA [km2]: %.2f\n", area);                      //Mostra área em km2 da C1
    printf("PIB: %.2f bilhões\n", pib);                              //Mostra PIB da C1
    printf("PONTOS TURISTICOS: %d\n", pturisticos);        //Mostra pontos turísticos da C1
    printf("DENSIDADE POPULACIONAL: %.2f hab km2\n", densidade);  //Mostra densidade (linha 38)
    printf("PIB per Capita: %.2f reais\n", pibcapita);     //Mostra PIB p Capita (linha 39)
    printf("Número do superpoder: %.1f\n", superpoder);   //Mostra superpoder (linha 41)


    
        // ---------------------------------------- Carta 1 termina aqui
        
        printf("\n \n Faça o registro da sua Carta 2 \n \n");

// ---------------------------------------- Dados para registro da carta 2
    char estado2[8];  //Registra estado da carta
    char codigo2[4];  //Registra código da carta 
    char cidade2[50]; //Registra cidade da carta 
    int populacao2;   //Registra população da carta
    float area2;      //Registra area km2 da carta (apenas numeros)
    float pib2;       //Registra pib da carta
    int pturisticos2; //Registra pontos turisticos da carta

    printf("Insira estado da carta 2 de A-H \n"); //Usuario insere estado da carta 2
    scanf("%s", &estado2); 

    printf("Insira o codigo da carta 2, com 1 letra e 2 numeros \n"); //Usuario insere codigo da carta 2; ex: A01, B11, C22
    scanf("%s", &codigo2);

    printf("Insira o nome da cidade da carta 2 \n"); //Usuario insere nome da cidade (max 50 letras)
    scanf("%s", &cidade2);

    printf("Insira o numero da população da carta 2 \n"); //Usuario insere num da populacao
    scanf("%d", &populacao2);

    printf("Insira a área em km2 da carta 2 [xxxx.xx] \n"); //Usuario insere area em km2 (apenas numeros ex: 1000.00)
    scanf("%f", &area2);

    printf("Insira o PIB da carta 2 [xxx.xx] \n"); //Usuario insere PIB (apenas numeros ex: 999.99)
    scanf("%f", &pib2);

    printf("Insira o número de pontos turísticos da carta 2 \n"); //Usuario insere numero de pontos turisticos
    scanf ("%d", &pturisticos2); 
    // ---------------------------------------- Inserção de dados da carta 2 termina aqui

        float densidade2 = (float) populacao2 / area2; // Cálculo de densidade populacional
        float pibcapita2 = (float) pib2 * 10000000000 / populacao2;   // Calculo de PIB p Capita
        float densidadeinversa2 = (float) 1.0 / densidade2;   //Calculo de densidade inversa????? (linha 40)
        float superpoder2 = (float) populacao2 + area2 + pibcapita2 + pturisticos2 + densidadeinversa2; //Calculo de superpoder  (ainda não terminei)


        printf("Vamos ver os dados da sua carta 2. \n \n"); 
    printf("ESTADO: %s\n", estado2);                        //Mostra estado C2
    printf("CÓDIGO: %s\n", codigo2);                        //Mostra código da C2
    printf("CIDADE: %s\n", cidade2);                        //Mostra cidade da C2
    printf("POPULAÇÃO: %d\n", populacao2);                  //Mostra população da C2
    printf("ÁREA [km2]: %.2f\n", area2);                      //Mostra área em km2 da C2
    printf("PIB: %.2f bilhões\n", pib2);                              //Mostra PIB da C2
    printf("PONTOS TURISTICOS: %d\n", pturisticos2);        //Mostra pontos turísticos da C2
    printf("DENSIDADE POPULACIONAL: %.2f hab km2\n", densidade2);  //Mostra densidade (linha 38)
    printf("PIB per Capita: %.2f reais\n", pibcapita2);     //Mostra PIB p Capita (linha 39)
    printf("Número do superpoder: %.1f\n \n", superpoder2);   //Mostra superpoder (linha 41)

        // ---------------------------------------- Carta 2 termina aqui

        // Comparações (dessa vez usando if else começando desafios de lógica, no nivel aventureiro)

    unsigned int comparadores;
    unsigned int comparadores2;
    

        printf("\n Escolha um atributo para comparar:\n");
        printf("1: População\n 2:Área\n 3:PIB\n 4:Pontos turisticos\n 5: Densidade demográfica\n \n");
        scanf("%d", &comparadores);  // Inicializará o campo de comparações
        
switch (comparadores)       //----------------Toda estrutura de comparações abaixo, começando da primeira comparação de atributos, na opção 1 ( populacao )
{
case 1:
        printf("Cidades: %s, %s \n", cidade, cidade2);
        printf("Atributo escolhido: População\n");
        printf("%s: %d  |  %s: %d\n", cidade, populacao, cidade2, populacao2);
if (populacao > populacao2) {
    printf("Carta %s vence!\n", cidade); 
}
else if (populacao == populacao2){
    printf("Empate!\n");
}
else {
    printf("Carta %s vence!\n", cidade2); 
}
    break;
// -----------------------------------
// Comparação: Opção 2 (Area --------------------------------)
//-------------------------------------
case 2:
        printf(": %s, %s \n", cidade, cidade2);
        printf("Atributo escolhido: Area\n");
        printf("%s: %.2f  |  %s: %.2f\n", cidade, area, cidade2, area2);
if (area > area2) {                          
    printf("Carta %s vence!\n", cidade); 
}
else if (area == area2){
    printf("Empate!\n");
}
else {
    printf("Carta %s vence!\n", cidade2);  
}
    break;
// -----------------------------------
// Comparação: Opção 3 (PIB --------------------------------)
//-------------------------------------
case 3:
        printf(": %s, %s \n", cidade, cidade2);
        printf("Atributo escolhido: PIB\n");
        printf("%s: %.2f  |  %s: %.2f\n", cidade, pib, cidade2, pib2);
if (pib > pib2) {                          
    printf("Carta %s vence!\n", cidade); 
}
else if (pib == pib2){
    printf("Empate!\n");
}
else {
    printf("Carta %s vence!\n", cidade2); 
}
    break;
// -----------------------------------
// Comparação: Opção 4 (Pontos Turisticos --------------------------------)
//-------------------------------------
case 4:
        printf(": %s, %s \n", cidade, cidade2);
        printf("Atributo escolhido: Pontos Turisticos\n");
        printf("%s: %.d  |  %s: %.d\n", cidade, pturisticos, cidade2, pturisticos2);
if (pturisticos > pturisticos2) {                          
    printf("Carta %s vence!\n", cidade); 
}
else if (pturisticos == pturisticos2){
    printf("Empate!\n");
}
else {
    printf("Carta %s vence!\n", cidade2); 
}
    break;
// -----------------------------------
// Comparação: Opção 5 (Densidade demografica (inversa) --------------------------------)
// Com certeza pode ter algo de errado aqui, mas não sei o que
//-------------------------------------    
case 5:
        printf(": %s, %s \n", cidade, cidade2);
        printf("Atributo escolhido: Densidade demografica\n");
        printf("%s: %.2f  |  %s: %.2f\n", cidade, densidade, cidade2, densidade2);
if (densidade < densidade2) {                          
    printf("Carta %s vence!\n", cidade); 
}
else if (densidade == densidade2){
    printf("Empate!\n");
}
else {
    printf("Carta %s vence!\n", cidade2);
}
    break;


default:  
printf("Opção invalida\n");
break;
}
//-------------------------------------
// Fim da comparação do primeiro atibuto
//-------------------------------------

        printf("\n\n Escolha um segundo atributo para comparar:\n");
        printf("1: População\n 2:Área\n 3:PIB\n 4:Pontos turisticos\n 5: Densidade demográfica\n \n");
        scanf("%d", &comparadores2);  // Inicializará o campo de comparações (dessa vez para o segundo atributo)
if (comparadores2 == comparadores)
{
printf("Você escolheu o mesmo atributo, tente novamente\n");
} else {
switch (comparadores2)       //----------------Toda estrutura de comparações abaixo, agora na segunda comparação de atributos, na opção 1 ( populacao )
{
case 1:
        printf("Cidades: %s, %s \n", cidade, cidade2);
        printf("Atributo escolhido: População\n");
        printf("%s: %d  |  %s: %d\n", cidade, populacao, cidade2, populacao2);
if (populacao > populacao2) {
    printf("Carta %s vence!\n", cidade);
}
else if (populacao == populacao2){
    printf("Empate!\n");
}
else {
    printf("Carta %s vence!\n", cidade2);
}
    break;
// -----------------------------------
// Comparação: Opção 2 (Area --------------------------------)
//-------------------------------------
case 2:
        printf(": %s, %s \n", cidade, cidade2);
        printf("Atributo escolhido: Area\n");
        printf("%s: %.2f  |  %s: %.2f\n", cidade, area, cidade2, area2);
if (area > area2) {                          
    printf("Carta %s vence!\n", cidade);
}
else if (area == area2){
    printf("Empate!\n");
}
else {
    printf("Carta %s vence!\n", cidade2);
}
    break;
// -----------------------------------
// Comparação: Opção 3 (PIB --------------------------------)
//-------------------------------------
case 3:
        printf(": %s, %s \n", cidade, cidade2);
        printf("Atributo escolhido: PIB\n");
        printf("%s: %.2f  |  %s: %.2f\n", cidade, pib, cidade2, pib2);
if (pib > pib2) {                          
    printf("Carta %s vence!\n", cidade);
}
else if (pib == pib2){
    printf("Empate!\n");
}
else {
    printf("Carta %s vence!\n", cidade2);
}
    break;
// -----------------------------------
// Comparação: Opção 4 (Pontos Turisticos --------------------------------)
//-------------------------------------
case 4:
        printf(": %s, %s \n", cidade, cidade2);
        printf("Atributo escolhido: Pontos Turisticos\n");
        printf("%s: %.d  |  %s: %.d\n", cidade, pturisticos, cidade2, pturisticos2);
if (pturisticos > pturisticos2) {                          
    printf("Carta %s vence!\n", cidade);
}
else if (pturisticos == pturisticos2){
    printf("Empate!\n");
}
else {
    printf("Carta %s vence!\n", cidade2);
}
    break;
// -----------------------------------
// Comparação: Opção 5 (Densidade demografica (inversa) --------------------------------)
// Com certeza pode ter algo de errado aqui, mas não sei o que
//-------------------------------------    
case 5:
        printf(": %s, %s \n", cidade, cidade2);
        printf("Atributo escolhido: Densidade demografica\n");
        printf("%s: %.2f  |  %s: %.2f\n", cidade, densidade, cidade2, densidade2);
if (densidade < densidade2) {                          
    printf("Carta %s vence!\n", cidade);
}
else if (densidade == densidade2){
    printf("Empate!\n");
}
else {
    printf("Carta %s vence!\n", cidade2);
}
    break;
default:  
printf("Opção invalida\n");
break;
}
}

        return 0;

}

/* Comentários do fim: Deve ter muita coisa errada aqui que não vai sair como esperado, mas é o melhor qual sei.*/





