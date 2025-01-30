module Duration = {
  type t = int;
  let fromSeconds = value => value;
  let add = (x, y) => x + y;
};

let fiveSeconds: Duration.t = Duration.fromSeconds(5);
let tenSeconds = Duration.add(fiveSeconds, fiveSeconds);

print_endline(string_of_int(tenSeconds));
print_endline(string_of_int(Duration.add(tenSeconds, tenSeconds)));