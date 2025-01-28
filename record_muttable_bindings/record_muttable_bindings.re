type mutablePerson = {
  name: string,
  mutable age: int,
};

let happyBirthday = (person) => {
  person.age = person.age + 1;
};

let person = {name: "Alice", age: 30};
happyBirthday(person);

print_endline("Happy birthday, " ++ person.name ++ "!");
print_endline("You are now " ++ string_of_int(person.age) ++ " years old.");