Name: Michael Vitale
NetId: mvitale2

```python
import hashlib

def hash_string(input_string):
    # Declare the hash object
    sha256 = hashlib.sha256()
    # Enter the string to be hashed
    sha256.update(input_string.encode('utf-8'))
    # Generate the hash
    hash_hex = sha256.hexdigest()
    return hash_hex

input = input("Enter in a message to be encrypted\n> ")
hash_result = hash_string(input)
print(f"Input string: {input}")
print(f"SHA-256 Hash: {hash_result}")
```
