/*
 *  bcrypt.h    Cryptographic Next Generation (CNG) functions
 *
 * =========================================================================
 *
 *                          Open Watcom Project
 *
 * Copyright (c) 2004-2016 The Open Watcom Contributors. All Rights Reserved.
 *
 *    This file is automatically generated. Do not edit directly.
 *
 * =========================================================================
 */

#ifndef __BCRYPT_H__
#define __BCRYPT_H__

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file;
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* NT error code data type */
#ifndef _NTSTATUS_DEFINED
#define _NTSTATUS_DEFINED
typedef LONG    NTSTATUS;
typedef LONG    *PNTSTATUS;
#endif

/* Handle data types */
typedef PVOID   BCRYPT_HANDLE;
typedef PVOID   BCRYPT_ALG_HANDLE;
typedef PVOID   BCRYPT_KEY_HANDLE;
typedef PVOID   BCRYPT_HASH_HANDLE;
typedef PVOID   BCRYPT_SECRET_HANDLE;

/* Macro to test for success */
#define BCRYPT_SUCCESS( x ) (((NTSTATUS)(x)) >= 0L)

/* Packing for structures in this file */
#define BCRYPT_OBJECT_ALIGNMENT 16

/* KDF types */
#define BCRYPT_KDF_HASH             L"HASH"
#define BCRYPT_KDF_HMAC             L"HMAC"
#define BCRYPT_KDF_TLS_PRF          L"TLS_PRF"
#define BCRYPT_KDF_SP80056A_CONCAT  L"SP800_56A_CONCAT"

/* KDF buffer types */
#define KDF_HASH_ALGORITHM      0x00000000L
#define KDF_SECRET_PREPEND      0x00000001L
#define KDF_SECRET_APPEND       0x00000002L
#define KDF_HMAC_KEY            0x00000003L
#define KDF_TLS_PRF_LABEL       0x00000004L
#define KDF_TLS_PRF_SEED        0x00000005L
#define KDF_SECRET_HANDLE       0x00000006L
#define KDF_TLS_PRF_PROTOCOL    0x00000007L
#define KDF_ALGORITHMID         0x00000008L
#define KDF_PARTYUINFO          0x00000009L
#define KDF_PARTYVINFO          0x0000000AL
#define KDF_SUPPPUBINFO         0x0000000BL
#define KDF_SUPPPRIVINFO        0x0000000CL

/* KDF flags */
#define KDF_USE_SECRET_AS_HMAC_KEY_FLAG 0x00000001L

/* Authenticated cipher mode information version number */
#define BCRYPT_AUTHENTICATED_CIPHER_MODE_INFO_VERSION   1L

/* Authentication modes */
#define BCRYPT_AUTH_MODE_CHAIN_CALLS_FLAG   0x00000001L
#define BCRYPT_AUTH_MODE_IN_PROGRESS_FLAG   0x00000002L

/* String properties */
#define BCRYPT_OPAQUE_KEY_BLOB          L"OpaqueKeyBlob"
#define BCRYPT_KEY_DATA_BLOB            L"KeyDataBlob"
#define BCRYPT_AES_WRAP_KEY_BLOB        L"Rfc3565KeyWrapBlob"
#define BCRYPT_OBJECT_LENGTH            L"ObjectLength"
#define BCRYPT_ALGORITHM_NAME           L"AlgorithmName"
#define BCRYPT_PROVIDER_HANDLE          L"ProviderHandle"
#define BCRYPT_CHAINING_MODE            L"ChainingMode"
#define BCRYPT_BLOCK_LENGTH             L"BlockLength"
#define BCRYPT_KEY_LENGTH               L"KeyLength"
#define BCRYPT_KEY_OBJECT_LENGTH        L"KeyObjectLength"
#define BCRYPT_KEY_STRENGTH             L"KeyStrength"
#define BCRYPT_KEY_LENGTHS              L"KeyLengths"
#define BCRYPT_BLOCK_SIZE_LIST          L"BlockSizeList"
#define BCRYPT_EFFECTIVE_KEY_LENGTH     L"EffectiveKeyLength"
#define BCRYPT_HASH_LENGTH              L"HashDigestLength"
#define BCRYPT_HASH_OID_LIST            L"HashOIDList"
#define BCRYPT_PADDING_SCHEMES          L"PaddingSchemes"
#define BCRYPT_SIGNATURE_LENGTH         L"SignatureLength"
#define BCRYPT_HASH_BLOCK_LENGTH        L"HashBlockLength"
#define BCRYPT_AUTH_TAG_LENGTH          L"AuthTagLength"
#define BCRYPT_PRIMITIVE_TYPE           L"PrimitiveType"
#define BCRYPT_IS_KEYED_HASH            L"IsKeyedHash"
#define BCRYPT_INITIALIZATION_VECTOR    L"IV"
#define BCRYPT_CHAIN_MODE_NA            L"ChainingModeN/A"
#define BCRYPT_CHAIN_MODE_CBC           L"ChainingModeCBC"
#define BCRYPT_CHAIN_MODE_ECB           L"ChainingModeECB"
#define BCRYPT_CHAIN_MODE_CFB           L"ChainingModeCFB"
#define BCRYPT_CHAIN_MODE_CCM           L"ChainingModeCCM"
#define BCRYPT_CHAIN_MODE_GCM           L"ChainingModeGCM"
#define BCRYPT_DH_PARAMETERS            L"DHParameters"
#define BCRYPT_DSA_PARAMETERS           L"DSAParameters"

