'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
	return string.trim();
    });

    main();
});

function readLine() {
    return inputString[currentLine++];
}

/**** Ignore above this line. ****/

function main() {
    console.log("You entered the following text in the Input box:");

    const input = readLine();
    console.log(input);
}
