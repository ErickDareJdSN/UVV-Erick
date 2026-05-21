SELECT * FROM data_camp_brasileiro

SELECT "Time", "Saldo Gols"
FROM data_camp_brasileiro
WHERE "Posicao" = 1
ORDER BY "Saldo Gols" DESC
LIMIT 1;