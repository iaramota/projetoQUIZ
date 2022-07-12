
int main()
{
    printf("\n\t\t------SEJA BEM VINDO AO MEU QUIZ-------\t\t\n");
    printf("\n\t=====================================================\t\t\n");
    int i = 0, pontuacao = 0;
    char resposta;


   printf("--------------------------------------------------------------------------------\n\n\n");
   printf("1. Normalmente, quantos litros de sangue uma pessoa tem? Em media, quantos sao retirados numa doacao de sangue?\n\n");
   printf("\ta) Tem entre 2 a 4 litros. Sao retirados 450 mililitros\n");
   printf("\tb) Tem entre 4 a 6 litros. Sao retirados 450 mililitros\n");
   printf("\tc) Tem 10 litros. Sao retirados 2 litros\n");
   printf("\td) Tem 7 litros. Sao retirados 1,5 litros\n");
   printf("\te) Tem 0,5 litros. Sao retirados 0,5 litros\n\n");

   printf("Digite a letra correspondente a sua resposta e aperte ENTER: ");
   scanf("%c", &resposta);

   if ((resposta == 'B')||(resposta =='b'))// As duas barras retas � o termo (OU)
    {
      printf("Resposta correta\n\n");
      pontuacao ++; // Aqui estou somando pontos das resposta na variavel final
   }else{
       printf("Resposta incorreta\n\n");
       }

       getchar();
       printf("Pressione \"ENTER\" para continuar!");
       getchar();
       system("cls"); //vou limpar a tela para n�o ter rolagem

   printf("2.De onde surgiu o chuveiro eletrico?\n");
   printf("\ta) Franca\n");
   printf("\tb) Inglaterra\n");
   printf("\tc) Brasil\n");
   printf("\td) Australia\n");
   printf("\te) Italia\n\n");

   printf("Digite sua resposta: ");
   scanf("%c", &resposta);

   if ((resposta == 'C')||(resposta == 'c')){
        printf("Resposta correta\n\n");
        pontuacao ++;
   }else{
       printf("Reposta incorreta\n\n");

   }

   getchar();
   printf("Pressione \"ENTER\" para proxima questao");
   getchar();
   system("cls");

   printf("3. Qual eh o menor e o maior pais do mundo?\n\n");
   printf("\ta) Vaticano e Russia\n");
   printf("\tb) Nauru e China\n");
   printf("\tc) Monaco e Canada\n");
   printf("\td) Malta e Estados Unidos\n");
   printf("\te) Sao Marino e India\n\n");

   printf("Digite sua resposta: ");
   scanf("%c", &resposta);

   if ((resposta == 'A')||(resposta == 'a')){
        printf("Resposta correta!\n\n");
        pontuacao ++;
   }else{
       printf("Resposta incorreta:-(\n\n");
   }

    getchar();
    printf("Pressione \"ENTER\"");
    getchar();
    system("cls");

    printf("4. Qual o nome do presidente do Brasil que ficou conhecido como Jango?\n\n");
    printf("\ta) Janio Quadros\n");
    printf("\tb) Jacinto Anjos\n");
    printf("\tc) Getulio Vargas\n");
    printf("\td) Joao Figueiredo\n");
    printf("\te) Joao Goulart\n\n");

    printf("Digite sua resposta: ");
    scanf("%c", &resposta);

    if ((resposta == 'A')||(resposta== 'a')){
        printf("Resposta correta!!\n\n");
        pontuacao ++;
    }else{
        printf("Resposta Incorreta\n\n");
    }


    getchar();
    printf("Pessione \"ENTER\"");
    getchar();
    system("cls");

    printf("5. Qual o livro mais vendido no mundo a seguir da Biblia?\n\n");
    printf("\ta) O Senhor dos Aneis\n");
    printf("\tb) Dom Quixote\n");
    printf("\tc) O Pequeno Principe\n");
    printf("\td) Ela, a Feiticeira\n");
    printf("\te) Um Conto de Duas Cidades\n");

    printf("Digite sua resposta: ");
    scanf("%c", &resposta);

    if ((resposta == 'B')||(resposta == 'b'))
        {
            printf("Resposta correta!\n\n");
            pontuacao ++;
    }else{
        printf("Resposta incorreta\n\n");
    }

    getchar();
    printf("Pressione \"ENTER\" para proxima questao ");
    getchar();
    system ("cls");

     printf("6. Quantas casas decimais tem o numero pi?\n");
     printf("\ta) Duas\n");
     printf("\tb) Centenas\n");
     printf("\tc) Infinitas\n");
     printf("\td) Vinte\n");
     printf("\te) Milhares\n\n");

     printf("Digite o resultado: ");
     scanf("%c", resposta);

     if ((resposta == 'C')||('c')){
            printf("Resposta correta!\n\n\n");
            pontuacao ++;
     }else{
         printf("Resposta incorreta.\n\n\n");
     }

     getchar();
     printf("Pressione \"ENTER\" para proxima quest�o.");
     getchar();
     system ("cls");

     printf("7. Quais os paises que tem a maior e a menor expectativa de vida do mundo?");
     printf("\ta) Japao e Serra Leoa \n");
     printf("\tb) Australia e Afeganistao\n");
     printf("\tc) Italia e Chade\n");
     printf("\td) Brasil e Congo\n");
     printf("\te) Estados Unidos e Angola\n");

     printf("Digite sua resposta: ");
     scanf("%c", &resposta);

     if ((resposta == 'B')||('b')){
            printf("Resposta correta!\n\n\n");
            pontuacao ++;
     }else{
         printf("Resposta incorreta\n\n\n");
     }

     getchar();
     printf("Pressione \"ENTER\" para proxima quest�o");
     getchar();
     system ("cls");

     printf("8. O que a palavra legend significa em portugues?\n");
     printf("\ta) Legenda\n");
     printf("\tb) Conto\n");
     printf("\tc) Historia\n");
     printf("\td) Lenda\n");
     printf("\te) Legendario\n\n");

     printf("Digite a sua resposta: ");
     scanf("%c",resposta);

     if ((resposta == 'D')||(resposta == 'd')){
            printf("Resposta correta!\n\n\n");
            pontuacao ++;
     }else{
         printf("Resposta incorreta\n\n\n");
     }

        getchar();
        printf("Pressione \"ENTER\" para proxima quest�o.");
        getchar();
        system("cls");

    printf("9. Qual o n�mero m�nimo de jogadores numa partida de futebol?\n");
    printf("\ta) 8\n");
    printf("\tb) 10\n");
    printf("\tc) 9\n");
    printf("\td) 5\n");
    printf("\te) 7\n\n");

    printf("Digite sua resposta:");
    scanf("%c", &resposta);

    if ((resposta == 'E')||(resposta == 'e')){
            printf("Resposta correta\n\n\n");
            pontuacao ++;
    }else{
        printf("Resposta incorreta\n\n\n");
    }

    getchar();
    printf("Pressione \"ENTER\" para proxima quest�o.");
    getchar();
    system("cls");



    printf("10. Quais as duas datas que s�o comemoradas em novembro?\n");
    printf("\ta) Independ�ncia do Brasil e Dia da Bandeira\n");
    printf("\tb) Proclama��o da Rep�blica e Dia Nacional da Consci�ncia Negra\n");
    printf("\tc) Dia do M�dico e Dia de S�o Lucas\n");
    printf("\td) Dia de Finados e Dia Nacional do Livro\n");
    printf("\te) Black Friday e Dia da �rvore\n\n");

    printf("Digite sua resposta:");
    scanf("%c", &resposta);

    if ((resposta == 'A')||(resposta == 'a')){
            printf("Resposta correta\n\n\n");
            pontuacao ++;
    }else{
        printf("Resposta incorreta\n\n\n");
    }

    getchar();
    printf("Pressione \"ENTER\" para finalizar.");
    getchar();
    system("cls");


    if (pontuacao >= 7){
        printf("Parabens!! sua pontua��o no mini Quiz foi de: %i\n\n", pontuacao);
        printf("Ate a proxima ^^\n\n");
    }else{
        printf("Parabens, sua pontua�ao n�o chegou a 70% mas voce consegue na proxima :)\n\n");
        printf("sua pontuacao foi: %i\n", pontuacao);
        printf("Ate a proxima!\n\n\n");
    }
    printf("\t\tObrigada por participar!\n\n\n\n");


    return 0;
}
