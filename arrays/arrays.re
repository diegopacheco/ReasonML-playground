let arrayA = [| 1, 2, 3 |];
let first = arrayA[0];
let second = arrayA[1];

for (i in 0 to 2){
  print_int(arrayA[i]);  
  print_newline();
}

print_int(first);
print_newline();
print_int(second);
