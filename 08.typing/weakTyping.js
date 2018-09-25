/* In general, JS is weakly typed. 
 * There is no straightforward way to introduce semantics to the following.
 * I could put things into appropriate classes/objects that enforce semantics by keeping data private and making public methods.
 */
let cats = 2;
let jobs = 3;
let reservations = 4;

let dollars = cats * jobs;

if (reservations == dollars) jobs = cats / 5;

console.log("jobs = " + jobs); // Note type coercion.