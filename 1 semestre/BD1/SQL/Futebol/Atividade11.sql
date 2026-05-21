SELECT * FROM data_camp_brasileiro

SELECT "Time" AS "Times RJ", ROUND(AVG("Gols pro"), 1) AS Media
FROM data_camp_brasileiro
WHERE "Estados" = 'RJ'
AND "ANO" = 2012
GROUP BY "Time";