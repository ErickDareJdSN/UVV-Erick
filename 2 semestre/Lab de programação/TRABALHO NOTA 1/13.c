#include <stdio.h>
#include <ctype.h>

void limpa_buffer(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}

int main(void)
{
    char sexo;
    int qtd_homens = 0;
    int qtd_mulheres = 0;
    int qtd_altura_m = 0;
    int qtd_altura_f = 0;
    int i;

    double metros;
    double m_max_altura = 0;
    double f_max_altura = 0;
    double m_avg_altura = 0;
    double f_avg_altura = 0;
    double m_soma_alturas = 0;
    double f_soma_alturas = 0;
    double perc_m_182 = 0;
    double perc_f_182 = 0;

    printf("=== CADASTRO DE PESSOAS ===\n\n");

    for (i = 0; i < 50; i++)
    {
        printf("=== Cadastro da %dª pessoa ===\n\n", i + 1);

        while (1)
        {
            printf("Sexo (M para masculino ou F para feminino): ");

            if (scanf(" %c", &sexo) == 1)
            {
                sexo = toupper((unsigned char)sexo);

                if (sexo == 'M' || sexo == 'F')
                {
                    limpa_buffer();
                    break;
                }
            }

            printf("Erro: digite M para masculino ou F para feminino.\n");
            limpa_buffer();
        }

        while (1)
        {
            printf("Digite a altura da pessoa em metros: ");

            if (scanf("%lf", &metros) == 1 && metros > 0)
            {
                limpa_buffer();
                break;
            }

            printf("Erro: digite uma altura válida, maior que zero.\n");
            limpa_buffer();
        }

        printf("Pessoa cadastrada com sucesso!\n\n");

        switch (sexo)
        {
        case 'M':
            qtd_homens++;
            m_soma_alturas += metros;

            if (metros > m_max_altura)
            {
                m_max_altura = metros;
            }

            if (metros > 1.82)
            {
                qtd_altura_m++;
            }
            break;

        case 'F':
            qtd_mulheres++;
            f_soma_alturas += metros;

            if (metros > f_max_altura)
            {
                f_max_altura = metros;
            }

            if (metros > 1.82)
            {
                qtd_altura_f++;
            }
            break;
        }
    }

    if (qtd_homens > 0)
    {
        m_avg_altura = m_soma_alturas / qtd_homens;
        perc_m_182 = (qtd_altura_m * 100.0) / qtd_homens;
    }

    if (qtd_mulheres > 0)
    {
        f_avg_altura = f_soma_alturas / qtd_mulheres;
        perc_f_182 = (qtd_altura_f * 100.0) / qtd_mulheres;
    }

    printf("=== RESULTADOS ===\n\n");

    if (qtd_homens == 0)
    {
        printf("Nenhum homem cadastrado.\n");
    }
    else
    {
        printf("Altura do homem mais alto: %.2f m\n", m_max_altura);
        printf("Média de altura dos homens: %.2f m\n", m_avg_altura);
        printf("Percentual de homens com mais de 1.82 m: %.2f%%\n", perc_m_182);
    }

    if (qtd_mulheres == 0)
    {
        printf("Nenhuma mulher cadastrada.\n");
    }
    else
    {
        printf("Altura da mulher mais alta: %.2f m\n", f_max_altura);
        printf("Média de altura das mulheres: %.2f m\n", f_avg_altura);
        printf("Percentual de mulheres com mais de 1.82 m: %.2f%%\n", perc_f_182);
    }

    return 0;
}