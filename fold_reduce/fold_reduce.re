let max = (initialValue, list) =>
  List.fold_left(
    (result, item) => item > result ? item : result,
    initialValue,
    list,
  );

print_endline(string_of_int(max(0, [1, 2, 3, 4, 5]))); // 5