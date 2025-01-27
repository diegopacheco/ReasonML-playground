let reversed(list) = List.rev(list);

let lista = [1, 2, 3, 4, 5, 6];
let res = reversed(lista);

print_endline(String.concat(", ", List.map(string_of_int, res)));
