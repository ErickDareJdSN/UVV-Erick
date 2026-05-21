SELECT * FROM data_camp_brasileiro

SELECT "Time", SUM("Gols Contra") AS "Gols Contra"
FROM data_camp_brasileiro
WHERE "Time" = 'Cruzeiro'
GROUP BY "Time"