type animal =
  | Cat
  | Dog
  | Horse
  | Snake;

let interact = (animal) => {
  switch (animal) {
  | Cat => "pet"
  | Dog => "throw ball"
  | Horse => "ride"
  | Snake => "run away"
  };
};

let cat = Cat;
let dog = Dog;
let horse = Horse;
let snake = Snake;

print_string(interact(cat));
print_newline();

print_string(interact(dog));
print_newline();

print_string(interact(horse));
print_newline();

print_string(interact(snake));
print_newline();