/* Supported padding types */
#define BCRYPT_SUPPORTED_PAD_ROUTER     0x00000001L
#define BCRYPT_SUPPORTED_PAD_PKCS1_ENC  0x00000002L
#define BCRYPT_SUPPORTED_PAD_PKCS1_SIG  0x00000004L
#define BCRYPT_SUPPORTED_PAD_OAEP       0x00000008L
#define BCRYPT_SUPPORTED_PAD_PSS        0x00000010L

/* Flags for various functions */
#define BCRYPT_PROV_DISPATCH    0x00000001L
#define BCRYPT_BLOCK_PADDING    0x00000001L
#define BCRYPT_PAD_NONE         0x00000001L
#define BCRYPT_PAD_PKCS1        0x00000002L
#define BCRYPT_PAD_OAEP         0x00000004L
#define BCRYPT_PAD_PSS          0x00000008L

/* CNG buffer version */
#define BCRYPTBUFFER_VERSION    0L

/* CNG blob types */
#define BCRYPT_PUBLIC_KEY_BLOB      L"PUBLICBLOB"
#define BCRYPT_PRIVATE_KEY_BLOB     L"PRIVATEBLOB"
#define BCRYPT_RSAPUBLIC_BLOB       L"RSAPUBLICBLOB"
#define BCRYPT_RSAPRIVATE_BLOB      L"RSAPRIVATEBLOB"
#define LEGACY_RSAPUBLIC_BLOB       L"CAPIPUBLICBLOB"
#define LEGACY_RSAPRIVATE_BLOB      L"CAPIPRIVATEBLOB"
#define BCRYPT_RSAFULLPRIVATE_BLOB  L"RSAFULLPRIVATEBLOB"
#define BCRYPT_ECCPUBLIC_BLOB       L"ECCPUBLICBLOB"
#define BCRYPT_ECCPRIVATE_BLOB      L"ECCPRIVATEBLOB"
#define BCRYPT_DH_PUBLIC_BLOB       L"DHPUBLICBLOB"
#define BCRYPT_DH_PRIVATE_BLOB      L"DHPRIVATEBLOB"
#define LEGACY_DH_PUBLIC_BLOB       L"CAPIDHPUBLICBLOB"
#define LEGACY_DH_PRIVATE_BLOB      L"CAPIDHPRIVATEBLOB"
#define BCRYPT_DSA_PUBLIC_BLOB      L"DSAPUBLICBLOB"
#define BCRYPT_DSA_PRIVATE_BLOB     L"DSAPRIVATEBLOB"
#define LEGACY_DSA_PUBLIC_BLOB      L"CAPIDSAPUBLICBLOB"
#define LEGACY_DSA_PRIVATE_BLOB     L"CAPIDSAPRIVATEBLOB"
#define LEGACY_DSA_V2_PUBLIC_BLOB   L"V2CAPIDSAPUBLICBLOB"
#define LEGACY_DSA_V2_PRIVATE_BLOB  L"V2CAPIDSAPRIVATEBLOB"

