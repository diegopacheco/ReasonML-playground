type person = {name: string};

let hello1 = (person) => {
  print_endline("Hello " ++ person.name);
};

let hello2 = ({name}) => {
  print_endline("Hello " ++ name);
};

let hello3 = ({name: legalName}) => {
  print_endline("Hello " ++ legalName);
};

// Use the hello functions
let person1 = {name: "Alice"};
hello1(person1);
hello2(person1);
hello3(person1);