// Atividade 03
//questão 01

    int x =10;
    printf("%d\n",x);
 
    float y = 5.0;
    printf("%d%f\n",x,y);
 
    printf("%d %f\n",x,y);
    system("pause");
    return 0;

//questão 02
#include <stdio.h>
#include <stdlib.h>
int main(){
       int x,z;
    float y;
    scanf("%d",&x);
    scanf("%f",&y);
    scanf("%d%f",&x,&y);
    scanf("%d%d",&x,&z);
    scanf("%d %d",&x,&z);
    system("pause");
    return 0;
}
//questão 03
#include <stdio.h>
#include <stdlib.h>
 
int main(){

    char nome[100];
    printf("Digite o seu nome: ");
    scanf("%s", nome);
    printf("Seja bem vindo, %s!", nome);
    return 0;
}
// Questão 04
#include <stdio.h>
#include <stdlib.h>
int main() {
   char idade_texto[10];
   int idade;
   printf("Digite sua idade: ");
   fgets(idade_texto, 10, stdin);
   idade = atoi(idade_texto);
   printf("Sua idade em inteiro: %d\n", idade);
   return 0;
}
// Questão 05
#include <stdio.h>
int main() {
   int numero_inteiro;
   float numero_decimal;
   printf("Digite um número inteiro: ");
   scanf("%d", &numero_inteiro);

   numero_decimal = (float)numero_inteiro;
   printf("O número decimal correspondente é: %.2f\n", numero_decimal);
   return 0;
}
// Questão 06
#include <stdio.h>
int main() {
   int numero1, numero2, soma;
   printf("Digite o primeiro número inteiro: ");
   scanf("%d", &numero1);dia
   printf("Digite o segundo número inteiro: ");
   scanf("%d", &numero2);

   soma = numero1 + numero2;

   printf("A soma dos números é: %d\n", soma);
   return 0;
}
// Questão 07
#include <stdio.h>
int main() {
   float numero, quadrado;

   printf("Digite um número decimal: ");
   scanf("%f", &numero);

   quadrado = numero * numero;

   printf("O quadrado de %.2f é %.2f\n", numero, quadrado);
   return 0;
}
// Questão 08
#include <stdio.h>
#include <time.h>
int main() {
   int ano_nascimento, idade;
   int ano_atual = 2024;
   printf("Digite o seu ano de nascimento: ");
   scanf("%d", &ano_nascimento);
   idade = ano_atual - ano_nascimento;
   printf("Sua idade é: %d anos\n", idade);
   return 0;
}
// Questão 09
#include <stdio.h>
int main() {
   char primeiro_nome[50], sobrenome[50], nome_completo[100];
   printf("Digite seu primeiro nome: ");
   scanf("%s", primeiro_nome);
   printf("Digite seu sobrenome: ");
   scanf("%s", sobrenome);
   sprintf(nome_completo, "%s %s", primeiro_nome, sobrenome);
   printf("Seu nome completo é: %s\n", nome_completo);
   return 0;
}
// Questão 10
#include <stdio.h>
int main() {
   int contador = 0;
   int numero;
   printf("Digite uma sequência de números separados por espaço: ");
   while (scanf("%d", &numero) == 1) {
       contador++;
   }
   printf("Foram digitados %d números.\n", contador);
   return 0;
}
// Questão 11
#include <stdio.h>
int main() {
   char animal[50];
   printf("Digite o nome de um animal: ");
   scanf("%s", animal);
   printf("Você digitou o animal: %s\n", animal);
   return 0;
}
// Questão 12
#include <stdio.h>
#include <string.h>
int main() {
   char nome[50], sobrenome[50];
   printf("Digite seu nome: ");
   scanf("%s", nome);
   printf("Digite seu sobrenome: ");
   scanf("%s", sobrenome);
   printf("Nome completo invertido: %s, %s\n", sobrenome, nome);
   return 0;
}
// Questão 13
#include <stdio.h>
#include <string.h>
int main() {
   char string[100];
   printf("Digite uma string: ");
   scanf("%s", string);
   int tamanho = strlen(string);
   printf("O tamanho da string é: %d\n", tamanho);
   return 0;
}
// Questão 14
#include <stdio.h>
int main() {
   int numero;
   printf("Digite um número inteiro: ");
   scanf("%d", &numero);
   if (numero % 2 == 0) {
       printf("%d é um número par.\n", numero);
   } else {
       printf("%d é um número ímpar.\n", numero);
   }
   return 0;
}
// Questão 15
#include <stdio.h>
int main() {
   int numero;
   printf("Digite um número inteiro: ");
   scanf("%d", &numero);
   if (numero > 0) {
       printf("%d é um número positivo.\n", numero);
   } else if (numero < 0) {
       printf("%d é um número negativo.\n", numero);
   } else {
       printf("Você digitou zero.\n");
   }
   return 0;
}
// Questão 16
#include <stdio.h>
int main() {
   int numero1, numero2;
   printf("Digite o primeiro número: ");
   scanf("%d", &numero1);
   printf("Digite o segundo número: ");
   scanf("%d", &numero2);
   if (numero1 > numero2) {
       printf("O primeiro número (%d) é maior.\n", numero1);
   } else if (numero2 > numero1) {
       printf("O segundo número (%d) é maior.\n", numero2);
   } else {
       printf("Os números são iguais.\n");
   }
   return 0;
}
// Questão 17
#include <stdio.h>
int main() {
   float altura, peso, imc;
   printf("Digite sua altura em metros: ");
   scanf("%f", &altura);
   printf("Digite seu peso em quilogramas: ");
   scanf("%f", &peso);
   imc = peso / (altura * altura);
   printf("Seu IMC é: %.2f\n", imc);
   return 0;
}
// Questão 18
#include <stdio.h>
#include <string.h>
int main() {
   char nome[50];
   printf("Digite seu nome: ");
   scanf("%s", nome);
   if (strlen(nome) > 5) {
       printf("Seu nome tem mais de 5 caracteres.\n");
   } else {
       printf("Seu nome tem 5 caracteres ou menos.\n");
   }
   return 0;
}
//Questão 19
#include <stdio.h>