/* Magic numbers for CNG blobs */
#define BCRYPT_RSAPUBLIC_MAGIC          0x31415352L
#define BCRYPT_RSAPRIVATE_MAGIC         0x32415352L
#define BCRYPT_RSAFULLPRIVATE_MAGIC     0x33415352L
#define BCRYPT_ECDH_PUBLIC_P256_MAGIC   0x314B4345L
#define BCRYPT_ECDH_PRIVATE_P256_MAGIC  0x324B4345L
#define BCRYPT_ECDH_PUBLIC_P384_MAGIC   0x334B4345L
#define BCRYPT_ECDH_PRIVATE_P384_MAGIC  0x344B4345L
#define BCRYPT_ECDH_PUBLIC_P521_MAGIC   0x354B4345L
#define BCRYPT_ECDH_PRIVATE_P521_MAGIC  0x364B4345L
#define BCRYPT_ECDSA_PUBLIC_P256_MAGIC  0x31534345L
#define BCRYPT_ECDSA_PRIVATE_P256_MAGIC 0x32534345L
#define BCRYPT_ECDSA_PUBLIC_P384_MAGIC  0x33534345L
#define BCRYPT_ECDSA_PRIVATE_P386_MAGIC 0x34534345L
#define BCRYPT_ECDSA_PUBLIC_P521_MAGIC  0x35534345L
#define BCRYPT_ECDSA_PRIVATE_P521_MAGIC 0x36534345L
#define BCRYPT_DH_PUBLIC_MAGIC          0x42504844L
#define BCRYPT_DH_PRIVATE_MAGIC         0x56504844L
#define BCRYPT_DH_PARAMETERS_MAGIC      0x4D504844L
#define BCRYPT_DSA_PUBLIC_MAGIC         0x42505344L
#define BCRYPT_DSA_PRIVATE_MAGIC        0x56505344L
#define BCRYPT_KEY_DATA_BLOB_MAGIC      0x4D42444BL
#define BCRYPT_DSA_PARAMETERS_MAGIC     0x4D505344L

/* Key data blob version number */
#define BCRYPT_KEY_DATA_BLOB_VERSION1   0x00000001L

/* Providers */
#define MS_PRIMITIVE_PROVIDER   L"Microsoft Primitive Provider"

/* Algorithms */
#define BCRYPT_RSA_ALGORITHM                L"RSA"
#define BCRYPT_RSA_SIGN_ALGORITHM           L"RSA_SIGN"
#define BCRYPT_DH_ALGORITHM                 L"DH"
#define BCRYPT_DSA_ALGORITHM                L"DSA"
#define BCRYPT_RC2_ALGORITHM                L"RC2"
#define BCRYPT_RC4_ALGORITHM                L"RC4"
#define BCRYPT_AES_ALGORITHM                L"AES"
#define BCRYPT_DES_ALGORITHM                L"DES"
#define BCRYPT_DESX_ALGORITHM               L"DESX"
#define BCRYPT_3DES_ALGORITHM               L"3DES"
#define BCRYPT_3DES_112_ALGORITHM           L"3DES_112"
#define BCRYPT_MD2_ALGORITHM                L"MD2"
#define BCRYPT_MD4_ALGORITHM                L"MD4"
#define BCRYPT_MD5_ALGORITHM                L"MD5"
#define BCRYPT_SHA1_ALGORITHM               L"SHA1"
#define BCRYPT_SHA256_ALGORITHM             L"SHA256"
#define BCRYPT_SHA384_ALGORITHM             L"SHA384"
#define BCRYPT_SHA512_ALGORITHM             L"SHA512"
#define BCRYPT_SHA_GMAC_ALGORITHM           L"AES-GMAC"
#define BCRYPT_ECDSA_P256_ALGORITHM         L"ECDSA_P256"
#define BCRYPT_ECDSA_P386_ALGORITHM         L"ECDSA_P384"
#define BCRYPT_ECDSA_P521_ALGORITHM         L"ECDSA_P521"
#define BCRYPT_ECDH_P256_ALGORITHM          L"ECDH_P256"
#define BCRYPT_ECDH_P384_ALGORITHM          L"ECDH_P384"
#define BCRYPT_ECDH_P521_ALGORITHM          L"ECDH_P521"
#define BCRYPT_RNG_ALGORITHM                L"RNG"
#define BCRYPT_RNG_FIPS186_DSA_ALGORITHM    L"FIPS128DSARNG"
#define BCRYPT_RNG_DUAL_EC_ALGORITHM        L"DUALECRNG"

/* Interfaces */
#define BCRYPT_CIPHER_INTERFACE                 0x00000001L
#define BCRYPT_HASH_INTERFACE                   0x00000002L
#define BCRYPT_ASYMMETRIC_ENCRYPTION_INTERFACE  0x00000003L
#define BCRYPT_SECRET_AGREEMENT_INTERFACE       0x00000004L
#define BCRYPT_SIGNATURE_INTERFACE              0x00000005L
#define BCRYPT_RNG_INTERFACE                    0x00000006L

/* Algorithm handle flags */
#define BCRYPT_ALG_HANDLE_HMAC_FLAG 0x00000008L

/* BCryptEnumAlgorithms() flags */
#define BCRYPT_CIPHER_OPERATION                 0x00000001L
#define BCRYPT_HASH_OPERATION                   0x00000002L
#define BCRYPT_ASYMMETRIC_ENCRYPTION_OPERATION  0x00000004L
#define BCRYPT_SECRET_AGREEMENT_OPERATION       0x00000008L
#define BCRYPT_SIGNATURE_OPERATION              0x00000010L
#define BCRYPT_RNG_OPERATION                    0x00000020L

