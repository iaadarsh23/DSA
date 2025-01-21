let arr = [10, 20, 50, 60, 90];
let key = 90;
// for (let i = 0; i < arr.length; i++) {
// 	if (arr[i] === key) {
// 		console.log(`element found at ${i}`);
// 	} else if (arr[i] !== key) {
// 		continue;
// 	} else {
// 		console.log("element not found");
// 	}
// }
let index = arr.findIndex((element) => element === key);
if (index !== -1) {
	console.log(`element found at ${index}`);
} else {
	console.log("element not found");
}
