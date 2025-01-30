type t = A | B | C;

let x = A;
let y = B;
let z = C;

let result =
  switch (x) {
  | A => "zero"
  | B => "one"
  | C => "two"
  };

print_endline(result);

// Use y and z to avoid warnings
ignore(y);
ignore(z);