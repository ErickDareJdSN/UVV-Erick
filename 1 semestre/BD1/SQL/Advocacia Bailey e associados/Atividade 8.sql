'8. Transformar relacionamento em tabela própria
Problema: telefone fixo em várias tabelas
Tarefa:
Criar tabela telefones:
id
numero
cliente_id (nullable)
pessoa_id (nullable)
Migrar dados de:
clientes.telefone
pessoas.telefone
Remover colunas antigas
'

CREATE TABLE telefones(
id SERIAL NOT NULL,
numero VARCHAR(15) NOT NULL,
cliente_id INT,
pessoa_id INT,
CONSTRAINT pk_telefones PRIMARY KEY (id),
CONSTRAINT fk_telefones_clientes
FOREIGN KEY (cliente_id) REFERENCES clientes(id),
CONSTRAINT fk_telefones_pessoas
FOREIGN KEY (pessoa_id) REFERENCES pessoas(id)
);

SELECT * FROM telefones

INSERT INTO telefones(numero, cliente_id)
SELECT telefone, id
FROM clientes
WHERE telefone is NOT NULL;

INSERT INTO telefones(numero, pessoa_id)
SELECT telefone, id
FROM pessoas
WHERE telefone IS NOT NULL;

ALTER TABLE clientes
DROP COLUMN telefone;

ALTER TABLE pessoas
DROP COLUMN telefone
