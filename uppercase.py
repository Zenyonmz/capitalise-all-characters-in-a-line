import sys

# Python "Pretending to be Mythical" Version
# Manually converting to uppercase using ASCII code calculations without using the built-in str.upper().

sys.stdout.write(
    ''.join(
        chr(ord(c) - 32) if 'a' <= c <= 'z' else c
        for c in sys.stdin.read()
    )
)
