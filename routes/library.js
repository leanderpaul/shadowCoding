var express = require('express');
var fs = require('fs');
var mysql = require('mysql');
var router = express.Router();

var con = mysql.createConnection({
  host: "localhost",
  user: "webguest",
  password: "webguestpassword",
  database: "shadowcodingdb"
});

con.connect(function(err) {
  if (err) throw err;
  console.log("Connected in library!");
});

router.get('/', function(req, res, next) {
  fs.readFile("./public/html/library.html",function(err,data){
    res.writeHead(200,{'content-type':'text/html'});
    res.write(data);
    res.end();
  });
});

router.get('/all',function(req,res,next){
  con.query("select * from questions", function (err, result, fields) {
    if (err) throw err;
    res.json(result);
  });
});

module.exports = router;
