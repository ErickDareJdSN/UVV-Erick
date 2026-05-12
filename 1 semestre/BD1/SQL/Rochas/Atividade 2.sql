SELECT * FROM rocha

SELECT * FROM cor

SELECT c.cod_cor, c.nome_cor,
COUNT (*) AS rochas
FROM rocha r
JOIN cor c
ON r.cod_cor = c.cod_cor
GROUP BY c.cod_cor, c.nome_cor
ORDER by rochas DESC
LIMIT 1;

