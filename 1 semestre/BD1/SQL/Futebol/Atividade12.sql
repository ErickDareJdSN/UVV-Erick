SELECT "Time", "ANO", SUM("Derrotas") AS "Derrotas"
FROM data_camp_brasileiro
GROUP BY "Time", "ANO"
ORDER BY "Derrotas" DESC
LIMIT 1;

SELECT "Time", "ANO", "Derrotas"
FROM data_camp_brasileiro
WHERE "Derrotas" = (SELECT MAX("Derrotas")
FROM data_camp_brasileiro)