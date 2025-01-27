let list = [1, 2, 3];
let res = switch (list) {
| [1, 2, ..._rest] => "at least two"
| [1, ..._rest] => "at least one"
| [] => "empty"
| _ => "other"
}
print_endline(res);
