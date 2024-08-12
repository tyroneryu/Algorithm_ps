def count_distinct_substrings(S):
    substrings = set()
    
    for i in range(len(S)):
        for j in range(i + 1, len(S) + 1):
            substrings.add(S[i:j])

    return len(substrings)

S = input().strip()

print(count_distinct_substrings(S))