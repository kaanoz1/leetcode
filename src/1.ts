function twoSum(nums: number[], target: number): number[] {
  const cache: Record<number, number> = {};

  for (const [i, el] of nums.entries()) {
    const diff = target - el;

    if (diff in cache) return [cache[diff], i];

    cache[el] = i;
  }
  return [];
}
