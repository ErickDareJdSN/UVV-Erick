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
