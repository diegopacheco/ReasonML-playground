let listToString = (list) => {
  let asStrings = List.map(string_of_int, list);
  String.concat(", ", asStrings);
};

let list = [1, 2, 3];
let doubled = List.map(i => i * 2, list);
print_endline(listToString(doubled));