let x: list(int) = [1, 2, 3];
let y: list(string) = ["one", "two", "three"];

for (i in 0 to 2){
  print_int(List.nth(x, i));
  print_newline();
}

for (i in 0 to 2){
  print_endline(List.nth(y, i));
}