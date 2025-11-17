const visor = document.getElementById("visor");

const typer = (btn) => {
  if (visor.querySelector("h2").textContent !== "") {
    visor.querySelector("h2").textContent = "";
    visor.querySelector("h1").textContent += btn;
  } else {
    visor.querySelector("h1").textContent += btn;
  }
};
  
const clearVisor = () => {
  visor.querySelector("h1").textContent = "";
  visor.querySelector("h2").textContent = "";
}
  
const deleteChar = () => visor.querySelector("h1").textContent = visor.querySelector("h1").textContent.slice(0, -1);

const operate= (num1, operador, num2) => {
  switch(operador){
    case '+': return num1 + num2;
    case '-': return num1 - num2;
    case '*': return num1 * num2;
    case '/': return num1 / num2;
    default: return 0;
  }
}

const send= () => {
  let num1, num2, operadorAtual, operadorAntigo;
  
  separadores1= /([+\-*/])/;
  
  const expression= visor.querySelector("h1").textContent.split(separadores1).filter(Boolean);
  
  for (let i=0; i < expression.length; i++) {
    
      // Se indíce é par então número
      if (i % 2 === 0) {

        // Se num1 já estiver definido 
        if (typeof num1 !== 'undefined') {

          num2 = parseFloat(expression[i]) // então define num2

        } else {  // Se num1 não estiver definido 

          num1 = parseFloat(expression[i]) // então define num1

        }   

      } else {  // Índice ímpar então operadorAtual

        // Se operadorAtual já estiver definido
        if (typeof operadorAtual !== 'undefined') {

          operadorAntigo = operadorAtual; // Então o atual vira o antigo

          operadorAtual = expression[i]; // E atualiza o valor do atual

        } else { // Se não estiver definido

          operadorAtual = expression[i]; // Então defina o atual como i

        }
      }

        // Se tudo estiver definido
      if (typeof num1 !== 'undefined' && 
          typeof num2 !== 'undefined' && 
          typeof operadorAntigo !== 'undefined') {
          num1 = operate(num1, operadorAntigo, num2); //Realiza operação
          num2 = undefined; // Reseta para próxima operação
        }

      if (typeof num2 !== 'undefined' && operadorAtual) {
        num1 = operate(num1, operadorAtual, num2);
      }

    }
  console.log(num1);
  clearVisor();
  visor.querySelector("h2").textContent += '= ' + num1;
};