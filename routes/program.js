var express = require('express');
var router = express.Router();
var fs = require('fs');
var mysql = require('mysql');

var con = mysql.createConnection({
  host: "localhost",
  user: "webguest",
  password: "webguestpassword",
  database: "shadowcodingdb"
});

con.connect(function(err) {
  if (err) throw err;
  console.log("Connected in program!");
});

router.get("/*",function(req,res,next) {
    var pid = req.url.substr(2);
    con.query("select * from code where id = " + pid, function(err,result,fields) {
        if(err) throw err;
        res.json(result);
    });
});

module.exports = router;