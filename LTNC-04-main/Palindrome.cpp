function isPalindrome(s) {
  for (int i = 0, j = s.length - 1; i < j; i++, j--) {
    if (s[i] !== s[j]) return false;
  }
  return true;
}

function palindromeIndex(s) {
  for (int i = 0, j = s.length - 1; i < j; i++, j--) {
    if (s[i] !== s[j]) {
      if (isPalindrome(s.substring(i + 1, j + 1))) return i;
    }
  }
  return -1;
}
