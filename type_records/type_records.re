module Person = {
  type t = {
    name: string,
    age: int,
  };
};

let alice: Person.t = {
  name: "Alice",
  age: 42,
};

print_endline(alice.name);
print_endline(string_of_int(alice.age));