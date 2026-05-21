SELECT c.numero AS "Número caso",
p.nome AS "Nome Pessoa",
pap.nome AS "Papel desempenhado"
FROM casos_pessoas cp
JOIN casos c ON cp.caso_id = c.numero
JOIN pessoas p ON cp.pessoa_id = p.id
JOIN papeis pap ON cp.papel_id = pap.id