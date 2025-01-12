let n = 4;
for (let i = 0; i < n; i++) {
	let row = "";
	if (i === 0 || i === n - 1) {
		for (let j = 0; j < n; j++) {
			row += "*";
		}
	} else {
		for (let j = 0; j < n; j++) {
			if (j === 0 || j === n - 1) {
				row += "*";
			} else {
				row += " ";
			}
		}
	}
	console.log(row);
}
