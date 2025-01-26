let c = 'a';
let s = String.make(1, c);
print_endline(s);

let charArray = [| 'H', 'e', 'l', 'l', 'o' |];
let s = String.init(5, i => charArray[i]);
print_endline(s);