/* BCryptGetProperty() and BCryptSetProperty() flags */
#define BCRYPT_PUBLIC_KEY_FLAG  0x00000001L
#define BCRYPT_PRIVATE_KEY_FLAG 0x00000002L

/* BCryptImportKeyPair() flags */
#define BCRYPT_NO_KEY_VALIDATION    0x00000008L

/* BCryptGenRandom() flags */
#define BCRYPT_RNG_USE_ENTROPY_IN_BUFFER    0x00000001L
#define BCRYPT_USE_SYSTEM_PREFERRED_RNG     0x00000002L

/* CNG image reference flags */
#define CRYPT_MIN_DEPENDENCIES  0x00000001L
#define CRYPT_PROCESS_ISOLATE   0x00010000L

/* Processor modes */
#define CRYPT_UM    0x00000001L
#define CRYPT_KM    0x00000002L
#define CRYPT_MM    0x00000003L
#define CRYPT_ANY   0x00000004L

/* Overwrite flag */
#define CRYPT_OVERWRITE 0x00000001L

/* Configuration tables */
#define CRYPT_LOCAL     0x00000001L
#define CRYPT_DOMAIN    0x00000002L

/* Context configuration flags */
#define CRYPT_EXCLUSIVE 0x00000001L
#define CRYPT_OVERRIDE  0x00010000L

/* BCryptResolveProviders() flags */
#define CRYPT_ALL_FUNCTIONS 0x00000001L
#define CRYPT_ALL_PROVIDERS 0x00000002L

/* Function and provider priority values */
#define CRYPT_PRIORITY_TOP      0x00000000L
#define CRYPT_PRIORITY_BOTTOM   0xFFFFFFFFL

/* Default context */
#define CRYPT_DEFAULT_CONTEXT   L"Default"

/* Key lengths */
typedef struct __BCRYPT_KEY_LENGTHS_STRUCT {
    ULONG   dwMinLength;
    ULONG   dwMaxLength;
    ULONG   dwIncrement;
} BCRYPT_KEY_LENGTHS_STRUCT;
typedef BCRYPT_KEY_LENGTHS_STRUCT   BCRYPT_AUTH_TAG_LENGTHS_STRUCT;

/* Object identifier */
typedef struct _BCRYPT_OID {
    ULONG   cbOID;
    PUCHAR  pbOID;
} BCRYPT_OID;

/* Object identifier list */
typedef struct _BCRYPT_OID_LIST {
    ULONG       dwOIDCount;
    BCRYPT_OID  *pOIDs;
} BCRYPT_OID_LIST;

/* PCKS1 padding information */
typedef struct _BCRYPT_PKCS1_PADDING_INFO {
    LPCWSTR pszAlgId;
} BCRYPT_PKCS1_PADDING_INFO;

/* PSS padding information */
typedef struct _BCRYPT_PSS_PADDING_INFO {
    LPCWSTR pszAlgId;
    ULONG   cbSalt;
} BCRYPT_PSS_PADDING_INFO;

/* OAEP padding information */
typedef struct _BCRYPT_OAEP_PADDING_INFO {
    LPCWSTR pszAlgId;
    PUCHAR  pbLabel;
    ULONG   cbLabel;
} BCRYPT_OAEP_PADDING_INFO;

/* Authenticated cipher mode information */
typedef struct _BCRYPT_AUTHENTICATED_CIPHER_MODE_INFO {
    ULONG       cbSize;
    ULONG       dwInfoVersion;
    PUCHAR      pbNonce;
    ULONG       cbNonce;
    PUCHAR      pbAuthData;
    ULONG       cbAuthData;
    PUCHAR      pbTag;
    ULONG       cbTag;
    PUCHAR      pbMacContext;
    ULONG       cbMacContext;
    ULONG       cbAAD;
    ULONGLONG   cbData;
    ULONG       dwFlags;
} BCRYPT_AUTHENTICATED_CIPHER_MODE_INFO;
typedef BCRYPT_AUTHENTICATED_CIPHER_MODE_INFO   *PBCRYPT_AUTHENTICATED_CIPHER_MODE_INFO;

/* CNG buffer */
typedef struct _BCryptBuffer {
    ULONG   cbBuffer;
    ULONG   BufferType;
    PVOID   pvBuffer;
} BCryptBuffer;
typedef BCryptBuffer    *PBCryptBuffer;