int main() {
    char estadoCivil[20];

    printf("Por favor, insira seu estado civil: ");
    scanf("%s", estadoCivil);


    if(strcmp(estadoCivil, "solteiro") == 0) {
        printf("Você é solteiro(a).\n");
    } else if(strcmp(estadoCivil, "casado") == 0) {
        printf("Você é casado(a).\n");
    } else if(strcmp(estadoCivil, "divorciado") == 0) {
        printf("Você é divorciado(a).\n");
    } else if(strcmp(estadoCivil, "viuvo") == 0 || strcmp(estadoCivil, "viúvo") == 0) {
        printf("Você é viúvo(a).\n");
    } else {
        printf("Estado civil não reconhecido.\n");
    }

    return 0;
}
//Questão 20
#include <stdio.h>

int main() {
    float base, altura, area;


    printf("Digite a base do retangulo: ");
    scanf("%f", &base);

  
    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);

   
    area = base * altura;

   
    printf("A area do retangulo e: %.2f\n", area);

    return 0;
}
//Questão 21
#include <stdio.h>
#include <string.h>

int main() {
    char cidade[50];
    char letra = 'P'; 

    
    printf("Digite o nome da sua cidade: ");
    scanf("%s", cidade);

    
    if(cidade[0] == letra || cidade[0] == letra + 32) {
        printf("a cidade comeca com a letra '%c'.\n", letra);
    } else {
        printf("a cidade nao comeca com a letra '%c'.\n", letra);
    }

    return 0;
}
//Questão 22
#include <stdio.h>

int main() {
    float num1, num2, resto;

   
    printf("Digite o primeiro numero decimal: ");
    scanf("%f", &num1);

    
    printf("Digite o segundo numero decimal: ");
    scanf("%f", &num2);

 
    resto = num1 - ((int)(num1 / num2)) * num2;

    printf("O resto da divisao entre %.2f e %.2f e: %.2f\n", num1, num2, resto);

    return 0;
}
//Questão 23
#include <stdio.h>

int main() {
    float numero_decimal;
    int numero_inteiro;


    printf("Digite um número decimal: ");
    scanf("%f", &numero_decimal);

  
    numero_inteiro = (int)numero_decimal;

    
    printf("O número inteiro correspondente é: %d\n", numero_inteiro);

    return 0;
}
//Questão 24
#include <stdio.h>
#include <stdlib.h> 

int main() {
    char numero_string[50];
    int numero_inteiro, novo_numero;
    
   
    printf("Digite um número inteiro como uma string: ");
    scanf("%s", numero_string);

    numero_inteiro = atoi(numero_string);

    novo_numero = numero_inteiro + 10;

    sprintf(numero_string, "%d", novo_numero);


    printf("O novo número é: %s\n", numero_string);

    return 0;
}
//Questão 25
#include <stdio.h>
#include <stdlib.h> // 

int main() {
    char data[11];
    int dia, mes, ano;

    printf("Digite a data no formato dd/mm/aaaa: ");
    scanf("%s", data);

    sscanf(data, "%d/%d/%d", &dia, &mes, &ano);

    printf("Dia: %d\n", dia);
    printf("Mês: %d\n", mes);
    printf("Ano: %d\n", ano);

    return 0;
}
//Questão 26
#include <stdio.h>
#include <string.h> 

int main() {
    char cidade[50];
    char estado[50];

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);
    printf("Digite o nome do estado: ");
    scanf("%s", estado);

    char mensagem[100];
    strcpy(mensagem, "Você mora em ");
    strcat(mensagem, cidade);
    strcat(mensagem, ", ");
    strcat(mensagem, estado);
    strcat(mensagem, ".");


    printf("%s\n", mensagem);

    return 0;
}
//Questão 27
#include <stdio.h>
#include <string.h> 

