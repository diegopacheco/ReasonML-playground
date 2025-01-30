type ref('a) = {
  mutable contents: 'a,
};

let x = ref(10);
x := x^ + 10;
x := x^ + 3;

let x = {contents: 10};
x.contents = x.contents + 10;
x.contents = x.contents + 3;

print_endline(string_of_int(x.contents));