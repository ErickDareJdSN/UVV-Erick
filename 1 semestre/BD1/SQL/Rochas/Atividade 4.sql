SELECT 
    c.nome_cor,
    COUNT(*) AS quantidade_rochas
FROM rocha r
JOIN cor c
    ON r.cod_cor = c.cod_cor
GROUP BY c.nome_cor
ORDER BY quantidade_rochas DESC