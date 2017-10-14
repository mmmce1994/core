Shared Libraries
================

## goldbitconsensus

The purpose of this library is to make the verification functionality that is critical to Goldbit's consensus available to other applications, e.g. to language bindings.

### API

The interface is defined in the C header `goldbitconsensus.h` located in  `src/script/goldbitconsensus.h`.

#### Version

`goldbitconsensus_version` returns an `unsigned int` with the the API version *(currently at an experimental `0`)*.

#### Script Validation

`goldbitconsensus_verify_script` returns an `int` with the status of the verification. It will be `1` if the input script correctly spends the previous output `scriptPubKey`.

##### Parameters
- `const unsigned char *scriptPubKey` - The previous output script that encumbers spending.
- `unsigned int scriptPubKeyLen` - The number of bytes for the `scriptPubKey`.
- `const unsigned char *txTo` - The transaction with the input that is spending the previous output.
- `unsigned int txToLen` - The number of bytes for the `txTo`.
- `unsigned int nIn` - The index of the input in `txTo` that spends the `scriptPubKey`.
- `unsigned int flags` - The script validation flags *(see below)*.
- `goldbitconsensus_error* err` - Will have the error/success code for the operation *(see below)*.

##### Script Flags
- `goldbitconsensus_SCRIPT_FLAGS_VERIFY_NONE`
- `goldbitconsensus_SCRIPT_FLAGS_VERIFY_P2SH` - Evaluate P2SH ([BIP16](https://github.com/goldbit/bips/blob/master/bip-0016.mediawiki)) subscripts
- `goldbitconsensus_SCRIPT_FLAGS_VERIFY_DERSIG` - Enforce strict DER ([BIP66](https://github.com/goldbit/bips/blob/master/bip-0066.mediawiki)) compliance

##### Errors
- `goldbitconsensus_ERR_OK` - No errors with input parameters *(see the return value of `goldbitconsensus_verify_script` for the verification status)*
- `goldbitconsensus_ERR_TX_INDEX` - An invalid index for `txTo`
- `goldbitconsensus_ERR_TX_SIZE_MISMATCH` - `txToLen` did not match with the size of `txTo`
- `goldbitconsensus_ERR_DESERIALIZE` - An error deserializing `txTo`

### Example Implementations
- [NGoldbit](https://github.com/NicolasDorier/NGoldbit/blob/master/NGoldbit/Script.cs#L814) (.NET Bindings)
- [node-libgoldbitconsensus](https://github.com/bitpay/node-libgoldbitconsensus) (Node.js Bindings)
- [java-libgoldbitconsensus](https://github.com/dexX7/java-libgoldbitconsensus) (Java Bindings)
- [goldbitconsensus-php](https://github.com/Bit-Wasp/goldbitconsensus-php) (PHP Bindings)
