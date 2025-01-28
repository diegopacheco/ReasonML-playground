type person = {
  name: string,
  age: int,
};

let alice = {
  name: "Alice",
  age: 42,
};

print_endline("Hello " ++ alice.name ++ 
              " you have: " ++ string_of_int(alice.age) ++ 
              " years old");
