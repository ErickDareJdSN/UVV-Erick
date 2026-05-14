SELECT  
    r.nome_rocha,
    tr.nome_tipo_rocha,
    r.valor_venda - r.valor_compra AS lucro
FROM rocha r
JOIN tipo_rocha tr
    ON r.cod_tipo_rocha = tr.cod_tipo_rocha
ORDER BY lucro DESC
LIMIT 3;