class Solution:
    def addBinary(self, a: str, b: str) -> str:
        result = ""

        max_str, min_str = (a, b) if len(a) > len(b) else (b, a)
        diff = len(max_str) - len(min_str)

        carry = False
        i = len(max_str) - 1

        while i >= 0:
            el_a = int(max_str[i])
            el_b = int(min_str[i - diff]) if (i - diff) >= 0 else 0

            if el_a == el_b:
                result = ('1' if carry else '0') + result
                carry = el_a == 1
            else:
                result = ('0' if carry else '1') + result

            i -= 1

        if carry:
            result = "1" + result

        return result
        