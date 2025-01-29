type person = {
  name: string,
  age: int,
};

let alice = {
  name: "Alice",
  age: 42,
};

let {name, age} = alice;
print_endline(name);
print_int(age);