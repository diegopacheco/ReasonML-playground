let list:list(int) = [1,2,3];
let len:int = List.length(list) - 1;

for (i in 0 to len) {
   print_int(List.nth(list,i));
   print_newline();
}
