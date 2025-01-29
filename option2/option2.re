type person = {
  name: string
}

let login = () =>
  Some({
    name: "Alice"
  });

let alice = login();

let happyBirthday = (user) => {
  switch (user) {
  | Some(person) => "Happy birthday " ++ person.name
  | None => "Please login first"
  };
};

print_endline(happyBirthday(alice));