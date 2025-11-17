// Esconde a navbar ao rolar para baixo e mostra ao subir
let prevScrollPos = window.pageYOffset;
const navbar = document.getElementById("mainNavbar");

window.onscroll = function () {
  const currentScrollPos = window.pageYOffset;
  if (prevScrollPos > currentScrollPos) {
    navbar.style.top = "0";
  } else {
    navbar.style.top = "-80px"; // ajusta conforme a altura da navbar
  }
  prevScrollPos = currentScrollPos;
};
