SELECT e.id "ID evento",
e.data "Data",
e.descricao "Descrição", 
te.nome "Tipo evento"
FROM eventos e
INNER JOIN tipos_eventos te ON te.id = e.tipo_evento_id