/* CNG buffer description */
typedef struct _BCryptBufferDesc {
    ULONG           ulVersion;
    ULONG           cBuffers;
    PBCryptBuffer   pBuffers;
} BCryptBufferDesc;
typedef BCryptBufferDesc    *PBCryptBufferDesc;

/* CNG blob */
typedef struct _BCRYPT_KEY_BLOB {
    ULONG   Magic;
} BCRYPT_KEY_BLOB;

/* CNG RSA blob */
typedef struct _BCRYPT_RSAKEY_BLOB {
    ULONG   Magic;
    ULONG   BitLength;
    ULONG   cbPublicExp;
    ULONG   cbModulus;
    ULONG   cbPrime1;
    ULONG   cbPrime2;
} BCRYPT_RSAKEY_BLOB;

/* CNG ECC blob */
typedef struct _BCRYPT_ECCKEY_BLOB {
    ULONG   dwMagic;
    ULONG   cbKey;
} BCRYPT_ECCKEY_BLOB;
typedef BCRYPT_ECCKEY_BLOB  *PBCRYPT_ECCKEY_BLOB;

/* CNG Diffie-Hellman blob */
typedef struct _BCRYPT_DH_KEY_BLOB {
    ULONG   dwMagic;
    ULONG   cbKey;
} BCRYPT_DH_KEY_BLOB;
typedef BCRYPT_DH_KEY_BLOB  *PBCRYPT_DH_KEY_BLOB;

/* Diffie-Hellman parameter header */
typedef struct _BCRYPT_DH_PARAMETER_HEADER {
    ULONG   cbLength;
    ULONG   dwMagic;
    ULONG   cbKeyLength;
} BCRYPT_DH_PARAMETER_HEADER;

/* CNG DSA blob */
typedef struct _BCRYPT_DSA_KEY_BLOB {
    ULONG   dwMagic;
    ULONG   cbKey;
    UCHAR   Count[4];
    UCHAR   Seed[20];
    UCHAR   q[20];
} BCRYPT_DSA_KEY_BLOB;
typedef BCRYPT_DSA_KEY_BLOB *PBCRYPT_DSA_KEY_BLOB;

/* Key data blob header */
typedef struct _BCRYPT_KEY_DATA_BLOB_HEADER {
    ULONG   dwMagic;
    ULONG   dwVersion;
    ULONG   cbKeyData;
} BCRYPT_KEY_DATA_BLOB_HEADER;
typedef BCRYPT_KEY_DATA_BLOB_HEADER *PBCRYPT_KEY_DATA_BLOB_HEADER;

/* DSA parameter header */
typedef struct _BCRYPT_DSA_PARAMETER_HEADER {
    ULONG   cbLength;
    ULONG   dwMagic;
    ULONG   cbKeyLength;
    UCHAR   Count[4];
    UCHAR   Seed[20];
    UCHAR   q[20];
} BCRYPT_DSA_PARAMETER_HEADER;

/* CNG algorithm identifier */
typedef struct _BCRYPT_ALGORITHM_IDENTIFIER {
    LPWSTR  pszName;
    ULONG   dwClass;
    ULONG   dwFlags;
} BCRYPT_ALGORITHM_IDENTIFIER;

/* CNG provider name */
typedef struct _BCRYPT_PROVIDER_NAME {
    LPWSTR  pszProviderName;
} BCRYPT_PROVIDER_NAME;

/* CNG interface version */
typedef struct _BCRYPT_INTERFACE_VERSION {
    USHORT  MajorVersion;
    USHORT  MinorVersion;
} BCRYPT_INTERFACE_VERSION;
typedef BCRYPT_INTERFACE_VERSION    *PBCRYPT_INTERFACE_VERSION;

/* Macros to manipulate interface versions */
#define BCRYPT_MAKE_INTERFACE_VERSION( p1, p2 ) { ((USHORT)(p1)), ((USHORT)(p2)) }
#define BCRYPT_IS_INTERFACE_VERSION_COMPATIBLE( p1, p2 ) \
    ((p1).MajorVersion <= (p2).MajorVersion)

/* Interface version numbers */
#define BCRYPT_CIPHER_INTERFACE_VERSION_1           BCRYPT_MAKE_INTERFACE_VERSION( 1, 0 )
#define BCRYPT_HASH_INTERFACE_VERSION_1             BCRYPT_MAKE_INTERFACE_VERSION( 1, 0 )
#define BCRYPT_ASYMMETRIC_ENCRYPTION_INTERFACE_VERSION_1 \
    BCRYPT_MAKE_INTERFACE_VERSION( 1, 0 )
