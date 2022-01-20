#include <stdio.h>
#include <locale.h>
#define MAX 61


typedef struct enderecoAlunos
{
    char rua[MAX];
    int numero;
    char bairro[MAX];
    char cidade[MAX];

} enderecoAlunos;

typedef struct Alunos
{
    char nome[MAX];
    char curso[MAX];
    int semestre;
    int dia;
    char mes[MAX];
    int ano;
    enderecoAlunos end;

} Alunos;

void cadastraAluno(Alunos alunos[], int quant);
void exibeDadosAluno(alunos);
void exibeAlunos(Alunos alunos[], int quant);
Alunos alunoMaisAntigo(Alunos alunos [], int qtd);

int main ()
{

    setlocale(LC_ALL, "Portuguese");

    int i, k = 1, quantidade;

    Alunos *alunos = NULL, antigo;

    printf("\n Digite a quantidade de alunos que deseja verificar: \n >>>>> ");
    scanf("%d", &quantidade);

    alunos = (Alunos*)malloc(quantidade * sizeof(Alunos));

    enderecoAlunos end[quantidade];

    cadastraAlunos(alunos, quantidade);
    exibeAlunos(alunos, quantidade);

    antigo = alunoMaisAntigo(alunos, quantidade);

    free(alunos);
    printf("\n ### Aluno MAIS ANTIGO ###: \n ");
    exibeDadosAluno(antigo);

    free(alunos);


    system ("PAUSE");
}

void cadastraAlunos(struct Alunos alunos[], int quant)
{
    int i, k = 1;

    enderecoAlunos end[quant];

    for(i = 0; i < quant; i++)
    {
        fflush(stdin);
        printf("\n Digite o NOME do %dº aluno \n >>>>> ", k);
        gets(alunos[i].nome);

        fflush(stdin);
        printf("\n Digite o CURSO do %dº aluno \n >>>>> ", k);
        gets(alunos[i].curso);

        printf("\n Digite a SEMESTRE do %dº aluno \n >>>>> ", k);
        scanf("%d", &alunos[i].semestre);

        printf("\n Digite o DIA DO NASCIMENTO do %dº aluno \n >>>>> ", k);
        scanf("%f", &alunos[i].dia);

        printf("\n Digite o MÊS DO NASCIMENTO do %dº aluno \n >>>>> ", k);
        scanf("%f", &alunos[i].mes);

        printf("\n Digite o ANO DO NASCIMENTO do %dº aluno \n >>>>> ", k);
        scanf("%f", &alunos[i].mes);

        fflush(stdin);
        printf("\n Digite a RUA do %dº aluno \n >>>>> ", k);
        gets(alunos[i].end.rua);

        printf("\n Digite a NÚMERO da residência do %dº aluno \n >>>>> ", k);
        scanf("%d", &alunos[i].end.numero);

        fflush(stdin);
        printf("\n Digite BAIRRO do %dº aluno \n >>>>> ", k);
        gets(alunos[i].end.bairro);

        fflush(stdin);
        printf("\n Digite a CIDADE do %dº aluno \n >>>>> ", k++);
        gets(alunos[i].end.cidade);

    }

    k = 1;
}

void exibeDadosAluno(Alunos alunos)
{
    int quant;

    printf("Nome: %s - %s - semestre %d \n", alunos.nome, alunos.curso, alunos.semestre);
    printf("Endereco: %s , número %d - Bairro: %s \n ", alunos.end.rua, alunos.end.numero, alunos.end.bairro);

}

void exibeAlunos(Alunos alunos[], int quant)
{
    int i, k = 1;

    printf(" \n ");
    printf("\n ****************************** \n ");
    printf(" Dados dos alunos cadastrados ");
    printf("\n ******************************\n ");

     for(i = 0; i < quant; i++)
     {
        printf("\n### Dados do aluno %d ###\n", k++);
        exibeDadosAluno(alunos[i]);
     }

     k = 1;

     printf("\n\n");
}

Alunos alunoMaisAntigo(Alunos alunos[], int qtd)
{
    int i, quant, maisTempo, maisSemestres;

    maisSemestres = alunos[0].semestre;
    maisTempo = 0;

    for(i = 0; i < quant; i++)
    {
        if (alunos[i].semestre > maisSemestres)
        {
            maisSemestres = alunos[i].semestre;
            maisTempo = i;
        }
    }

    return alunos[maisTempo];
}