int main() {
    int ano_nascimento;

    printf("Por favor, digite seu ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    char mensagem[100];
    sprintf(mensagem, "Bem-vindo ao nosso programa, nascido em %d!", ano_nascimento);


    printf("%s\n", mensagem);

    return 0;
}
//Questão 28
#include <stdio.h>

int main() {
    int numero;
    char texto[100];

    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("Digite uma string: ");
    scanf(" %[^\n]s", texto);

    
    char resultado[200]; 
    sprintf(resultado, "%d %s", numero, texto);

   
    printf("String concatenada: %s\n", resultado);

    return 0;
}

//Questão 29
#include <stdio.h>

int main() {
    char nome_produto[100];
    float preco;
    char simbolo_moeda[10];

   
    printf("Digite o nome do produto: ");
    scanf(" %[^\n]s", nome_produto);

    printf("Digite o preço do produto: ");
    scanf("%f", &preco);

    printf("Digite o símbolo da moeda: ");
    scanf(" %[^\n]s", simbolo_moeda);

   
    printf("Produto: %s - Preço: %.2f %s\n", nome_produto, preco, simbolo_moeda);

    return 0;
}

//Questão 30
#include <stdio.h>

int main() {
    int numero;

   
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    
    printf("O dobro de %d é %d\n", numero, numero * 2);

    return 0;
}

//Questão 31
#include <stdio.h>

int main() {
    char email[100];

    
    printf("Digite seu endereço de e-mail: ");
    scanf(" %[^\n]s", email);

    
    printf("Obrigado por fornecer o seu e-mail: %s\n", email);

    return 0;
}

//Questão 32
#include <stdio.h>

int main() {
    int num1, num2;

    
    
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    
    printf("Soma: %d\n", num1 + num2);
    printf("Diferença: %d\n", num1 - num2);
    printf("Produto: %d\n", num1 * num2);
    if (num2 != 0) {
        printf("Quociente: %d\n", num1 / num2);
    } else {
        printf("Não é possível dividir por zero.\n");
    }

    return 0;
}


//Questão 33
#include <stdio.h>

int main() {
    float base, altura;

 
    printf("Digite o valor da base do triângulo: ");
    scanf("%f", &base);
    printf("Digite o valor da altura do triângulo: ");
    scanf("%f", &altura);

    
    float area = 0.5 * base * altura;
    printf("A área do triângulo é: %.2f\n", area);

    return 0;
}

//Questão 34
#include <stdio.h>
#include <math.h>

int main() {
    float raio;

   
    printf("Digite o raio da circunferência: ");
    scanf("%f", &raio);

    
    float perimetro = 2 * M_PI * raio;
    printf("O perímetro da circunferência é: %.2f\n", perimetro);

    return 0;
}

//Questão 35
#include <stdio.h>

int main() {
    float base, altura;

   
    printf("Digite o valor da base do retângulo: ");
    scanf("%f", &base);
    printf("Digite o valor da altura do retângulo: ");
    scanf("%f", &altura);

   
    float perimetro = 2 * (base + altura);
    printf("O perímetro do retângulo é: %.2f\n", perimetro);

    return 0;
}

//Questão 36
#include <stdio.h>

int main() {
    float num1, num2, num3;

    
    printf("Digite três números decimais: ");
    scanf("%f %f %f", &num1, &num2, &num3);

   
    float media = (num1 + num2 + num3) / 3;
    printf("A média aritmética dos números é: %.2f\n", media);

    return 0;
}

//Questão 37
#include <stdio.h>

int main() {
    int idade;

    
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    
    int meses = idade * 12;
    int dias = idade * 365;

    printf("Você viveu aproximadamente %d meses e %d dias.\n", meses, dias);

    return 0;
}

//Questão 38
#include <stdio.h>

int main() {
    float valor_reais, cotacao_dolar;

    
    printf("Digite o valor em reais: ");
    scanf("%f", &valor_reais);
    printf("Digite a cotação do dólar: ");
    scanf("%f", &cotacao_dolar);

    
    float valor_dolares = valor_reais / cotacao_dolar;
    printf("O valor em dólares é: %.2f\n", valor_dolares);

    return 0;
}

//Questão 39
#include <stdio.h>
#include <math.h>

int main() {
    float numero;

   
    printf("Digite um número decimal: ");
    scanf("%f", &numero);

   
    int arredondado = round(numero);
    printf("O número arredondado é: %d\n", arredondado);

    return 0;
}

//Questão 40
#include <stdio.h>

int main() {
    int num1, num2, num3;

    
    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

   
    int resultado = (num1 + num2) * num3;
    printf("O resultado da operação é: %d\n", resultado);

    return 0;
}

//Questão 41
#include <stdio.h>

int main() {
    float celsius;

   
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    
    float fahrenheit = (celsius * 9 / 5) + 32;
    printf("A temperatura em Fahrenheit é: %.2f\n", fahrenheit);

    return 0;
}
