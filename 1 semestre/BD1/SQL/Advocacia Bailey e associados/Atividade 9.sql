'9. Criar histórico de casos (sem trigger)
Tarefa:
Criar tabela casos_historico com mesma estrutura de casos
Depois:
Antes de atualizar qualquer caso:
inserir o registro antigo na tabela de histórico
(simulação manual com INSERT + UPDATE)
'

CREATE TABLE casos_historico AS
SELECT *
FROM casos
WHERE FALSE;

SELECT * FROM casos_historico

INSERT INTO casos_historico
SELECT *
FROM casos
WHERE id = 204969;

SELECT * FROM casos

UPDATE casos
SET descricao = 'Finalizado'
WHERE id = 204969;