#define BCRYPT_SECRET_AGREEMENT_INTERFACE_VERSION_1 BCRYPT_MAKE_INTERFACE_VERSION( 1, 0 )
#define BCRYPT_SIGNATURE_INTERFACE_VERSION_1        BCRYPT_MAKE_INTERFACE_VERSION( 1, 0 )
#define BCRYPT_RNG_INTERFACE_VERSION_1              BCRYPT_MAKE_INTERFACE_VERSION( 1, 0 )

/* CNG interface registration */
typedef struct _CRYPT_INTERFACE_REG {
    ULONG   dwInterface;
    ULONG   dwFlags;
    ULONG   cFunctions;
    PWSTR   *rgpszFunctions;
} CRYPT_INTERFACE_REG;
typedef CRYPT_INTERFACE_REG *PCRYPT_INTERFACE_REG;

/* CNG image registration */
typedef struct _CRYPT_IMAGE_REG {
    PWSTR                   pszImage;
    ULONG                   cInterfaces;
    PCRYPT_INTERFACE_REG    *rgpInterfaces;
} CRYPT_IMAGE_REG;
typedef CRYPT_IMAGE_REG *PCRYPT_IMAGE_REG;

/* CNG provider registration */
typedef struct _CRYPT_PROVIDER_REG {
    ULONG               cAliases;
    PWSTR               *rgpszAliases;
    PCRYPT_IMAGE_REG    pUM;
    PCRYPT_IMAGE_REG    pKM;
} CRYPT_PROVIDER_REG;
typedef CRYPT_PROVIDER_REG  *PCRYPT_PROVIDER_REG;

/* CNG providers */
typedef struct _CRYPT_PROVIDERS {
    ULONG   cProviders;
    PWSTR   *rgpszProviders;
} CRYPT_PROVIDERS;
typedef CRYPT_PROVIDERS *PCRYPT_PROVIDERS;

/* CNG context configuration */
typedef struct _CRYPT_CONTEXT_CONFIG {
    ULONG   dwFlags;
    ULONG   dwReserved;
} CRYPT_CONTEXT_CONFIG;
typedef CRYPT_CONTEXT_CONFIG    *PCRYPT_CONTEXT_CONFIG;

/* CNG context function configuration */
typedef struct _CRYPT_CONTEXT_FUNCTION_CONFIG {
    ULONG   dwFlags;
    ULONG   dwReserved;
} CRYPT_CONTEXT_FUNCTION_CONFIG;
typedef CRYPT_CONTEXT_FUNCTION_CONFIG   *PCRYPT_CONTEXT_FUNCTION_CONFIG;

/* CNG contexts */
typedef struct _CRYPT_CONTEXTS {
    ULONG   cContexts;
    PWSTR   *rgpszContexts;
} CRYPT_CONTEXTS;
typedef CRYPT_CONTEXTS  *PCRYPT_CONTEXTS;

/* CNG context functions */
typedef struct _CRYPT_CONTEXT_FUNCTIONS {
    ULONG   cFunctions;
    PWSTR   *rgpszFunctions;
} CRYPT_CONTEXT_FUNCTIONS;
typedef CRYPT_CONTEXT_FUNCTIONS *PCRYPT_CONTEXT_FUNCTIONS;

/* CNG context function providers */
typedef struct _CRYPT_CONTEXT_FUNCTION_PROVIDERS {
    ULONG   cProviders;
    PWSTR   *rgpszProviders;
} CRYPT_CONTEXT_FUNCTION_PROVIDERS;
typedef CRYPT_CONTEXT_FUNCTION_PROVIDERS    *PCRYPT_CONTEXT_FUNCTION_PROVIDERS;

/* CNG property reference */
typedef struct _CRYPT_PROPERTY_REF {
    PWSTR   pszProperty;
    ULONG   cbValue;
    PUCHAR  pbValue;
} CRYPT_PROPERTY_REF;
typedef CRYPT_PROPERTY_REF  *PCRYPT_PROPERTY_REF;

/* CNG image reference */
typedef struct _CRYPT_IMAGE_REF {
    PWSTR   pszImage;
    ULONG   dwFlags;
} CRYPT_IMAGE_REF;
typedef CRYPT_IMAGE_REF *PCRYPT_IMAGE_REF;

/* CNG provider reference */
typedef struct _CRYPT_PROVIDER_REF {
    ULONG               dwInterface;
    PWSTR               pszFunction;
    PWSTR               pszProvider;
    ULONG               cProperties;
    PCRYPT_PROPERTY_REF *rgpProperties;
    PCRYPT_IMAGE_REF    pUM;
    PCRYPT_IMAGE_REF    pKM;
} CRYPT_PROVIDER_REF;
typedef CRYPT_PROVIDER_REF  *PCRYPT_PROVIDER_REF;

