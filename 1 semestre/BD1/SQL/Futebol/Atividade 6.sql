SELECT "Time", SUM("Gols pro") AS Gols
FROM data_camp_brasileiro
WHERE "Time" = 'Vasco'
GROUP BY "Time";