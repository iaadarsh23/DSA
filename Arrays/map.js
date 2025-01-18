//all elements to binary
// const arr = [1, 2, 3, 4, 5];
// const output = arr.map((x) => {
//     return x.toString(2);
// });
// console.log(output);

//. find the macximim of the array
// const arr = [5, 6, 8, 7, 44, 999, 444, 3333, 8888];
// let max = 0;
// for (let i = 0; i < arr.length; i++) {
//     if (arr[i] > max) {
//         max = arr[i];
//     }
// }
// console.log(max);

//using reduce
// const output = arr.reduce((acc, curr) => {
//     if (curr > acc) {
//         acc = curr;
//     }
//     return acc;
// }, 0);
// console.log(output);

//

const users = [
	{
		firstname: "adarsh",
		lastname: "tripathi",
		age: "21",
	},
	{
		firstname: "akanksha",
		lastname: "pathak",
		age: "55",
	},
	{
		firstname: "shubh",
		lastname: "pathak",
		age: "21",
	},
	{
		firstname: "suhani",
		lastname: "Tripathi",
		age: "90",
	},
	{
		firstname: "vinay",
		lastname: "Tripathi",
		age: "9",
	},
];
// //we want the list of fullname
// const fullName = users.map((name) => {
// 	return name.firstname + name.lastname + " " + name.age;
// });
// console.log(fullName);

// //object of ages
// const simAge = users.reduce((count, curr) => {
// 	if (count[curr.age]) {
// 		count[curr.age] = ++count[curr.age];
// 	} else {
// 		count[curr.age] = 1;
// 	}
// 	return count;
// }, {});
// console.log(simAge);

//first name of all the people whose age is less than 30
const child = users
	.filter((name1) => name1.age < 30)
	.map((name1) => name1.firstname);

console.log(child);
