// COLEÇÃO DE DADOS
const books = 
[
  {
    id: 0,
    title: "Dom Casmurro",
    author: "Machado de Assis",
    year: 1899
  },
  
  {
      id: 1,
      title: "Capitães de Areia",
      author: "Jorge Amado",
      year: 1937
  },
  
  {
      id: 2,
      title:"A Hora da Estrela",
      author:"Clarice Lispector",
      year: 1977
  }
];

//DEFINIÇÃO DE FUNÇÕES
 function createBookCards() {
        const booksRow = document.getElementById('books-row');
        
        books.forEach(book => {
            const bookCol = document.createElement('div');
            bookCol.className = 'col-md-4 book-card';
            
            bookCol.innerHTML = `
                <img src="${book.cover}" alt="${book.title}" class="book-cover">
                <div class="book-info">
                    <h5>${book.title}</h5>
                    <p class="text-muted">${book.author}, ${book.year}</p>
                </div>
            `;
            
            booksRow.appendChild(bookCol);
        });
    }

const listBooks = (list) => {
  const x = books.map(book => `Livro ${book.id+1}: ${book.title} - ${book.author}, ${book.year};`);
  const y = x.join('\n ')
  console.log(y)
}
// a função map acima respeita a IMUTABILIDADE, ou seja, não altera a lista original, cria uma cópia.

const addNewBook = (list) => {
  const title= document.getElementById('title').value
  const author= document.getElementById('author').value
  const year= document.getElementById('year').value
  books.push({id: books.length, title: title, author: author, year: year})
}

const markOldBooks = (cutoffyear) => {
  const x = books.map(book => ({...book, old: (book.year < cutoffyear)}))
  const y= x.filter((i) => book.old === true)
  console.log(x)
}

resultado = console.log()