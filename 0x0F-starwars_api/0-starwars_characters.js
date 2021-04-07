#!/usr/bin/node

const request = require('request');
const url = 'https://swapi-api.hbtn.io/api/films/' + process.argv[2];
request(url, { json: true }, (err, res, body) => {
  if (err) { return console.log(err); }
  const charurls = body.characters;
  for (const charindx in charurls) {
    request(charurls[charindx], { json: true }, function (er, res, body) {
      if (er) {
        return console.log(er);
      }
      console.log(body.name);
    });
  }
});
