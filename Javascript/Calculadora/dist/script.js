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
    case '^': return num1 ** num2;
    default: return 0;
  }
}

const send= () => {
  let num1, num2, operadorAtual, operadorAntigo;
  
  const separadores= /([+\-^*/])/;
  
  const expression= visor.querySelector("h1").textContent.split(separadores).filter(Boolean);
  
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

document.addEventListener('keydown', function(event) {
  switch(true){
    case event.key === 'Control': typer('00'); event.preventDefault(); break;
    case event.key === '0': typer('0'); break;
    case event.key === '1': typer('1'); break;
    case event.key === '2': typer('2'); break;
    case event.key === '3': typer('3'); break;
    case event.key === '4': typer('4'); break;
    case event.key === '5': typer('5'); break;
    case event.key === '6': typer('6'); break;
    case event.key === '7': typer('7'); break;
    case event.key === '8': typer('8'); break;
    case event.key === '9': typer('9'); break;
    case event.key === ';':typer('^'); break;
    case event.key === '.': typer('*'); break;
    case event.key === '/': typer('/'); event.preventDefault(); break;
    case event.key === '-': typer('-'); break;
    case event.key === '+': typer('+'); break;
    case event.key === 'Backspace': deleteChar(); break;
    case event.key === 'Delete': clearVisor(); break;
    case event.key === 'Enter': send(); break;
  }
});