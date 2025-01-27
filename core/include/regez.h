#include <regex.h>
#include <stdbool.h>
#include <stdalign.h>

const size_t sizeof_regex_t = sizeof(regex_t);
const size_t alignof_regex_t = alignof(regex_t);

// compares a compiled regex against some input
bool isMatch(regex_t *re, char const *input) {
  regmatch_t pmatch[0];
  return regexec(re, input, 0, pmatch, 0) == 0;
}
