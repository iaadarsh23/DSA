let n = 9;
for (let i = 0; i < n; i++) {
	let row = "";
	//printing the spaces
	for (let j = 0; j < n - i - 1; j++) {
		row += " ";
	}
	//printing the stars
	for (let j = 0; j < i * 2 + 1; j++) {
		row += "*";
	}

	//printing the spaces
	for (let j = 0; j < n - i - 1; j++) {
		row += " ";
	}
	console.log(row);
}