/* CNG provider references */
typedef struct _CRYPT_PROVIDER_REFS {
    ULONG               cProviders;
    PCRYPT_PROVIDER_REF *rgpProviders;
} CRYPT_PROVIDER_REFS;
typedef CRYPT_PROVIDER_REFS *PCRYPT_PROVIDER_REFS;

/* Functions in BCRYPT.DLL */
NTSTATUS WINAPI BCryptAddContextFunction( ULONG, LPCWSTR, ULONG, LPCWSTR, ULONG );
NTSTATUS WINAPI BCryptCloseAlgorithmProvider( BCRYPT_ALG_HANDLE, ULONG );
NTSTATUS WINAPI BCryptConfigureContext( ULONG, LPCWSTR, PCRYPT_CONTEXT_CONFIG );
NTSTATUS WINAPI BCryptConfigureContextFunction( ULONG, LPCWSTR, ULONG, LPCWSTR, PCRYPT_CONTEXT_FUNCTION_CONFIG );
NTSTATUS WINAPI BCryptCreateContext( ULONG, LPCWSTR, PCRYPT_CONTEXT_CONFIG );
NTSTATUS WINAPI BCryptCreateHash( BCRYPT_ALG_HANDLE, BCRYPT_HASH_HANDLE *, PUCHAR, ULONG, PUCHAR, ULONG, ULONG );
NTSTATUS WINAPI BCryptDecrypt( BCRYPT_KEY_HANDLE, PUCHAR, ULONG, VOID *, PUCHAR, ULONG, PUCHAR, ULONG, ULONG *, ULONG );
NTSTATUS WINAPI BCryptDeleteContext( ULONG, LPCWSTR );
NTSTATUS WINAPI BCryptDeriveKey( BCRYPT_SECRET_HANDLE, LPCWSTR, BCryptBufferDesc *, PUCHAR, ULONG, ULONG *, ULONG );
NTSTATUS WINAPI BCryptDeriveKeyCapi( BCRYPT_HASH_HANDLE, BCRYPT_ALG_HANDLE, PUCHAR, ULONG, ULONG );
NTSTATUS WINAPI BCryptDeriveKeyPBKDF2( BCRYPT_ALG_HANDLE, PUCHAR, ULONG, PUCHAR, ULONG, ULONGLONG, PUCHAR, ULONG, ULONG );
NTSTATUS WINAPI BCryptDestroyHash( BCRYPT_HASH_HANDLE );
NTSTATUS WINAPI BCryptDestroyKey( BCRYPT_KEY_HANDLE );
NTSTATUS WINAPI BCryptDestroySecret( BCRYPT_SECRET_HANDLE );
NTSTATUS WINAPI BCryptDuplicateHash( BCRYPT_HASH_HANDLE, BCRYPT_HASH_HANDLE *, PUCHAR, ULONG, ULONG );
NTSTATUS WINAPI BCryptDuplicateKey( BCRYPT_KEY_HANDLE, BCRYPT_KEY_HANDLE *, PUCHAR, ULONG, ULONG );
NTSTATUS WINAPI BCryptEncrypt( BCRYPT_KEY_HANDLE, PUCHAR, ULONG, VOID *, PUCHAR, ULONG, PUCHAR, ULONG, ULONG *, ULONG );
NTSTATUS WINAPI BCryptEnumAlgorithms( ULONG, ULONG *, BCRYPT_ALGORITHM_IDENTIFIER **, ULONG );
NTSTATUS WINAPI BCryptEnumContextFunctionProviders( ULONG, LPCWSTR, ULONG, LPCWSTR, ULONG *, PCRYPT_CONTEXT_FUNCTION_PROVIDERS * );
NTSTATUS WINAPI BCryptEnumContextFunctions( ULONG, LPCWSTR, ULONG, ULONG *, PCRYPT_CONTEXT_FUNCTIONS * );
NTSTATUS WINAPI BCryptEnumContexts( ULONG, ULONG *, PCRYPT_CONTEXTS * );
NTSTATUS WINAPI BCryptEnumProviders( LPCWSTR, ULONG *, BCRYPT_PROVIDER_NAME **, ULONG );
NTSTATUS WINAPI BCryptEnumRegisteredProviders( ULONG *, PCRYPT_PROVIDERS * );
NTSTATUS WINAPI BCryptExportKey( BCRYPT_KEY_HANDLE, BCRYPT_KEY_HANDLE, LPCWSTR, PUCHAR, ULONG, ULONG *, ULONG );
NTSTATUS WINAPI BCryptFinalizeKeyPair( BCRYPT_KEY_HANDLE, ULONG );
NTSTATUS WINAPI BCryptFinishHash( BCRYPT_HASH_HANDLE, PUCHAR, ULONG, ULONG );
VOID WINAPI     BCryptFreeBuffer( PVOID );
NTSTATUS WINAPI BCryptGenRandom( BCRYPT_ALG_HANDLE, PUCHAR, ULONG, ULONG );
NTSTATUS WINAPI BCryptGenerateKeyPair( BCRYPT_ALG_HANDLE, BCRYPT_KEY_HANDLE *, ULONG, ULONG );
NTSTATUS WINAPI BCryptGenerateSymmetricKey( BCRYPT_ALG_HANDLE, BCRYPT_KEY_HANDLE *, PUCHAR, ULONG, PUCHAR, ULONG, ULONG );
NTSTATUS WINAPI BCryptGetFipsAlgorithmMode( BOOLEAN * );
NTSTATUS WINAPI BCryptGetProperty( BCRYPT_HANDLE, LPCWSTR, PUCHAR, ULONG, ULONG *, ULONG );
NTSTATUS WINAPI BCryptHashData( BCRYPT_HASH_HANDLE, PUCHAR, ULONG, ULONG );
NTSTATUS WINAPI BCryptImportKey( BCRYPT_ALG_HANDLE, BCRYPT_KEY_HANDLE, LPCWSTR, BCRYPT_KEY_HANDLE *, PUCHAR, ULONG, PUCHAR, ULONG, ULONG );
NTSTATUS WINAPI BCryptImportKeyPair( BCRYPT_ALG_HANDLE, BCRYPT_KEY_HANDLE, LPCWSTR, BCRYPT_KEY_HANDLE *, PUCHAR, ULONG, ULONG );
NTSTATUS WINAPI BCryptOpenAlgorithmProvider( BCRYPT_ALG_HANDLE *, LPCWSTR, LPCWSTR, ULONG );
NTSTATUS WINAPI BCryptQueryContextConfiguration( ULONG, LPCWSTR, ULONG *, PCRYPT_CONTEXT_CONFIG * );
NTSTATUS WINAPI BCryptQueryContextFunctionConfiguration( ULONG, LPCWSTR, ULONG, LPCWSTR, ULONG *, PCRYPT_CONTEXT_FUNCTION_CONFIG * );
NTSTATUS WINAPI BCryptQueryContextFunctionProperty( ULONG, LPCWSTR, ULONG, LPCWSTR, LPCWSTR, ULONG *, PUCHAR * );
NTSTATUS WINAPI BCryptQueryProviderRegistration( LPCWSTR, ULONG, ULONG, ULONG *, PCRYPT_PROVIDER_REG * );
NTSTATUS WINAPI BCryptRegisterConfigChangeNotify( HANDLE * );
NTSTATUS WINAPI BCryptRemoveContextFunction( ULONG, LPCWSTR, ULONG, LPCWSTR );
NTSTATUS WINAPI BCryptResolveProviders( LPCWSTR, ULONG, LPCWSTR, LPCWSTR, ULONG, ULONG, ULONG *, PCRYPT_PROVIDER_REFS * );
NTSTATUS WINAPI BCryptSecretAgreement( BCRYPT_KEY_HANDLE, BCRYPT_KEY_HANDLE, BCRYPT_SECRET_HANDLE *, ULONG );
NTSTATUS WINAPI BCryptSetContextFunctionProperty( ULONG, LPCWSTR, ULONG, LPCWSTR, LPCWSTR, ULONG, PUCHAR );
NTSTATUS WINAPI BCryptSetProperty( BCRYPT_HANDLE, LPCWSTR, PUCHAR, ULONG, ULONG );
NTSTATUS WINAPI BCryptSignHash( BCRYPT_KEY_HANDLE, VOID *, PUCHAR, ULONG, PUCHAR, ULONG, ULONG *, ULONG );
NTSTATUS WINAPI BCryptUnregisterConfigChangeNotify( HANDLE );
NTSTATUS WINAPI BCryptVerifySignature( BCRYPT_KEY_HANDLE, VOID *, PUCHAR, ULONG, PUCHAR, ULONG, ULONG );

/* Macro to initialize BCRYPT_AUTHENTICATED_CIPHER_MODE_INFO */
#define BCRYPT_INIT_AUTH_MODE_INFO( x ) \
    RtlZeroMemory( &(x), sizeof( BCRYPT_AUTHENTICATED_CIPHER_MODE_INFO ) ); \
    (x).cbSize = sizeof( AUTHENTICATED_CIPHER_MODE_INFO ); \
    (x).dwInfoVersion = BCRYPT_AUTHENTICATED_CIPHER_MODE_INFO_VERSION;

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* __BCRYPT_H__ */
