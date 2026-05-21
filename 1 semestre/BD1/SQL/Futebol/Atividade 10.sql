SELECT * FROM data_camp_brasileiro

SELECT "Time" AS "Times RS", ROUND(AVG("Gols pro"), 1) AS Media
FROM data_camp_brasileiro
WHERE "Estados" = 'RS'
  AND "ANO" = 2014
GROUP BY "Time";