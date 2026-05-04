'7. Separar escolaridade (normalização)
Tarefa:
Criar tabela escolaridades (id, descricao)
Inserir valores distintos de pessoas
Adicionar escolaridade_id em pessoas
Atualizar dados
Remover coluna antiga
'

SELECT * FROM pessoas

CREATE TABLE escolaridades(
id SERIAL NOT NULL,
descricao TEXT NOT NULL,
CONSTRAINT pk_escolaridades PRIMARY KEY (id),
CONSTRAINT un_escolaridades UNIQUE (descricao)
);

INSERT INTO escolaridades (descricao)
SELECT DISTINCT escolaridade
FROM pessoas
WHERE escolaridade IS NOT NULL;

ALTER TABLE pessoas
ADD column escolaridade_id INT;

UPDATE pessoas
SET escolaridade_id = escolaridades.id
FROM escolaridades
WHERE pessoas.escolaridade = escolaridades.descricao;
