#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//matriz global
int** cart;
//vetor global
int* numeros;
//variavel global
int so_uma_vez = 0;


int zera_vet(){
    numeros =(int *)malloc(75*sizeof(int));

    for(int i = 0; i<75; i++){
        numeros[i] = 0;
    }
}

int sort(){

    int teste_ale_num = 0,recebe;

    srand((unsigned)time(NULL));  //mundado a semente do rand

    recebe = rand()%75; //vai gerar um numero aleatorio no intervalo de 0 a 75

    while(teste_ale_num == 0){
        if(recebe != 0 && numeros[recebe-1] == 0){ //testando se o numero e igual ou nao ao armazenado
            numeros[recebe-1] = recebe;

            return recebe;    //retorna o numero sorteado
            teste_ale_num = 1;

        }else{ // o numero ja existia e ele vai fazer o sorteio de um novo numero
            recebe = rand()%75;
            teste_ale_num = 0;
        }

    }
    teste_ale_num = 0;

    free(numeros);
}

int hacker(){

    int** mesa_das_bolas, **cartela_gerada, recebe_num_sorteado = 0,teste_parada = 1,cont_parada = 1;
    cartela_gerada = (int **) malloc(5*sizeof(int*));
    for(int i = 0; i<15;i++){
        cartela_gerada[i] = (int *) malloc(5*sizeof(int));
    }

    mesa_das_bolas = (int **) malloc(15*sizeof(int*));
    for(int i = 0; i<15;i++){
        mesa_das_bolas[i] = (int *) malloc(5*sizeof(int));
    }

    for(int i = 0; i<15; i++){
        for(int n = 0; n<5; n++){
            mesa_das_bolas[i][n] = 0;
        }
    }

    printf("\nBOLAS QUE SAIRAM ATE O MOMENTO\n");

    for(int i = 0; i<15; i++){             //mostrar as bolas armazenadas na matriz hack
            for(int n = 0; n<5; n++){
                printf("%d\t", mesa_das_bolas[i][n]);
            }
            printf("\n");
        }

    while(teste_parada == 1){
    printf("Digite 1 para sortear um numero e 0 se deseja encerrar o bingo: ");

    scanf("%d", &teste_parada);

    system("cls");

    if(teste_parada == 1){
    recebe_num_sorteado = sort();

    if(so_uma_vez == 1){
    cartela_gerada = cart;

    }

        printf("CARTELA\n");

        for(int i = 0; i<5; i++){    //imprime a cartela e testa se tem os numeros sorteados
                for(int n = 0; n<5; n++){
                    if(cartela_gerada[i][n] == recebe_num_sorteado){
                       cartela_gerada[i][n] = 0;

                       printf("%d\t", cartela_gerada[i][n]);

                       cont_parada ++;  //condiçao de batida do bingo
                    }else{
                        printf("%d\t", cartela_gerada[i][n]);
                    }
                }
                printf("\n");
            }


    printf("\nNUMERO SORTEADO FOI : %d\n\n", recebe_num_sorteado);

    if(recebe_num_sorteado <= 5){
        printf("BOLAS QUE SAIRAM ATE O MOMENTO\n");
        for(int i = 0; i<15; i++){
            for(int n = 0; n<5; n++){
                mesa_das_bolas[0][recebe_num_sorteado-1] = recebe_num_sorteado;
                printf("%d\t", mesa_das_bolas[i][n]);
            }
            printf("\n");
        }
    }else if(recebe_num_sorteado >= 6 && recebe_num_sorteado <= 10){

        printf("BOLAS QUE SAIRAM ATE O MOMENTO\n");

        for(int i = 0; i<15; i++){
            for(int n = 0; n<5; n++){
                mesa_das_bolas[1][recebe_num_sorteado-6] = recebe_num_sorteado;
                printf("%d\t", mesa_das_bolas[i][n]);
            }
            printf("\n");
        }
    }else if(recebe_num_sorteado >= 11 && recebe_num_sorteado <= 15){

        printf("BOLAS QUE SAIRAM ATE O MOMENTO\n");
        for(int i = 0; i<15; i++){
            for(int n = 0; n<5; n++){
                mesa_das_bolas[2][recebe_num_sorteado-11] = recebe_num_sorteado;
                printf("%d\t", mesa_das_bolas[i][n]);
            }
            printf("\n");
        }
    }else if(recebe_num_sorteado >= 16 && recebe_num_sorteado <= 20){

        printf("BOLAS QUE SAIRAM ATE O MOMENTO\n");

        for(int i = 0; i<15; i++){
            for(int n = 0; n<5; n++){
                mesa_das_bolas[3][recebe_num_sorteado-16] = recebe_num_sorteado;
                printf("%d\t", mesa_das_bolas[i][n]);
            }
            printf("\n");
        }
    }else if(recebe_num_sorteado >= 21 && recebe_num_sorteado <= 25){

        printf("BOLAS QUE SAIRAM ATE O MOMENTO\n");

        for(int i = 0; i<15; i++){
            for(int n = 0; n<5; n++){
                mesa_das_bolas[4][recebe_num_sorteado-21] = recebe_num_sorteado;
                printf("%d\t", mesa_das_bolas[i][n]);
            }
            printf("\n");
        }
    }else if(recebe_num_sorteado >= 26 && recebe_num_sorteado <= 30){

        printf("BOLAS QUE SAIRAM ATE O MOMENTO\n");

        for(int i = 0; i<15; i++){
            for(int n = 0; n<5; n++){
                mesa_das_bolas[5][recebe_num_sorteado-26] = recebe_num_sorteado;
                printf("%d\t", mesa_das_bolas[i][n]);
            }
            printf("\n");
        }
    }else if(recebe_num_sorteado >= 31 && recebe_num_sorteado <= 35){

        printf("BOLAS QUE SAIRAM ATE O MOMENTO\n");

        for(int i = 0; i<15; i++){
            for(int n = 0; n<5; n++){
                mesa_das_bolas[6][recebe_num_sorteado-31] = recebe_num_sorteado;
                printf("%d\t", mesa_das_bolas[i][n]);
            }
            printf("\n");
        }
    }else if(recebe_num_sorteado >= 36 && recebe_num_sorteado <= 40){

        printf("BOLAS QUE SAIRAM ATE O MOMENTO\n");

        for(int i = 0; i<15; i++){
            for(int n = 0; n<5; n++){
                mesa_das_bolas[7][recebe_num_sorteado-36] = recebe_num_sorteado;
                printf("%d\t", mesa_das_bolas[i][n]);
            }
            printf("\n");
        }
    }else if(recebe_num_sorteado >= 41 && recebe_num_sorteado <= 45){

        printf("BOLAS QUE SAIRAM ATE O MOMENTO\n");

        for(int i = 0; i<15; i++){
            for(int n = 0; n<5; n++){
                mesa_das_bolas[8][recebe_num_sorteado-41] = recebe_num_sorteado;
                printf("%d\t", mesa_das_bolas[i][n]);
            }
            printf("\n");
        }
    }else if(recebe_num_sorteado >= 46 && recebe_num_sorteado <= 50){

        printf("BOLAS QUE SAIRAM ATE O MOMENTO\n");

        for(int i = 0; i<15; i++){
            for(int n = 0; n<5; n++){
                mesa_das_bolas[9][recebe_num_sorteado-46] = recebe_num_sorteado;
                printf("%d\t", mesa_das_bolas[i][n]);
            }
            printf("\n");
        }
    }else if(recebe_num_sorteado >= 51 && recebe_num_sorteado <= 55){

        printf("BOLAS QUE SAIRAM ATE O MOMENTO\n");

        for(int i = 0; i<15; i++){
            for(int n = 0; n<5; n++){
                mesa_das_bolas[10][recebe_num_sorteado-51] = recebe_num_sorteado;
                printf("%d\t", mesa_das_bolas[i][n]);
            }
            printf("\n");
        }
    }else if(recebe_num_sorteado >= 56 && recebe_num_sorteado <= 60){

        printf("BOLAS QUE SAIRAM ATE O MOMENTO\n");

        for(int i = 0; i<15; i++){
            for(int n = 0; n<5; n++){
                mesa_das_bolas[11][recebe_num_sorteado-56] = recebe_num_sorteado;
                printf("%d\t", mesa_das_bolas[i][n]);
            }
            printf("\n");
        }
    }else if(recebe_num_sorteado >= 61 && recebe_num_sorteado <= 65){

        printf("BOLAS QUE SAIRAM ATE O MOMENTO\n");

        for(int i = 0; i<15; i++){
            for(int n = 0; n<5; n++){
                mesa_das_bolas[12][recebe_num_sorteado-61] = recebe_num_sorteado;
                printf("%d\t", mesa_das_bolas[i][n]);
            }
            printf("\n");
        }
    }else if(recebe_num_sorteado >= 66 && recebe_num_sorteado <= 70){

        printf("BOLAS QUE SAIRAM ATE O MOMENTO\n");

        for(int i = 0; i<15; i++){
            for(int n = 0; n<5; n++){
                mesa_das_bolas[13][recebe_num_sorteado-66] = recebe_num_sorteado;
                printf("%d\t", mesa_das_bolas[i][n]);
            }
            printf("\n");
        }
    }else if(recebe_num_sorteado >= 71 && recebe_num_sorteado <= 75){
        printf("BOLAS QUE SAIRAM ATE O MOMENTO\n");
        for(int i = 0; i<15; i++){
            for(int n = 0; n<5; n++){
                mesa_das_bolas[14][recebe_num_sorteado-71] = recebe_num_sorteado;
                printf("%d\t", mesa_das_bolas[i][n]);
            }
            printf("\n");
        }
    }

    if(cont_parada == 25){
        teste_parada = 0;   //pra para o if e o while

        system("cls");

        printf("PARABENS VOCE GANHOU O BINGO.");

        system("exit");
    }
    }else{
        system("exit");
    }


}
}
int cartela(){

    int* cl1;
    int* cl2;
    int* cl3;
    int* cl4;
    int* cl5;
    int num_sort = 15, aux = 0,aux_test_al_15=0,aux_test_al_30=0,aux_test_al_45=0,aux_test_al_60=0,aux_test_al_75=0;

    cart = (int **) malloc(5*sizeof(int *));//alocando as linhas da matriz
    for(int i = 0; i<5; i++){
        cart[i] = (int *)malloc(5*sizeof(int));//alocando as colunas da matriz
    }

    srand((unsigned)time(NULL));//trocando semente

    cl1 = (int *) malloc(15*sizeof(int));
        for(int i = 0; i<15;i++){
            cl1[i] = i + 1;//preenchendo vetor com possiveis numeros da primeira coluna
    }
    for(int i = 0; i<5; i++){
        aux = rand()%14;
        cart[i][0] = cl1[aux];

        while(aux_test_al_15 == 0){   //testando se na coluna tem um numero igual
            for(int n = 0; n<5; n++){
                for(int j = 0; j<5; j++){
                    if(cart[n][0] == cart[j][0] && n != j){  //se o numero for igual na posiçao gera outro numero
                        aux = rand()%14;
                        cart[n][0] = cl1[aux];
                    }else{
                        aux_test_al_15 = 1;
                    }
            }
        }
        }
        aux_test_al_15 = 0; //para que o teste ocorra com os proximos numeros
    }

    cl2 = (int *) malloc(15*sizeof(int));
        for(int i = 0; i<15;i++){
            cl2[i] = i + 16;
    }
    for(int i = 0; i<5; i++){
        aux = rand()%14;
        cart[i][1] = cl2[aux];

        while(aux_test_al_30 == 0){
            for(int n = 0; n<5; n++){
                for(int j = 0; j<5; j++){
                    if(cart[n][1] == cart[j][1] && n != j){
                        aux = rand()%14;
                        cart[n][1] = cl2[aux];
                    }else{
                        aux_test_al_30 = 1;
                }
            }
        }
        }
        aux_test_al_30 = 0;
    }

    cl3 = (int *) malloc(15*sizeof(int));
        for(int i = 0; i<15;i++){
            cl3[i] = i + 31;
    }
    for(int i = 0; i<5; i++){
        aux = rand()%14;
        cart[i][2] = cl3[aux];

        while(aux_test_al_45 == 0){
            for(int n = 0; n<5; n++){
                for(int j = 0; j<5; j++){
                    if(cart[n][2] == cart[j][2] && n != j){
                        aux = rand()%14;
                        cart[n][2] = cl3[aux];
                    }else{
                        aux_test_al_45 = 1;
                }
            }
        }
        }
        aux_test_al_45 = 0;
    }

    cart[2][2] = 0;

    cl4 = (int *) malloc(15*sizeof(int));
    for(int i = 0; i<15;i++){
        cl4[i] = i + 46;
    }
    for(int i = 0; i<5; i++){
        aux = rand()%14;
        cart[i][3] = cl4[aux];
        while(aux_test_al_60 == 0){
        for(int n = 0; n<5; n++){
            for(int j = 0; j<5; j++){
                if(cart[n][3] == cart[j][3] && n != j){
                    aux = rand()%14;
                    cart[n][3] = cl4[aux];
                }else{
                    aux_test_al_60 = 1;
                }
            }
        }
        }
        aux_test_al_60 = 0;
    }

    cl5 = (int *) malloc(15*sizeof(int));
        for(int i = 0; i<15;i++){
            cl5[i] = i + 61;
    }
    for(int i = 0; i<5; i++){
        aux = rand()%14;
        cart[i][4] = cl5[aux];

        while(aux_test_al_75 == 0){
            for(int n = 0; n<5; n++){
                for(int j = 0; j<5; j++){
                    if(cart[n][4] == cart[j][4] && n != j){
                        aux = rand()%14;
                        cart[n][4] = cl5[aux];
                    }else{
                        aux_test_al_75 = 1;
                }
            }
        }
        }
        aux_test_al_75 = 0;
    }

    printf("\nCARTELA\n");

    for(int i = 0; i<5; i++){
        for(int n = 0; n<5; n++){
            printf("%d\t", cart[i][n]);
        }
        printf("\n");
    }

}

