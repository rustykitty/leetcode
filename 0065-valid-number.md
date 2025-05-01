# 65. Valid Number

## Approach

I used the regular expression shown below:

```regex
[\+-]?(?:\d+\.?|(\d+)?\.\d+)(?:[Ee][\+-]?\d+)?
```

### Breakdown of Regex

`[\+-]?` - an optional plus (`+`) or minus (`-`) sign
`(?:\d+\.?|(\d+)?\.\d+)` - the digits, matches one of either:
- `\d+\.?` - at least one numeric digit and optionally a following decimal dot (e.g. `123`, `123.`)
- `(\d+)?\.\d+` - a decimal dot and at least one numeric digit, optionally preceded by digits (e.g. `0.33`, `.33`)
`(?:[eE][\+-]?\d+)?` - the exponent:
- `[eE]` matches either uppercase or lowercase `e`
- `[\+-]?` - see above
- `\d+` - at least one numeric digit
- the `?` at the end makes it optional
