SELECT 
    c.nome_cor,
    COUNT(DISTINCT r.cod_tipo_rocha) AS quantidade_tipos_rocha
FROM rocha r
JOIN cor c
    ON r.cod_cor = c.cod_cor
GROUP BY c.nome_cor
HAVING COUNT(DISTINCT r.cod_tipo_rocha) > 2
ORDER BY quantidade_tipos_rocha DESC;