let five: int = 5;
let nine = (five: int) + (4: int);
let add = (x: int, y: int): int => x + y;
let drawCircle = (~_radius: int): string => "hi";

print_int(five);
print_newline();

print_int(nine);
print_newline();

print_int(add(3, 4));
print_newline();

print_string(drawCircle(~_radius=3));
print_newline();