void globo(){
    int cont = 1;//criando um contador

    int **numeros_do_gl;//criando a matriz numeros_do_gl
    numeros_do_gl = (int **) malloc(15*sizeof(int *));//alocando as linhas da matriz
    for(int i = 0; i<15; i++){
        numeros_do_gl[i] = (int *)malloc(5*sizeof(int));//alocando as colunas da matriz
    }

    //zerando todas as posições da matriz numeros_do_gl
    for(int i = 0; i<15; i++){
        for(int n = 0; n<5; n++){
            numeros_do_gl[i][n] = 0;
        }
    }

    printf("GLOBO DO BINGO\n");

    for(int i = 0; i<15; i++){
        for(int n = 0; n<5; n++){
            numeros_do_gl[i][n] = numeros_do_gl[i][n] + cont;
            cont = cont + 1;

            printf("%d\t", numeros_do_gl[i][n]);
        }
        printf("\n");
    }

    for(int i = 0; i<15;i++){
        free(numeros_do_gl[i]);
    }
    free(numeros_do_gl);

}

int main(){

    globo();//mostrar o globo;
    zera_vet();//zerando o vetor de sorteio
    cartela();//gerando e mostrando a cartela
    so_uma_vez = 1;// atribuindo valor a variavel
    hacker();//mostrando o hack, pegando o numero sorteado e testando se esta na cartela e marcando caso sim

}
