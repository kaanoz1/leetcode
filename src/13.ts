function romanToInt(s: string): number {
  const map = new Map<string, number>([
    ["M", 1000],
    ["D", 500],
    ["C", 100],
    ["L", 50],
    ["X", 10],
    ["V", 5],
    ["I", 1],
  ]);

  let value = 0;

  for (let i = 0; i < s.length; i++) {
    const currValue = map.get(s[i]) as number;
    const nextValue = map.get(s[i + 1]) || 0;

    if (currValue < nextValue) value -= currValue;
    else value += currValue;
  }

  return value;
}

console.log(romanToInt("LVIII")); //58
console.log(romanToInt("MCMXCIV")); //1994
console.log(romanToInt("III")); //3
