type seconds = int;
type timeInterval = (seconds, seconds);

let secs: seconds = 2;
let interval: timeInterval = (3, 5);

print_int(secs);
print_newline();

print_int(fst(interval));
print_newline();

print_int(snd(interval));
print_newline();
