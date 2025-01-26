type schoolPerson = Teacher | Director | Student(string);

let greeting = person =>
  switch (person) {
  | Teacher => "Hey Professor!"
  | Director => "Hello Director."
  | Student("Richard") => "Still here Ricky?"
  | Student(anyOtherName) => "Hey, " ++ anyOtherName ++ "."
  };

let teacherGreeting = greeting(Teacher);
let directorGreeting = greeting(Director);
let studentGreeting = greeting(Student("Richard"));
let anotherStudentGreeting = greeting(Student("John"));

// print without JS or console.log use reasonml to print

print_endline(teacherGreeting); 
print_endline(directorGreeting);
print_endline(studentGreeting);
print_endline(anotherStudentGreeting);



