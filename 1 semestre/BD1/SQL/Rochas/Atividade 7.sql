SELECT * FROM empresa
SELECT * FROM tipo_servico
SELECT * FROM empresa_rocha

SELECT 
    e.nome_empresa,
    ts.desc_tipo_servico,
    COUNT(DISTINCT r.cod_rocha) AS rochas_a_venda
FROM empresa e
JOIN tipo_servico ts
    ON e.cod_tipo_servico = ts.cod_tipo_servico
JOIN empresa_rocha er
    ON e.cod_empresa = er.cod_empresa
JOIN rocha r
    ON er.cod_rocha = r.cod_rocha
GROUP BY e.nome_empresa, ts.desc_tipo_servico
ORDER BY rochas_a_venda DESC;