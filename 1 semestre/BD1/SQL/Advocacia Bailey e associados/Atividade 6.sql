'6. Corrigir relacionamento opcional: documentos.caso_id permite NULL
Tarefa:
Atualizar registros NULL com um caso válido
Alterar coluna para NOT NULL
'

SELECT * FROM documentos

SELECT id FROM casos LIMIT 1;

UPDATE documentos
SET caso_id = 1
WHERE caso_id IS NULL;

ALTER TABLE documentos
ALTER COLUMN caso_id SET NOT NULL;