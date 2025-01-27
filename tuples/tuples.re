let pair = (1, "hello");
let triple = ("seven", 8, '9');

let (_, second) = pair;
let (first, _, third) = triple;

print_endline(first);
print_endline(second);
print_endline(String.make(1, third));
