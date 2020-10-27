"use strict"
const readline = require('readline').createInterface({
  input: process.stdin,
  output: process.stdout
});

// multi line input
const linesAmount = 3 	// total of lines to read
let lineNumber = 0
let il = [] 			// input lines values

readline.on('line', line => {
	//console.log(line);
	il.push(line)
	lineNumber++
	//console.log('input lines: ' + il)
	if(lineNumber == linesAmount){
		readline.close()
		mainFn() // call main program
	}

});

const mainFn = () => {
	console.log("stored lines:",il)
}
