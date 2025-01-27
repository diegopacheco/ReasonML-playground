let arrayA = [| 1, 2, 3 |];
let max(array) = Array.fold_left(
  (result, item) => item > result ? item : result,
  0,
  array,
);

let res = max(arrayA);
print_int(res);

let combined = Array.append(arrayA, arrayA);
for (i in 0 to 5){
  print_int(combined[i]);
  print_newline();
}

let squares = Array.init(5, i => i * i);
for (i in 0 to 4){
  print_int(squares[i]);
  print_newline();
}