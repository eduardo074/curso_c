/*Link:
    https://classroom.google.com/u/0/w/NDU5Njg3NTU3MDE2/t/all
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int exer001()
{
    /*
    1. Fac ̧a um programa que possua um vetor denominado A que armazene 6 numeros intei-  ́
    ros. O programa deve executar os seguintes passos:

        (a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
        (b) Armazene em uma variavel inteira (simples) a soma entre os valores das posic ̧  ́ oes  ̃
        A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
        (c) Modifique o vetor na posic ̧ao 4, atribuindo a esta posic ̧  ̃ ao o valor 100.  ̃
        (d) Mostre na tela cada valor do vetor A, um em cada linha.
            
    */

    int vetor[6]={1, 0, 5, -2, -5, 7};
    int soma;

    soma = vetor[0] + vetor[1] + vetor [5];
    printf("%d + %d + %d = %d", vetor[0],vetor[1],vetor[5],soma);
    vetor[4] = 100;

    printf("\n");
    for (int i = 1; i < 6; i++)
    {
        printf("Indice [%d] = %d\n",i,vetor[i]);
    }
    
    return 0;
}
int exer002()
{
    /*
   Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos.
            
    */

   int vetor[6];
   for (int i = 0; i < 6; i++)
   {
       printf("Informe um numero inteiro: ");
       scanf("%d", &vetor[i]);
   }
   for (int i = 0; i < 6; i++)
   {
       printf("\n%d",vetor[i]);
   }
   
}
int exer003()
{
    /*
   Ler um conjunto de numeros reais, armazenando-o em vetor e calcular o quadrado das componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos temˆ
    10 elementos cada. Imprimir todos os conjuntos.
            
    */

   float vetor[10],armazenarQuadrado[10];

   for (int i = 0; i < 10; i++)
   {
       printf("Informe um numero real: ");
       scanf("%f",&vetor[i]);
   }

    printf("\nValor ao quadrado dos numeros\n");
    for (int i = 0; i < 10; i++)
   {
       armazenarQuadrado[i] = vetor[i] * vetor[i];
       printf("%.2f x %.2f = %.2f\n",vetor[i], vetor[i],armazenarQuadrado[i]);
       
   }
  
   
}
int exer004()
{
    /*
    Fac ̧a um programa que leia um vetor de 8 posic ̧oes e, em seguida, leia tamb  ̃ em dois va-  ́
    lores X e Y quaisquer correspondentes a duas posic ̧oes no vetor. Ao final seu programa  ̃
    devera escrever a soma dos valores encontrados nas respectivas posic ̧  ́ oes  ̃ X e Y
            
    */

   int vetor[8], posicao,posicao2,soma;
   int j=0;

   for (int i = 0; i < 8; i++)
   {
       printf("Informe um numero inteiro: ");
       scanf("%d",&vetor[i]);
   }
   printf("\nEscolha duas posicoes para somar os valores: ");
   scanf("%d",&posicao);
    scanf("%d",&posicao2);

   //for, para encontra minha primera posicao
   for (int i = 0; i < 8; i++)
   {
       /*if, se meu i for = a posicao, pq eu encontrando o valor da minha primeira posicao posso achar agora somete o valor da minha segunda posicao */
       if (i == posicao)
       {
           //para achar minha segunda posição
           for ( j = j+0; j < 8; j++)
           {
                if (j == posicao2)
                {
                    soma  = vetor[i] + vetor[j];
                    printf("\n%d + %d = %d",vetor[i],vetor[j],soma);
                }
           }
       }
       
       
       
   }
  
}
int exer005()
{
    /*
    Leia um vetor de 10 posic ̧oes. Contar e escrever quantos valores pares ele possui.
            
    */

   int vetor[10],par[10],contaPar=0;
   int j =0;

   for (int i = 0; i < 10; i++)
   {
       printf("Digite um valor: ");
       scanf("%d", &vetor[i]);
   }
   
   for (int i = 0; i < 10; i++)
   {
       if (vetor[i] % 2 == 0)
       {
           par[j] = vetor[i];
           j++;
           contaPar++;
       }
       
   }

   printf("\nOs numeros pares sao\nTotal de pares: %d\n",contaPar);
   for (int i = 0; i < contaPar; i++)
   {
       printf("%d, ",par[i]);
   }
}
int exer006()
{
    /*
    Fac ̧a um programa que receba do usuario um vetor com 10 posic ̧  ́ oes. Em seguida dever  ̃ a ́
     ser impresso o maior e o menor elemento do vetor.
            
    */

   int vetor[10], maiorNumero=0, menorNumero=0;
  

   for (int i = 0; i < 10; i++)
   {
       printf("Digite um valor: ");
       scanf("%d",&vetor[i]);

       if (i == 0)
       {
           menorNumero = vetor[i];
       }
       
       if (vetor[i] > maiorNumero)
       {
          maiorNumero = vetor[i];
       }
       if (vetor[i] < menorNumero)
       {
           menorNumero = vetor[i];
       }
   }

   printf("\n\nO maior numero: %d\n",maiorNumero);
   printf("O menor numero: %d\n",menorNumero);
}
int exer007()
{
    /*
   Escreva um programa que leia 10 numeros inteiros e os armazene em um vetor. Imprima o vetor, o maior elemento e a posic ̧ao que ele se encontra.
    */

   int vetor[10], maiorNumero=0, posicaoMaior;

   for (int i = 1; i < 11; i++)
   {
       printf("Digite um valor inteiro: ");
       scanf("%d",&vetor[i]);
   }

   for (int i = 1; i < 11; i++)
   {
        if (vetor[i] > maiorNumero)
        {
            maiorNumero = vetor[i];
            posicaoMaior = i;
        }
   }
   

   printf("\n\nO numero maior e %d e esta na posicao %d",maiorNumero,posicaoMaior);
}
int exer008()
{
    /*
   Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos na ordem inversa.
    */

   int vetor[6];

   for (int i = 0; i < 6; i++)
   {
       printf("Digite um valor inteiro: ");
       scanf("%d",&vetor[i]);
   }

   printf("\n\nos numero em ordem inversa: ");
   for ( int i = 5; i >= 0; i--)
   {
     printf(" %d",vetor[i]);
   }
   
}
int exer009()
{
    /*
    Crie um programa que le 6 valores inteiros pares e, em seguida, mostre na tela os valores lidos na ordem inversa.
    */

   int vetor[6], par[6], j=0, contaPar=0;

   for (int i = 0; i < 6; i++)
   {
       printf("Digite um valor inteiro : ");
       scanf("%d",&vetor[i]);

       if (vetor[i] % 2 == 0)
       {
           par[j] = vetor[i]; 
           j++;
           contaPar++;
       }
       
   }

   printf("\n\nos numero em ordem inversa dos numeros pares: ");
   for ( int i = contaPar - 1; i >= 0; i--)
   {
     printf(" %d",par[i]);
   }
   
}
int exer010()
{
    /*
    Fac ̧a um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule e imprima a media geral.
    */

   float nota[15], mediaTurma, somaNotas=0;

   for (int i = 1; i < 16; i++)
   {
       printf("Insira a nota do  aluno %d : ",i);
       scanf("%f",&nota[i]); 
   }
   
   for (int i = 1; i < 16; i++)
   {
       somaNotas = somaNotas + nota[i];
   }

   mediaTurma =  somaNotas / 15.0;
   
   system("cls");
   printf("\n\nA medida da turma %.2f\n\n",mediaTurma);
   
}
int exer011()
{
    /*
   Fac ̧a um programa que preencha um vetor com 10 numeros reais, calcule e mostre a quantidade de numeros negativos e a soma dos n  ́ umeros positivos desse vetor.
    */

   float num[10], soma=0;
   int contNegativo = 0;

 
   for (int i = 0; i < 10; i++)
   {
       printf("Insira um numero real : ");
       scanf("%f",&num[i]);    
   }
   
   for (int i = 0; i < 10; i++)
   {
       if (num[i] < 0)
       {
           contNegativo++;
       }
       else if (num[i] > 0)
       {
           soma = soma + num[i];
       }
   }

   printf("\nA quantidade de numeros negativos e: %d\nA soma dos numeros positivos: %.2f",contNegativo,soma); 
}
int exer012()
{
    /*
   Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos
   juntamente com o maior, o menor e a media dos valores.
    */

   int num[5], maiorNum=0, menorNum=0, soma=0;
   float media;
  

 
   for (int i = 0; i < 5; i++)
   {
       printf("Insira um numero interio: ");
       scanf("%d",&num[i]);
   }

   Sleep(1000);
   system("cls");

   printf("Todos os valores lidos:");
   for (int i = 0; i < 5; i++)
   {
       if(i == 0 ){
          menorNum = num[i];
       } 
       if(num[i] > maiorNum){
           maiorNum = num[i];
       }
       if(num[i] < menorNum){
            menorNum = num[i];
       }
        soma = soma + num[i];
        printf("%d ",num[i]);
   }

    media = soma / 5.0; 
    printf("\n\n o maior numero: %d\no menor numero: %d\nA media dos numeros: %.2f",maiorNum,menorNum,media);
}
int exer013()
{
    /*
   Fazer um programa para ler 5 valores e, em seguida, mostrar a posic ̧ao onde se encon-tram o maior e o menor valor.
    */

   int num[5], maiorNum=0, menorNum=0, posicaoMaior=0, posicaoMenor=0;

   for (int i = 0; i < 5; i++)
   {
       printf("Insira um numero interio: ");
       scanf("%d",&num[i]);
   }

  
   for (int i = 0; i < 5; i++)
   {
       if(i == 0)
       {
          menorNum = num[i];
       } 
       if(num[i] > maiorNum)
       {
           maiorNum = num[i];
           posicaoMaior = i;
       }
       if(num[i] < menorNum)
       {
            menorNum = num[i];
            posicaoMenor = i;
       }

   }

    printf("\n\n o maior numero: %d, e ele esta na posicao %d\no menor numero: %d, e ele esta na posicao %d\n",maiorNum,posicaoMaior,menorNum,posicaoMenor);
}
int exer014()
{
    /*
   Fac ̧a um programa que leia um vetor de 10 posic ̧oes e verifique se existem valores iguais e os escreva na tela.
    */

   int num[10];

   for (int i = 0; i < 10; i++)
   {
       printf("Informe um numero interio: ");
       scanf("%d",&num[i]);
   }

    printf("\n");
   for (int i = 0; i < 10; i++)
   {
       for(int j = i+1; j< 10; j++)
       {
           if(num[i] == num[j])
           {
               printf("\nO numero %d se repete:",num[i]);
           }
       }
   }
   
}
int exer015()
{
    /*
   Fac ̧a um programa que leia um vetor de 10 posic ̧oes e verifique se existem valores iguais e os escreva na tela.
    */

   int num[10], num2[10], cont=0;

   for (int i = 0; i < 10; i++)
   {
       printf("Informe um numero interio: ");
       scanf("%d",&num[i]);
   }

    printf("\n");
   for (int i = 0; i < 10; i++)
   {
       for(int j = i+1; j < 10; j++)
       {
           if(num[i] != num[j])
           {
               cont++;
           }
       }
       if(cont == 9 - i)
       {
           printf("\n %d", num[i]);
       }
       cont=0;
   }
}
int exer016()
{
    /*
    Fac ̧a um programa que leia um vetor de 5 posic ̧oes para n  ̃ umeros reais e, depois, um  ́
    codigo inteiro. Se o c  ́ odigo for zero, finalize o programa; se for 1, mostre o vetor na ordem  ́
    direta; se for 2, mostre o vetor na ordem inversa. Caso, o codigo for diferente de 1 e 2  ́
    escreva uma mensagem informando que o codigo  ́ e inv  ́ alido.
    */

   float num[5];
   int codigo;

   for(int i = 0; i < 5; i++)
   {
       printf("Digite um numero real: ");
       scanf("%f",&num[i]);
   }

   

   do
   {
       printf("\t\tOpcoes\n0 - Finalizar o programa\n1 - mostra o vetor na ordem direta\n2 - vetro na ordem inversa\n");
       scanf("%d",&codigo);
       system("cls");

        switch (codigo)
        {
            case 0:
                    printf("Programa encerrado...");
                break;
            case 1:
                printf("vetor na ordem direta: ");
                for (int i = 0; i < 5; i++)
                {
                    printf("%.2f ", num[i]);
                }
                printf("\n");
                break;
            case 2:
                printf("vetor na ordem INVERSA: ");
                for (int i = 4; i >= 0; i--)
                {
                    printf("%.2f ", num[i]);
                }
                printf("\n");
                break;
            
            default:
               printf("\nOpcao invalida\n");
               Sleep(1000);
               system("cls");
             break;
        }

    } while (codigo != 0);
   

   
}
int exer017()
{
    /*
      Leia um vetor de 10 posic ̧oes e atribua valor 0 para todos os elementos que possu  ̃  ́ırem
      valores negativos.
    */


   int num[10];

   for(int i = 0; i < 10; i++)
   {
       printf("Digite um numero inteiro: ");
       scanf("%d",&num[i]);
   }

   for (int i = 0; i < 10; i++)
   {
       if (num[i] < 0)
       {
           num[i] = 0;
       }
   }
   printf("\n\n");
   for (int i = 0; i < 10; i++)
   {
      printf("%d ", num[i]);
   }

}
int exer018()
{
    /*
        Fac ̧a um programa que leia um vetor de 10 numeros. Leia um n  ́ umero  ́ x. Conte os
        multiplos de um n  ́ umero inteiro  ́ x num vetor e mostre-os na tela.
    */


   int num[10], multiplo;

   for(int i = 0; i < 10; i++)
   {
       printf("Digite um numero inteiro: ");
       scanf("%d",&num[i]);
   }

   printf("Informe um numero: ");
   scanf("%d",&multiplo);

   printf("\nTodos os multiplos de %d dentro do vetor: ",multiplo);
   for (int i = 0; i < 10; i++)
   {
        if (num[i] % multiplo == 0)
        {
            printf(" %d", num[i]);
        }
   }
   
}
int exer019()
{
    /*
        Fac ̧a um vetor de tamanho 50 preenchido com o seguinte valor: (i+ 5 ∗ i)%(i+ 1), sendo
        i a posic ̧ao do elemento no vetor. Em seguida imprima o vetor na tela.  ̃
    */


   float num[50];

   for(int i = 0; i < 50; i++)
   {
       num[i] = (i + (5 * i)) % (i + 1);
   }

   for (int i = 0; i < 50; i++)
   {
      printf(" %d", num[i]);
   }
   

}
int exer020()
{
    /*
       Escreva um programa que leia numeros inteiros no intervalo [0,50] e os armazene em um  ́
        vetor com 10 posic ̧oes. Preencha um segundo vetor apenas com os n  ̃ umeros  ́  ́ımpares
        do primeiro vetor. Imprima os dois vetores, 2 elementos por linha.
    */


   int num[10], impar[10];
   int j = 0, contImpar = 0;

   for(int i = 0; i < 10; i++)
   {
       printf("Informe um numero: ");
       scanf("%d", &num[i]);

       if (num[i] % 2 == 1)
       {
          impar[j] = num[i];
          j++;
          contImpar++;
       }
   }
   printf("\n\n");
   for (int i = 0; i < contImpar; i++)
   {
      printf(" %d", impar[i]);
   }
   

}
int exer021()
{
    /*
      Fac ̧a um programa que receba do usuario dois vetores,  ́ A e B, com 10 numeros inteiros  ́
        cada. Crie um novo vetor denominado C calculando C = A - B. Mostre na tela os dados
        do vetor C.
    */


   int vetor1[10], vetor2[10], subtra[10]; 

   for (int i = 0; i < 10; i++)
   {
     printf("informe um numero: ");
     scanf("%d", &vetor1[i]);
   }
    printf("\n");
    for (int i = 0; i < 10; i++)
   {
     printf("informe um numero: ");
     scanf("%d", &vetor2[i]);
   }
   
   for (int i = 0; i < 10; i++)
   {
     subtra[i] = vetor1[i] - vetor2[i];
   }
   
   for (int i = 0; i < 10; i++)
   {
     printf("%d - %d = %2d\n",vetor1[i], vetor2[i], subtra[i]);
   }
}
int exer022()
{
    /*
      Fac ̧a um programa que leia dois vetores de 10 posic ̧oes e calcule outro vetor contendo,  ̃
    nas posic ̧oes pares os valores do primeiro e nas posic ̧  ̃ oes impares os valores do se-  ̃
    gundo.
    */

     int vetor1[10], vetor2[10], vetor3[10] ;

    for (int i = 0; i < 10; i++)
    {
        printf("Informe um numero: ");
        scanf("%d", &vetor1[i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Informe um numero: ");
        scanf("%d", &vetor2[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0 )
        {
            vetor3[i] = vetor1[i];
        }else{
            vetor3[i] = vetor2[i];
        }
    }

    printf("\n");

     for (int i = 0; i < 10; i++)
    {
        printf(" %d", vetor3[i]);
    }
}
int exer024()
{
    /*
    Fac ̧a um programa que leia dez conjuntos de dois valores, o primeiro representando o
    numero do aluno e o segundo representando a sua altura em metros. Encontre o aluno  ́
    mais baixo e o mais alto. Mostre o numero do aluno mais baixo e do mais alto, juntamente  ́
    com suas alturas.
    */

    int vetor1[10], posiAlto, posiBaixo;
    float altura[10], alunoMaisAlto=0, alunoMaisBaixo=0;

    for (int i = 1; i < 6; i++)
    {
        printf("Informe o numero do aluno: ");
        scanf("%d", &vetor1[i]);

        for (int j = i; j <= i ; j++)
        {
            printf("Informa a altura do aluno: ");
            scanf("%f", &altura[j]);

            
            if (i == 1)
            {
                alunoMaisBaixo = altura[i];
            }
            
            if (altura[i] > alunoMaisAlto)
            {
                alunoMaisAlto = altura[i];
                posiAlto = i;
            }

        
           if (altura[i] <= alunoMaisBaixo)
            {
                alunoMaisBaixo = altura[i];
                posiBaixo = i;
            }
        
            
        }

        printf("\n");
    }

    for (int i = 1; i < 6; i++)
    {
        printf("aluno: %d -> altura : %.2f\n", vetor1[i], altura[i]);
    }

    printf("\n\naluno %d e mais alto %.2f\naluno %d e mais baixo %.2f",posiAlto, alunoMaisAlto, posiBaixo, alunoMaisBaixo );

}
int exer025()
{
    /*
    Fac ̧a um programa que preencha um vetor de tamanho 100 com os 100 primeiros natu-
    rais que nao s  ̃ ao m  ̃ ultiplos de 7 ou que terminam com 7.  ́
    */

    int vetor[100];

    for (int i = 0; i < 100; i++)
    {
        if (i % 7 > 0)
        {
             vetor[i] = i;
        }
    }

    for (int i = 0; i < 100; i++)
    {
       printf(" %d", vetor[i]);
    }
    
}
int exer026(){
    /*
    Tentando descobrir se um dado era viciado, um dono de cassino honesto (ha! ha! ha! ha!) o lançou n vezes. Dados os n resultados dos lançamentos, determinar o número de ocorrências de cada face.
    */

    int num[6] = {5,2,5,3,4,5};
    int cont = 1;
    int vetor[6];

    printf("Ola vamos ver seu seu dado esta viciado, balance e joge, em seguida informe o valor\n");


    //for (int i = 0; i < 5; i++)
    //{
    //   scanf("%d",&num[i]);
    //}
    
    printf("\n");

    for (int i = 0; i < 6; i++)
    {
        for (int j = i+1; j < 6; j++)
        {
            if (num[i] == num[j])
            {
                cont++;
            }
        }
        if (cont == 1)
            {
                cont = 0;
            }
        vetor[i] = cont;
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d ocorreu %d vezes\n",num[i],vetor[i]);
    }
    

}// imcompleto

int main()
{
    exer026();
    
    return 0;
}
