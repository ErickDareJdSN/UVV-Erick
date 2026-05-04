CREATE TABLE documentos_conteudo (
    id INT NOT NULL,
    conteudo TEXT NOT NULL,
    CONSTRAINT pk_documentos_conteudo PRIMARY KEY (id)
);

INSERT INTO documentos_conteudo (id, conteudo)
SELECT id, conteudo
FROM documentos
WHERE conteudo IS NOT NULL;

ALTER TABLE documentos
ADD COLUMN conteudo_id INT;

UPDATE documentos
SET conteudo_id = id
WHERE conteudo IS NOT NULL;

ALTER TABLE documentos
ADD CONSTRAINT fk_documentos_conteudo
FOREIGN KEY (conteudo_id) REFERENCES documentos_conteudo(id);

ALTER TABLE documentos
DROP COLUMN conteudo;