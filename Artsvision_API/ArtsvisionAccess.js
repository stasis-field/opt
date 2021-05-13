fetch('https://av2.artsvision.net/api/getMetadata/?apikey=cdd6cd11274')
  .then(response => {
    return response.json()
  })
  .then(data => {
    // Work with JSON data here
    console.log(data)
  })
  .catch(err => {
    // Do something for an error here
  })