# Capitalise All Characters In A Line

Convert every lowercase letter in a line of input to uppercase — implemented three different ways, just for fun and to compare approaches.

## Implementations

### 1. Shell one-liner (`uppercase.sh`)

The ultimate minimal version. Standing on the shoulders of giants by calling `tr`:

```sh
tr a-z A-Z
```

**Usage:**

```sh
echo "hello world" | sh uppercase.sh
```

### 2. C bitwise version (`uppercase.c`)

Skips the standard library's `toupper` entirely and uses raw bitwise operations to detect and convert lowercase letters. Readability approaches negative infinity — purely for showing off.

**Compile & run:**

```sh
gcc -o uppercase uppercase.c
echo "hello world" | ./uppercase
```

### 3. Python no-`upper()` version (`uppercase.py`)

Skips the built-in `str.upper()` and manually converts characters using ASCII arithmetic instead.

**Run:**

```sh
echo "hello world" | python uppercase.py
```

## Comparison

| Version | Language | Notes |
|---------|----------|-------|
| `uppercase.sh` | Shell | One line, peak engineering minimalism |
| `uppercase.c` | C | Bitwise trickery, avoids standard library calls |
| `uppercase.py` | Python | Manual ASCII math instead of built-ins |

All three behave identically: read text from standard input, convert lowercase letters (`a-z`) to uppercase (`A-Z`), leave everything else untouched, and write the result to standard output.

## License

MIT
