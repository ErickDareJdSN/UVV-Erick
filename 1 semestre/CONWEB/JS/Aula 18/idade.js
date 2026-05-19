function calcularIdade() {
        const inputAno = document.getElementById("inputAno");
        const resultado = document.getElementById("resultado");

        const anoNascimento = Number(inputAno.value);
        const idade = 2026 - anoNascimento;

        resultado.innerHTML = "Você tem " + idade + " anos.";
      }