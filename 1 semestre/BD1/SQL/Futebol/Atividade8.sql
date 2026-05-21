SELECT * FROM data_camp_brasileiro

SELECT "Time", "Gols Contra"
FROM data_camp_brasileiro
WHERE "Posicao" = 1
ORDER BY "Gols Contra" DESC
LIMIT 1;