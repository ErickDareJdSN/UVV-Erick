SELECT "Time", COUNT(*) AS vezes_vice
FROM data_camp_brasileiro
WHERE "Posicao" = 2
GROUP BY "Time"
ORDER BY vezes_vice DESC
LIMIT 1;