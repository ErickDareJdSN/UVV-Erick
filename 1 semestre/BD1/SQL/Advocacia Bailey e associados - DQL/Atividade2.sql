SELECT doc.id AS "ID documento",
doc.data AS "Data abertura",
tdoc.nome AS "Tipo documento",
doc.conteudo AS "Conteúdo documento"
FROM documentos doc
JOIN tipos_documentos tdoc ON doc.id = tdoc.id