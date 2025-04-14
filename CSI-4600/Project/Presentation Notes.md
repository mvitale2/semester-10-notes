# Slide 15
- Upon clicking the record a voice message button, the browser asks the user for permission to use their microphone. This feature won't work without microphone access.
- The user can then record a message. Upon pressing stop recording, the app displays a preview of the voice message. If the page refreshes or if the user chooses to record another message, this message gets deleted.
- The user can send the message once they enter a password, which is used to encrypt the audio file. Upon clicking send message, the audio message's id is generated. This allows us to create a link to each individual audio message, which can only be accessed by the password set for each one. 
- Currently, there is no method in our code to detect the size of the file, but Supabase does not allow uploads exceeding 50 MB. It will likely throw an error in the app if the file is greater than that. 
# Slide 16
## PBKDF2 (Password-Based Key Derivation Function 2)
- **Purpose**: Derives a cryptographic key from a passphrase and a salt.
- **How It Works**:
    - The passphrase is combined with a randomly generated salt.
    - The function applies a hashing algorithm (`SHA-256` in this case) repeatedly (`100,000` iterations) to make brute-force attacks more difficult.
    - The derived key is used for encryption and decryption.
- **Why Salt?**:
    - The salt ensures that even if two users use the same passphrase, their derived keys will be different.
- **Key Properties**:
    - Algorithm: `PBKDF2`
    - Hash Function: `SHA-256`
    - Iterations: `100,000`
    - Output: A 256-bit key for AES-GCM.
## AES-GCM (Advanced Encryption Standard - Galois/Counter Mode)
- **Purpose**: Encrypts the audio data securely.
- **How It Works**:
    - AES is a symmetric encryption algorithm, meaning the same key is used for both encryption and decryption.
    - GCM (Galois/Counter Mode) is a mode of operation for AES that provides:
        - **Confidentiality**: Encrypts the data.
        - **Integrity**: Ensures the data has not been tampered with.
    - A randomly generated **IV (Initialization Vector)** is used to ensure that encrypting the same data multiple times produces different ciphertexts.
- **Key Properties**:
    - Algorithm: `AES-GCM`
    - Key Length: `256 bits`
    - IV Length: `12 bytes` (96 bits)
    - Output: Encrypted ciphertext and an authentication tag (used for integrity verification).
## Base64 Encoding
- **Purpose**: Encodes the [salt](vscode-file://vscode-app/c:/Users/skull/AppData/Local/Programs/Microsoft%20VS%20Code/resources/app/out/vs/code/electron-sandbox/workbench/workbench.html) and [iv](vscode-file://vscode-app/c:/Users/skull/AppData/Local/Programs/Microsoft%20VS%20Code/resources/app/out/vs/code/electron-sandbox/workbench/workbench.html) into a string format for storage or transmission.
- **How It Works**:
    - Converts binary data (e.g., [Uint8Array](vscode-file://vscode-app/c:/Users/skull/AppData/Local/Programs/Microsoft%20VS%20Code/resources/app/out/vs/code/electron-sandbox/workbench/workbench.html)) into a text-friendly format using [btoa](vscode-file://vscode-app/c:/Users/skull/AppData/Local/Programs/Microsoft%20VS%20Code/resources/app/out/vs/code/electron-sandbox/workbench/workbench.html).
    - This ensures compatibility with systems that expect text-based data
## Considerations
1. **Strong Passphrase**:
    - The security of the encryption depends heavily on the strength of the passphrase.
2. **Random Salt and IV**:
    - The use of random salt and IV ensures that even if the same passphrase is used, the output will be different.
3. **PBKDF2 Iterations**:
    - `100,000` iterations provide a good balance between security and performance.
# Slide 17
- Supabase URL and private key are stored in environment variables so that the app can securely access the database. 
- Administrators can see all files uploaded, but cannot do anything with them since they do not know the password.
- All audio files have an id associated with them so that the proper salt and iv values can be pulled for decryption. 
# Slide 18
- Netlify hosts the current version of TL.
- Environment variables are stored securely in Netlify.
- WebRTC voice chat is currently broken.
# Slide 19
- Paying for another online service to host our server for WebRTC would make the process of implementing it much easier.
- Implementing a mechanism to periodically clean out audio messages inside Supabase would ensure that we do not exceed the storage limit. 
- The main purpose of TL is to enable voice communication without account barriers, but that makes user discovery difficult. Adding the ability to authenticate users that choose to make an account would allow us to provide more features like online/offline indicators and archived messaging. 