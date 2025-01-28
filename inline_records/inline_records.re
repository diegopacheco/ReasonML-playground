type animal =
  | Cat({name: string})
  | Dog({breed: string});

let x = Cat({name: "Fluffy"});
let name = switch (x) {
  | Cat({name}) => name
  | Dog(_) => "Unknown"
};

let name2 = switch (Dog({breed: "Poodle"})) {
  | Cat({name}) => name
  | Dog(_) => "Unknown"
};

print_endline(name);
print_endline(name2);