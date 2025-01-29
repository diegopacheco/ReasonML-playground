type person = {
  name: string,
  age: int,
};

let nobody: option(person) = None;
print_endline("Nobody: " ++ (switch nobody {
  | None => "None"
  | Some(_) => "Some"
}));

let someone: person = {
  name: "John Doe",
  age: 30,
};

print_endline(someone.name);
print_endline(string_of_int(someone.age));