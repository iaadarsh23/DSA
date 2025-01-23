let n = 9;

// Upper part of the diamond
for (let i = 0; i < n; i++) {
	let row = "";
	// Printing the spaces
	for (let j = 0; j < n - i - 1; j++) {
		row += " ";
	}
	// Printing the stars
	for (let j = 0; j < i * 2 + 1; j++) {
		row += "*";
	}
	console.log(row);
}

// Lower part of the diamond
for (let i = 1; i < n; i++) {
	let row = "";
	// Printing the spaces
	for (let j = 0; j < i; j++) {
		row += " ";
	}
	// Printing the stars
	for (let j = 0; j < (n - i) * 2 - 1; j++) {
		row += "*";
	}
	console.log(row);
}

