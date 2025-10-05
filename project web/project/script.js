async function loadArtworks() {
  const res = await fetch("artworks.json");
  const artworks = await res.json();

  const app = document.getElementById("app");
  app.innerHTML = "<h2>All Artworks</h2>";

  const container = document.createElement("div");
  container.className = "artworks";

  artworks.forEach(a => {
    const card = document.createElement("div");
    card.className = "artwork-card";

    card.innerHTML = `
      <img src="${a.image}" alt="${a.title}">
      <h3>${a.title}</h3>
      <p><strong>Artist:</strong> ${a.artist}</p>
      <p>${a.description}</p>
      <p><strong>Price:</strong> ${a.price}</p>
    `;

    container.appendChild(card);
  });

  app.appendChild(container);
}

window.onload = loadArtworks;
