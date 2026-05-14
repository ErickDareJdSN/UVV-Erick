SELECT 
    e.nome_empresa,
    COUNT(DISTINCT r.cod_tipo_rocha) AS quantidade_tipos_rocha
FROM empresa e
JOIN empresa_rocha er
    ON e.cod_empresa = er.cod_empresa
JOIN rocha r
    ON er.cod_rocha = r.cod_rocha
GROUP BY e.cod_empresa, e.nome_empresa
HAVING COUNT(DISTINCT r.cod_tipo_rocha) > 5
ORDER BY quantidade_tipos_rocha DESC;