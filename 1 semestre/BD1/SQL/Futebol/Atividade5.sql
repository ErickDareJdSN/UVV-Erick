SELECT "Time", "ANO"
FROM data_camp_brasileiro
WHERE "Aproveitamento" = 50
AND "Posicao" =(SELECT MIN("Posicao")
FROM data_camp_brasileiro
WHERE "Aproveitamento" =50);