'Questão 01
Informe quais são os tipos de rocha e suas respectivas quantidades que tem lucros maiores que 80 reais de lucro (valor de venda menos o valor de compra).
'

SELECT * FROM rocha

SELECT * FROM tipo_rocha

SELECT t.nome_tipo_rocha,
COUNT (*) AS quantidade_tipo_rocha
FROM rocha r
JOIN tipo_rocha t
ON r.cod_tipo_rocha = t.cod_tipo_rocha
WHERE r.valor_venda - r.valor_compra > 80
GROUP BY t.nome_tipo_rocha
ORDER BY quantidade_tipo_rocha DESC;
