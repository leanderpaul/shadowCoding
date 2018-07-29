var express = require('express');
var router = express.Router();
var fs = require('fs');

router.get('/*', function(req, res, next) {
  fs.readFile("./public/html/code.html",function(err,data){
    res.writeHead(200,{'content-type':'text/html'});
    res.write(data);
    res.end();
  });
});


module.exports = router;
