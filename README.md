# NIFTy Messenger

Welcome to NIFTy Messenger!  We here at NIFT are dedicated to getting your messages to only every person to which you intend them to send.

## Front Matter

This project is currently in development and incomplete.  As a result it will change often.

### Contribution guidelines

Contributors to ñIFTy Messenger should be aware that any and all code to be merged into a release branch is subject to review by NIFT members.

## Generating Python Codec

Python codec can be generated using [google's protobuf](https://developers.google.com/protocol-buffers/):

```shell
$ protoc --python_out=./src-gen/ message.proto
```

The dependencies for the generated code are stored in `requirements.txt` in `src-gen` directory.
