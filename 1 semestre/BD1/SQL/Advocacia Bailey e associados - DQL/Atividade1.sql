SELECT c.numero as "Número caso",
c.descricao "Decrição caso",
c.data_abertura "Data abertura",
cli.nome AS "Nome cliente"
FROM casos c
JOIN clientes cli ON c.cliente_id = cli.id