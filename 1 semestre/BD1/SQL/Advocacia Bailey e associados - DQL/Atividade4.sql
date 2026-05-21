SELECT d.caso_id AS "Número caso", COUNT(1) AS "Quantidade documentos"
FROM documentos d
INNER JOIN casos c ON c.numero = d.caso_id
GROUP BY "Número caso"
ORDER BY "Quantidade documentos" DESC;
