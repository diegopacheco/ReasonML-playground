let listA = [1, 2, 3];
let listB = [0, ...listA];
let listC = [-1, 0, ...listA];
let listD = listA @ listB @ [7, 8];

let listToString = (list) => {
  let asStrings = List.map(string_of_int, list);
  String.concat(", ", asStrings);
};

print_endline(listToString(listA));
print_endline(listToString(listB));
print_endline(listToString(listC));
print_endline(listToString(listD));