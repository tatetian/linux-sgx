/*
 * Copyright (C) 2011-2018 Intel Corporation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in
 *     the documentation and/or other materials provided with the
 *     distribution.
 *   * Neither the name of Intel Corporation nor the names of its
 *     contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef _SGX_IPPCP_H_
#define _SGX_IPPCP_H_
 
#ifdef __cplusplus
extern "C" {
#endif

#ifndef NULL
#ifdef  __cplusplus
#define NULL    0
#else
#define NULL    ((void *)0)
#endif
#endif

  #define ippcpGetLibVersion sgx_disp_ippcpGetLibVersion
  #define ippsDESGetSize sgx_disp_ippsDESGetSize
  #define ippsDESInit sgx_disp_ippsDESInit
  #define ippsDESPack sgx_disp_ippsDESPack
  #define ippsDESUnpack sgx_disp_ippsDESUnpack
  #define ippsTDESEncryptECB sgx_disp_ippsTDESEncryptECB
  #define ippsTDESDecryptECB sgx_disp_ippsTDESDecryptECB
  #define ippsTDESEncryptCBC sgx_disp_ippsTDESEncryptCBC
  #define ippsTDESDecryptCBC sgx_disp_ippsTDESDecryptCBC
  #define ippsTDESEncryptCFB sgx_disp_ippsTDESEncryptCFB
  #define ippsTDESDecryptCFB sgx_disp_ippsTDESDecryptCFB
  #define ippsTDESEncryptOFB sgx_disp_ippsTDESEncryptOFB
  #define ippsTDESDecryptOFB sgx_disp_ippsTDESDecryptOFB
  #define ippsTDESEncryptCTR sgx_disp_ippsTDESEncryptCTR
  #define ippsTDESDecryptCTR sgx_disp_ippsTDESDecryptCTR
  #define ippsAESGetSize sgx_disp_ippsAESGetSize
  #define ippsAESInit sgx_disp_ippsAESInit
  #define ippsAESSetKey sgx_disp_ippsAESSetKey
  #define ippsAESPack sgx_disp_ippsAESPack
  #define ippsAESUnpack sgx_disp_ippsAESUnpack
  #define ippsAESEncryptECB sgx_disp_ippsAESEncryptECB
  #define ippsAESDecryptECB sgx_disp_ippsAESDecryptECB
  #define ippsAESEncryptCBC sgx_disp_ippsAESEncryptCBC
  #define ippsAESEncryptCBC_CS1 sgx_disp_ippsAESEncryptCBC_CS1
  #define ippsAESEncryptCBC_CS2 sgx_disp_ippsAESEncryptCBC_CS2
  #define ippsAESEncryptCBC_CS3 sgx_disp_ippsAESEncryptCBC_CS3
  #define ippsAESDecryptCBC sgx_disp_ippsAESDecryptCBC
  #define ippsAESDecryptCBC_CS1 sgx_disp_ippsAESDecryptCBC_CS1
  #define ippsAESDecryptCBC_CS2 sgx_disp_ippsAESDecryptCBC_CS2
  #define ippsAESDecryptCBC_CS3 sgx_disp_ippsAESDecryptCBC_CS3
  #define ippsAESEncryptCFB sgx_disp_ippsAESEncryptCFB
  #define ippsAESDecryptCFB sgx_disp_ippsAESDecryptCFB
  #define ippsAESEncryptOFB sgx_disp_ippsAESEncryptOFB
  #define ippsAESDecryptOFB sgx_disp_ippsAESDecryptOFB
  #define ippsAESEncryptCTR sgx_disp_ippsAESEncryptCTR
  #define ippsAESDecryptCTR sgx_disp_ippsAESDecryptCTR
  #define ippsAESEncryptXTS_Direct sgx_disp_ippsAESEncryptXTS_Direct
  #define ippsAESDecryptXTS_Direct sgx_disp_ippsAESDecryptXTS_Direct
  #define ippsSMS4GetSize sgx_disp_ippsSMS4GetSize
  #define ippsSMS4Init sgx_disp_ippsSMS4Init
  #define ippsSMS4SetKey sgx_disp_ippsSMS4SetKey
  #define ippsSMS4EncryptECB sgx_disp_ippsSMS4EncryptECB
  #define ippsSMS4DecryptECB sgx_disp_ippsSMS4DecryptECB
  #define ippsSMS4EncryptCBC sgx_disp_ippsSMS4EncryptCBC
  #define ippsSMS4EncryptCBC_CS1 sgx_disp_ippsSMS4EncryptCBC_CS1
  #define ippsSMS4EncryptCBC_CS2 sgx_disp_ippsSMS4EncryptCBC_CS2
  #define ippsSMS4EncryptCBC_CS3 sgx_disp_ippsSMS4EncryptCBC_CS3
  #define ippsSMS4DecryptCBC sgx_disp_ippsSMS4DecryptCBC
  #define ippsSMS4DecryptCBC_CS1 sgx_disp_ippsSMS4DecryptCBC_CS1
  #define ippsSMS4DecryptCBC_CS2 sgx_disp_ippsSMS4DecryptCBC_CS2
  #define ippsSMS4DecryptCBC_CS3 sgx_disp_ippsSMS4DecryptCBC_CS3
  #define ippsSMS4EncryptCFB sgx_disp_ippsSMS4EncryptCFB
  #define ippsSMS4DecryptCFB sgx_disp_ippsSMS4DecryptCFB
  #define ippsSMS4EncryptOFB sgx_disp_ippsSMS4EncryptOFB
  #define ippsSMS4DecryptOFB sgx_disp_ippsSMS4DecryptOFB
  #define ippsSMS4EncryptCTR sgx_disp_ippsSMS4EncryptCTR
  #define ippsSMS4DecryptCTR sgx_disp_ippsSMS4DecryptCTR
  #define ippsSMS4_CCMGetSize sgx_disp_ippsSMS4_CCMGetSize
  #define ippsSMS4_CCMInit sgx_disp_ippsSMS4_CCMInit
  #define ippsSMS4_CCMMessageLen sgx_disp_ippsSMS4_CCMMessageLen
  #define ippsSMS4_CCMTagLen sgx_disp_ippsSMS4_CCMTagLen
  #define ippsSMS4_CCMStart sgx_disp_ippsSMS4_CCMStart
  #define ippsSMS4_CCMEncrypt sgx_disp_ippsSMS4_CCMEncrypt
  #define ippsSMS4_CCMDecrypt sgx_disp_ippsSMS4_CCMDecrypt
  #define ippsSMS4_CCMGetTag sgx_disp_ippsSMS4_CCMGetTag
  #define ippsAES_CCMGetSize sgx_disp_ippsAES_CCMGetSize
  #define ippsAES_CCMInit sgx_disp_ippsAES_CCMInit
  #define ippsAES_CCMMessageLen sgx_disp_ippsAES_CCMMessageLen
  #define ippsAES_CCMTagLen sgx_disp_ippsAES_CCMTagLen
  #define ippsAES_CCMStart sgx_disp_ippsAES_CCMStart
  #define ippsAES_CCMEncrypt sgx_disp_ippsAES_CCMEncrypt
  #define ippsAES_CCMDecrypt sgx_disp_ippsAES_CCMDecrypt
  #define ippsAES_CCMGetTag sgx_disp_ippsAES_CCMGetTag
  #define ippsAES_GCMGetSize sgx_disp_ippsAES_GCMGetSize
  #define ippsAES_GCMInit sgx_disp_ippsAES_GCMInit
  #define ippsAES_GCMReset sgx_disp_ippsAES_GCMReset
  #define ippsAES_GCMProcessIV sgx_disp_ippsAES_GCMProcessIV
  #define ippsAES_GCMProcessAAD sgx_disp_ippsAES_GCMProcessAAD
  #define ippsAES_GCMStart sgx_disp_ippsAES_GCMStart
  #define ippsAES_GCMEncrypt sgx_disp_ippsAES_GCMEncrypt
  #define ippsAES_GCMDecrypt sgx_disp_ippsAES_GCMDecrypt
  #define ippsAES_GCMGetTag sgx_disp_ippsAES_GCMGetTag
  #define ippsAES_XTSGetSize sgx_disp_ippsAES_XTSGetSize
  #define ippsAES_XTSInit sgx_disp_ippsAES_XTSInit
  #define ippsAES_XTSEncrypt sgx_disp_ippsAES_XTSEncrypt
  #define ippsAES_XTSDecrypt sgx_disp_ippsAES_XTSDecrypt
  #define ippsAES_S2V_CMAC sgx_disp_ippsAES_S2V_CMAC
  #define ippsAES_SIVEncrypt sgx_disp_ippsAES_SIVEncrypt
  #define ippsAES_SIVDecrypt sgx_disp_ippsAES_SIVDecrypt
  #define ippsAES_CMACGetSize sgx_disp_ippsAES_CMACGetSize
  #define ippsAES_CMACInit sgx_disp_ippsAES_CMACInit
  #define ippsAES_CMACUpdate sgx_disp_ippsAES_CMACUpdate
  #define ippsAES_CMACFinal sgx_disp_ippsAES_CMACFinal
  #define ippsAES_CMACGetTag sgx_disp_ippsAES_CMACGetTag
  #define ippsARCFourCheckKey sgx_disp_ippsARCFourCheckKey
  #define ippsARCFourGetSize sgx_disp_ippsARCFourGetSize
  #define ippsARCFourInit sgx_disp_ippsARCFourInit
  #define ippsARCFourReset sgx_disp_ippsARCFourReset
  #define ippsARCFourPack sgx_disp_ippsARCFourPack
  #define ippsARCFourUnpack sgx_disp_ippsARCFourUnpack
  #define ippsARCFourEncrypt sgx_disp_ippsARCFourEncrypt
  #define ippsARCFourDecrypt sgx_disp_ippsARCFourDecrypt
  #define ippsSHA1GetSize sgx_disp_ippsSHA1GetSize
  #define ippsSHA1Init sgx_disp_ippsSHA1Init
  #define ippsSHA1Duplicate sgx_disp_ippsSHA1Duplicate
  #define ippsSHA1Pack sgx_disp_ippsSHA1Pack
  #define ippsSHA1Unpack sgx_disp_ippsSHA1Unpack
  #define ippsSHA1Update sgx_disp_ippsSHA1Update
  #define ippsSHA1GetTag sgx_disp_ippsSHA1GetTag
  #define ippsSHA1Final sgx_disp_ippsSHA1Final
  #define ippsSHA1MessageDigest sgx_disp_ippsSHA1MessageDigest
  #define ippsSHA224GetSize sgx_disp_ippsSHA224GetSize
  #define ippsSHA224Init sgx_disp_ippsSHA224Init
  #define ippsSHA224Duplicate sgx_disp_ippsSHA224Duplicate
  #define ippsSHA224Pack sgx_disp_ippsSHA224Pack
  #define ippsSHA224Unpack sgx_disp_ippsSHA224Unpack
  #define ippsSHA224Update sgx_disp_ippsSHA224Update
  #define ippsSHA224GetTag sgx_disp_ippsSHA224GetTag
  #define ippsSHA224Final sgx_disp_ippsSHA224Final
  #define ippsSHA224MessageDigest sgx_disp_ippsSHA224MessageDigest
  #define ippsSHA256GetSize sgx_disp_ippsSHA256GetSize
  #define ippsSHA256Init sgx_disp_ippsSHA256Init
  #define ippsSHA256Duplicate sgx_disp_ippsSHA256Duplicate
  #define ippsSHA256Pack sgx_disp_ippsSHA256Pack
  #define ippsSHA256Unpack sgx_disp_ippsSHA256Unpack
  #define ippsSHA256Update sgx_disp_ippsSHA256Update
  #define ippsSHA256GetTag sgx_disp_ippsSHA256GetTag
  #define ippsSHA256Final sgx_disp_ippsSHA256Final
  #define ippsSHA256MessageDigest sgx_disp_ippsSHA256MessageDigest
  #define ippsSHA384GetSize sgx_disp_ippsSHA384GetSize
  #define ippsSHA384Init sgx_disp_ippsSHA384Init
  #define ippsSHA384Duplicate sgx_disp_ippsSHA384Duplicate
  #define ippsSHA384Pack sgx_disp_ippsSHA384Pack
  #define ippsSHA384Unpack sgx_disp_ippsSHA384Unpack
  #define ippsSHA384Update sgx_disp_ippsSHA384Update
  #define ippsSHA384GetTag sgx_disp_ippsSHA384GetTag
  #define ippsSHA384Final sgx_disp_ippsSHA384Final
  #define ippsSHA384MessageDigest sgx_disp_ippsSHA384MessageDigest
  #define ippsSHA512GetSize sgx_disp_ippsSHA512GetSize
  #define ippsSHA512Init sgx_disp_ippsSHA512Init
  #define ippsSHA512Duplicate sgx_disp_ippsSHA512Duplicate
  #define ippsSHA512Pack sgx_disp_ippsSHA512Pack
  #define ippsSHA512Unpack sgx_disp_ippsSHA512Unpack
  #define ippsSHA512Update sgx_disp_ippsSHA512Update
  #define ippsSHA512GetTag sgx_disp_ippsSHA512GetTag
  #define ippsSHA512Final sgx_disp_ippsSHA512Final
  #define ippsSHA512MessageDigest sgx_disp_ippsSHA512MessageDigest
  #define ippsMD5GetSize sgx_disp_ippsMD5GetSize
  #define ippsMD5Init sgx_disp_ippsMD5Init
  #define ippsMD5Duplicate sgx_disp_ippsMD5Duplicate
  #define ippsMD5Pack sgx_disp_ippsMD5Pack
  #define ippsMD5Unpack sgx_disp_ippsMD5Unpack
  #define ippsMD5Update sgx_disp_ippsMD5Update
  #define ippsMD5GetTag sgx_disp_ippsMD5GetTag
  #define ippsMD5Final sgx_disp_ippsMD5Final
  #define ippsMD5MessageDigest sgx_disp_ippsMD5MessageDigest
  #define ippsSM3GetSize sgx_disp_ippsSM3GetSize
  #define ippsSM3Init sgx_disp_ippsSM3Init
  #define ippsSM3Duplicate sgx_disp_ippsSM3Duplicate
  #define ippsSM3Pack sgx_disp_ippsSM3Pack
  #define ippsSM3Unpack sgx_disp_ippsSM3Unpack
  #define ippsSM3Update sgx_disp_ippsSM3Update
  #define ippsSM3GetTag sgx_disp_ippsSM3GetTag
  #define ippsSM3Final sgx_disp_ippsSM3Final
  #define ippsSM3MessageDigest sgx_disp_ippsSM3MessageDigest
  #define ippsHashGetSize sgx_disp_ippsHashGetSize
  #define ippsHashInit sgx_disp_ippsHashInit
  #define ippsHashPack sgx_disp_ippsHashPack
  #define ippsHashUnpack sgx_disp_ippsHashUnpack
  #define ippsHashDuplicate sgx_disp_ippsHashDuplicate
  #define ippsHashUpdate sgx_disp_ippsHashUpdate
  #define ippsHashGetTag sgx_disp_ippsHashGetTag
  #define ippsHashFinal sgx_disp_ippsHashFinal
  #define ippsHashMessage sgx_disp_ippsHashMessage
  #define ippsHashMethod_MD5 sgx_disp_ippsHashMethod_MD5
  #define ippsHashMethod_SM3 sgx_disp_ippsHashMethod_SM3
  #define ippsHashMethod_SHA1 sgx_disp_ippsHashMethod_SHA1
  #define ippsHashMethod_SHA1_NI sgx_disp_ippsHashMethod_SHA1_NI
  #define ippsHashMethod_SHA1_TT sgx_disp_ippsHashMethod_SHA1_TT
  #define ippsHashMethod_SHA256 sgx_disp_ippsHashMethod_SHA256
  #define ippsHashMethod_SHA256_NI sgx_disp_ippsHashMethod_SHA256_NI
  #define ippsHashMethod_SHA256_TT sgx_disp_ippsHashMethod_SHA256_TT
  #define ippsHashMethod_SHA224 sgx_disp_ippsHashMethod_SHA224
  #define ippsHashMethod_SHA224_NI sgx_disp_ippsHashMethod_SHA224_NI
  #define ippsHashMethod_SHA224_TT sgx_disp_ippsHashMethod_SHA224_TT
  #define ippsHashMethod_SHA512 sgx_disp_ippsHashMethod_SHA512
  #define ippsHashMethod_SHA384 sgx_disp_ippsHashMethod_SHA384
  #define ippsHashMethod_SHA512_256 sgx_disp_ippsHashMethod_SHA512_256
  #define ippsHashMethod_SHA512_224 sgx_disp_ippsHashMethod_SHA512_224
  #define ippsHashGetSize_rmf sgx_disp_ippsHashGetSize_rmf
  #define ippsHashInit_rmf sgx_disp_ippsHashInit_rmf
  #define ippsHashPack_rmf sgx_disp_ippsHashPack_rmf
  #define ippsHashUnpack_rmf sgx_disp_ippsHashUnpack_rmf
  #define ippsHashDuplicate_rmf sgx_disp_ippsHashDuplicate_rmf
  #define ippsHashUpdate_rmf sgx_disp_ippsHashUpdate_rmf
  #define ippsHashGetTag_rmf sgx_disp_ippsHashGetTag_rmf
  #define ippsHashFinal_rmf sgx_disp_ippsHashFinal_rmf
  #define ippsHashMessage_rmf sgx_disp_ippsHashMessage_rmf
  #define ippsMGF sgx_disp_ippsMGF
  #define ippsMGF1_rmf sgx_disp_ippsMGF1_rmf
  #define ippsMGF2_rmf sgx_disp_ippsMGF2_rmf
  #define ippsHMAC_GetSize sgx_disp_ippsHMAC_GetSize
  #define ippsHMAC_Init sgx_disp_ippsHMAC_Init
  #define ippsHMAC_Pack sgx_disp_ippsHMAC_Pack
  #define ippsHMAC_Unpack sgx_disp_ippsHMAC_Unpack
  #define ippsHMAC_Duplicate sgx_disp_ippsHMAC_Duplicate
  #define ippsHMAC_Update sgx_disp_ippsHMAC_Update
  #define ippsHMAC_Final sgx_disp_ippsHMAC_Final
  #define ippsHMAC_GetTag sgx_disp_ippsHMAC_GetTag
  #define ippsHMAC_Message sgx_disp_ippsHMAC_Message
  #define ippsHMACGetSize_rmf sgx_disp_ippsHMACGetSize_rmf
  #define ippsHMACInit_rmf sgx_disp_ippsHMACInit_rmf
  #define ippsHMACPack_rmf sgx_disp_ippsHMACPack_rmf
  #define ippsHMACUnpack_rmf sgx_disp_ippsHMACUnpack_rmf
  #define ippsHMACDuplicate_rmf sgx_disp_ippsHMACDuplicate_rmf
  #define ippsHMACUpdate_rmf sgx_disp_ippsHMACUpdate_rmf
  #define ippsHMACFinal_rmf sgx_disp_ippsHMACFinal_rmf
  #define ippsHMACGetTag_rmf sgx_disp_ippsHMACGetTag_rmf
  #define ippsHMACMessage_rmf sgx_disp_ippsHMACMessage_rmf
  #define ippsBigNumGetSize sgx_disp_ippsBigNumGetSize
  #define ippsBigNumInit sgx_disp_ippsBigNumInit
  #define ippsCmpZero_BN sgx_disp_ippsCmpZero_BN
  #define ippsCmp_BN sgx_disp_ippsCmp_BN
  #define ippsGetSize_BN sgx_disp_ippsGetSize_BN
  #define ippsSet_BN sgx_disp_ippsSet_BN
  #define ippsGet_BN sgx_disp_ippsGet_BN
  #define ippsRef_BN sgx_disp_ippsRef_BN
  #define ippsExtGet_BN sgx_disp_ippsExtGet_BN
  #define ippsAdd_BN sgx_disp_ippsAdd_BN
  #define ippsSub_BN sgx_disp_ippsSub_BN
  #define ippsMul_BN sgx_disp_ippsMul_BN
  #define ippsMAC_BN_I sgx_disp_ippsMAC_BN_I
  #define ippsDiv_BN sgx_disp_ippsDiv_BN
  #define ippsMod_BN sgx_disp_ippsMod_BN
  #define ippsGcd_BN sgx_disp_ippsGcd_BN
  #define ippsModInv_BN sgx_disp_ippsModInv_BN
  #define ippsSetOctString_BN sgx_disp_ippsSetOctString_BN
  #define ippsGetOctString_BN sgx_disp_ippsGetOctString_BN
  #define ippsMontGetSize sgx_disp_ippsMontGetSize
  #define ippsMontInit sgx_disp_ippsMontInit
  #define ippsMontSet sgx_disp_ippsMontSet
  #define ippsMontGet sgx_disp_ippsMontGet
  #define ippsMontForm sgx_disp_ippsMontForm
  #define ippsMontMul sgx_disp_ippsMontMul
  #define ippsMontExp sgx_disp_ippsMontExp
  #define ippsPRNGGetSize sgx_disp_ippsPRNGGetSize
  #define ippsPRNGInit sgx_disp_ippsPRNGInit
  #define ippsPRNGSetModulus sgx_disp_ippsPRNGSetModulus
  #define ippsPRNGSetH0 sgx_disp_ippsPRNGSetH0
  #define ippsPRNGSetAugment sgx_disp_ippsPRNGSetAugment
  #define ippsPRNGSetSeed sgx_disp_ippsPRNGSetSeed
  #define ippsPRNGGetSeed sgx_disp_ippsPRNGGetSeed
  #define ippsPRNGen sgx_disp_ippsPRNGen
  #define ippsPRNGen_BN sgx_disp_ippsPRNGen_BN
  #define ippsPRNGenRDRAND sgx_disp_ippsPRNGenRDRAND
  #define ippsPRNGenRDRAND_BN sgx_disp_ippsPRNGenRDRAND_BN
  #define ippsTRNGenRDSEED sgx_disp_ippsTRNGenRDSEED
  #define ippsTRNGenRDSEED_BN sgx_disp_ippsTRNGenRDSEED_BN
  #define ippsPrimeGetSize sgx_disp_ippsPrimeGetSize
  #define ippsPrimeInit sgx_disp_ippsPrimeInit
  #define ippsPrimeGen sgx_disp_ippsPrimeGen
  #define ippsPrimeTest sgx_disp_ippsPrimeTest
  #define ippsPrimeGen_BN sgx_disp_ippsPrimeGen_BN
  #define ippsPrimeTest_BN sgx_disp_ippsPrimeTest_BN
  #define ippsPrimeGet sgx_disp_ippsPrimeGet
  #define ippsPrimeGet_BN sgx_disp_ippsPrimeGet_BN
  #define ippsPrimeSet sgx_disp_ippsPrimeSet
  #define ippsPrimeSet_BN sgx_disp_ippsPrimeSet_BN
  #define ippsRSA_GetSizePublicKey sgx_disp_ippsRSA_GetSizePublicKey
  #define ippsRSA_InitPublicKey sgx_disp_ippsRSA_InitPublicKey
  #define ippsRSA_SetPublicKey sgx_disp_ippsRSA_SetPublicKey
  #define ippsRSA_GetPublicKey sgx_disp_ippsRSA_GetPublicKey
  #define ippsRSA_GetSizePrivateKeyType1 sgx_disp_ippsRSA_GetSizePrivateKeyType1
  #define ippsRSA_InitPrivateKeyType1 sgx_disp_ippsRSA_InitPrivateKeyType1
  #define ippsRSA_SetPrivateKeyType1 sgx_disp_ippsRSA_SetPrivateKeyType1
  #define ippsRSA_GetPrivateKeyType1 sgx_disp_ippsRSA_GetPrivateKeyType1
  #define ippsRSA_GetSizePrivateKeyType2 sgx_disp_ippsRSA_GetSizePrivateKeyType2
  #define ippsRSA_InitPrivateKeyType2 sgx_disp_ippsRSA_InitPrivateKeyType2
  #define ippsRSA_SetPrivateKeyType2 sgx_disp_ippsRSA_SetPrivateKeyType2
  #define ippsRSA_GetPrivateKeyType2 sgx_disp_ippsRSA_GetPrivateKeyType2
  #define ippsRSA_GetBufferSizePublicKey sgx_disp_ippsRSA_GetBufferSizePublicKey
  #define ippsRSA_GetBufferSizePrivateKey sgx_disp_ippsRSA_GetBufferSizePrivateKey
  #define ippsRSA_Encrypt sgx_disp_ippsRSA_Encrypt
  #define ippsRSA_Decrypt sgx_disp_ippsRSA_Decrypt
  #define ippsRSA_GenerateKeys sgx_disp_ippsRSA_GenerateKeys
  #define ippsRSA_ValidateKeys sgx_disp_ippsRSA_ValidateKeys
  #define ippsRSAEncrypt_OAEP sgx_disp_ippsRSAEncrypt_OAEP
  #define ippsRSADecrypt_OAEP sgx_disp_ippsRSADecrypt_OAEP
  #define ippsRSAEncrypt_OAEP_rmf sgx_disp_ippsRSAEncrypt_OAEP_rmf
  #define ippsRSADecrypt_OAEP_rmf sgx_disp_ippsRSADecrypt_OAEP_rmf
  #define ippsRSAEncrypt_PKCSv15 sgx_disp_ippsRSAEncrypt_PKCSv15
  #define ippsRSADecrypt_PKCSv15 sgx_disp_ippsRSADecrypt_PKCSv15
  #define ippsRSASign_PSS sgx_disp_ippsRSASign_PSS
  #define ippsRSAVerify_PSS sgx_disp_ippsRSAVerify_PSS
  #define ippsRSASign_PSS_rmf sgx_disp_ippsRSASign_PSS_rmf
  #define ippsRSAVerify_PSS_rmf sgx_disp_ippsRSAVerify_PSS_rmf
  #define ippsRSASign_PKCS1v15 sgx_disp_ippsRSASign_PKCS1v15
  #define ippsRSAVerify_PKCS1v15 sgx_disp_ippsRSAVerify_PKCS1v15
  #define ippsRSASign_PKCS1v15_rmf sgx_disp_ippsRSASign_PKCS1v15_rmf
  #define ippsRSAVerify_PKCS1v15_rmf sgx_disp_ippsRSAVerify_PKCS1v15_rmf
  #define ippsDLGetResultString sgx_disp_ippsDLGetResultString
  #define ippsDLPGetSize sgx_disp_ippsDLPGetSize
  #define ippsDLPInit sgx_disp_ippsDLPInit
  #define ippsDLPPack sgx_disp_ippsDLPPack
  #define ippsDLPUnpack sgx_disp_ippsDLPUnpack
  #define ippsDLPSet sgx_disp_ippsDLPSet
  #define ippsDLPGet sgx_disp_ippsDLPGet
  #define ippsDLPSetDP sgx_disp_ippsDLPSetDP
  #define ippsDLPGetDP sgx_disp_ippsDLPGetDP
  #define ippsDLPGenKeyPair sgx_disp_ippsDLPGenKeyPair
  #define ippsDLPPublicKey sgx_disp_ippsDLPPublicKey
  #define ippsDLPValidateKeyPair sgx_disp_ippsDLPValidateKeyPair
  #define ippsDLPSetKeyPair sgx_disp_ippsDLPSetKeyPair
  #define ippsDLPSignDSA sgx_disp_ippsDLPSignDSA
  #define ippsDLPVerifyDSA sgx_disp_ippsDLPVerifyDSA
  #define ippsDLPSharedSecretDH sgx_disp_ippsDLPSharedSecretDH
  #define ippsDLPGenerateDSA sgx_disp_ippsDLPGenerateDSA
  #define ippsDLPValidateDSA sgx_disp_ippsDLPValidateDSA
  #define ippsDLPGenerateDH sgx_disp_ippsDLPGenerateDH
  #define ippsDLPValidateDH sgx_disp_ippsDLPValidateDH
  #define ippsECCGetResultString sgx_disp_ippsECCGetResultString
  #define ippsECCPGetSize sgx_disp_ippsECCPGetSize
  #define ippsECCPGetSizeStd128r1 sgx_disp_ippsECCPGetSizeStd128r1
  #define ippsECCPGetSizeStd128r2 sgx_disp_ippsECCPGetSizeStd128r2
  #define ippsECCPGetSizeStd192r1 sgx_disp_ippsECCPGetSizeStd192r1
  #define ippsECCPGetSizeStd224r1 sgx_disp_ippsECCPGetSizeStd224r1
  #define ippsECCPGetSizeStd256r1 sgx_disp_ippsECCPGetSizeStd256r1
  #define ippsECCPGetSizeStd384r1 sgx_disp_ippsECCPGetSizeStd384r1
  #define ippsECCPGetSizeStd521r1 sgx_disp_ippsECCPGetSizeStd521r1
  #define ippsECCPGetSizeStdSM2 sgx_disp_ippsECCPGetSizeStdSM2
  #define ippsECCPInit sgx_disp_ippsECCPInit
  #define ippsECCPInitStd128r1 sgx_disp_ippsECCPInitStd128r1
  #define ippsECCPInitStd128r2 sgx_disp_ippsECCPInitStd128r2
  #define ippsECCPInitStd192r1 sgx_disp_ippsECCPInitStd192r1
  #define ippsECCPInitStd224r1 sgx_disp_ippsECCPInitStd224r1
  #define ippsECCPInitStd256r1 sgx_disp_ippsECCPInitStd256r1
  #define ippsECCPInitStd384r1 sgx_disp_ippsECCPInitStd384r1
  #define ippsECCPInitStd521r1 sgx_disp_ippsECCPInitStd521r1
  #define ippsECCPInitStdSM2 sgx_disp_ippsECCPInitStdSM2
  #define ippsECCPSet sgx_disp_ippsECCPSet
  #define ippsECCPSetStd sgx_disp_ippsECCPSetStd
  #define ippsECCPSetStd128r1 sgx_disp_ippsECCPSetStd128r1
  #define ippsECCPSetStd128r2 sgx_disp_ippsECCPSetStd128r2
  #define ippsECCPSetStd192r1 sgx_disp_ippsECCPSetStd192r1
  #define ippsECCPSetStd224r1 sgx_disp_ippsECCPSetStd224r1
  #define ippsECCPSetStd256r1 sgx_disp_ippsECCPSetStd256r1
  #define ippsECCPSetStd384r1 sgx_disp_ippsECCPSetStd384r1
  #define ippsECCPSetStd521r1 sgx_disp_ippsECCPSetStd521r1
  #define ippsECCPSetStdSM2 sgx_disp_ippsECCPSetStdSM2
  #define ippsECCPBindGxyTblStd192r1 sgx_disp_ippsECCPBindGxyTblStd192r1
  #define ippsECCPBindGxyTblStd224r1 sgx_disp_ippsECCPBindGxyTblStd224r1
  #define ippsECCPBindGxyTblStd256r1 sgx_disp_ippsECCPBindGxyTblStd256r1
  #define ippsECCPBindGxyTblStd384r1 sgx_disp_ippsECCPBindGxyTblStd384r1
  #define ippsECCPBindGxyTblStd521r1 sgx_disp_ippsECCPBindGxyTblStd521r1
  #define ippsECCPBindGxyTblStdSM2 sgx_disp_ippsECCPBindGxyTblStdSM2
  #define ippsECCPGet sgx_disp_ippsECCPGet
  #define ippsECCPGetOrderBitSize sgx_disp_ippsECCPGetOrderBitSize
  #define ippsECCPValidate sgx_disp_ippsECCPValidate
  #define ippsECCPPointGetSize sgx_disp_ippsECCPPointGetSize
  #define ippsECCPPointInit sgx_disp_ippsECCPPointInit
  #define ippsECCPSetPoint sgx_disp_ippsECCPSetPoint
  #define ippsECCPSetPointAtInfinity sgx_disp_ippsECCPSetPointAtInfinity
  #define ippsECCPGetPoint sgx_disp_ippsECCPGetPoint
  #define ippsECCPCheckPoint sgx_disp_ippsECCPCheckPoint
  #define ippsECCPComparePoint sgx_disp_ippsECCPComparePoint
  #define ippsECCPNegativePoint sgx_disp_ippsECCPNegativePoint
  #define ippsECCPAddPoint sgx_disp_ippsECCPAddPoint
  #define ippsECCPMulPointScalar sgx_disp_ippsECCPMulPointScalar
  #define ippsECCPGenKeyPair sgx_disp_ippsECCPGenKeyPair
  #define ippsECCPPublicKey sgx_disp_ippsECCPPublicKey
  #define ippsECCPValidateKeyPair sgx_disp_ippsECCPValidateKeyPair
  #define ippsECCPSetKeyPair sgx_disp_ippsECCPSetKeyPair
  #define ippsECCPSharedSecretDH sgx_disp_ippsECCPSharedSecretDH
  #define ippsECCPSharedSecretDHC sgx_disp_ippsECCPSharedSecretDHC
  #define ippsECCPSignDSA sgx_disp_ippsECCPSignDSA
  #define ippsECCPVerifyDSA sgx_disp_ippsECCPVerifyDSA
  #define ippsECCPSignNR sgx_disp_ippsECCPSignNR
  #define ippsECCPVerifyNR sgx_disp_ippsECCPVerifyNR
  #define ippsECCPSignSM2 sgx_disp_ippsECCPSignSM2
  #define ippsECCPVerifySM2 sgx_disp_ippsECCPVerifySM2
  #define ippsGFpGetSize sgx_disp_ippsGFpGetSize
  #define ippsGFpInitArbitrary sgx_disp_ippsGFpInitArbitrary
  #define ippsGFpInitFixed sgx_disp_ippsGFpInitFixed
  #define ippsGFpInit sgx_disp_ippsGFpInit
  #define ippsGFpMethod_p192r1 sgx_disp_ippsGFpMethod_p192r1
  #define ippsGFpMethod_p224r1 sgx_disp_ippsGFpMethod_p224r1
  #define ippsGFpMethod_p256r1 sgx_disp_ippsGFpMethod_p256r1
  #define ippsGFpMethod_p384r1 sgx_disp_ippsGFpMethod_p384r1
  #define ippsGFpMethod_p521r1 sgx_disp_ippsGFpMethod_p521r1
  #define ippsGFpMethod_p256sm2 sgx_disp_ippsGFpMethod_p256sm2
  #define ippsGFpMethod_p256bn sgx_disp_ippsGFpMethod_p256bn
  #define ippsGFpMethod_p256 sgx_disp_ippsGFpMethod_p256
  #define ippsGFpMethod_pArb sgx_disp_ippsGFpMethod_pArb
  #define ippsGFpxGetSize sgx_disp_ippsGFpxGetSize
  #define ippsGFpxInit sgx_disp_ippsGFpxInit
  #define ippsGFpxInitBinomial sgx_disp_ippsGFpxInitBinomial
  #define ippsGFpxMethod_binom2_epid2 sgx_disp_ippsGFpxMethod_binom2_epid2
  #define ippsGFpxMethod_binom3_epid2 sgx_disp_ippsGFpxMethod_binom3_epid2
  #define ippsGFpxMethod_binom2 sgx_disp_ippsGFpxMethod_binom2
  #define ippsGFpxMethod_binom3 sgx_disp_ippsGFpxMethod_binom3
  #define ippsGFpxMethod_binom sgx_disp_ippsGFpxMethod_binom
  #define ippsGFpxMethod_com sgx_disp_ippsGFpxMethod_com
  #define ippsGFpScratchBufferSize sgx_disp_ippsGFpScratchBufferSize
  #define ippsGFpElementGetSize sgx_disp_ippsGFpElementGetSize
  #define ippsGFpElementInit sgx_disp_ippsGFpElementInit
  #define ippsGFpSetElement sgx_disp_ippsGFpSetElement
  #define ippsGFpSetElementRegular sgx_disp_ippsGFpSetElementRegular
  #define ippsGFpSetElementOctString sgx_disp_ippsGFpSetElementOctString
  #define ippsGFpSetElementRandom sgx_disp_ippsGFpSetElementRandom
  #define ippsGFpSetElementHash sgx_disp_ippsGFpSetElementHash
  #define ippsGFpSetElementHash_rmf sgx_disp_ippsGFpSetElementHash_rmf
  #define ippsGFpCpyElement sgx_disp_ippsGFpCpyElement
  #define ippsGFpGetElement sgx_disp_ippsGFpGetElement
  #define ippsGFpGetElementOctString sgx_disp_ippsGFpGetElementOctString
  #define ippsGFpCmpElement sgx_disp_ippsGFpCmpElement
  #define ippsGFpIsZeroElement sgx_disp_ippsGFpIsZeroElement
  #define ippsGFpIsUnityElement sgx_disp_ippsGFpIsUnityElement
  #define ippsGFpConj sgx_disp_ippsGFpConj
  #define ippsGFpNeg sgx_disp_ippsGFpNeg
  #define ippsGFpInv sgx_disp_ippsGFpInv
  #define ippsGFpSqrt sgx_disp_ippsGFpSqrt
  #define ippsGFpSqr sgx_disp_ippsGFpSqr
  #define ippsGFpAdd sgx_disp_ippsGFpAdd
  #define ippsGFpSub sgx_disp_ippsGFpSub
  #define ippsGFpMul sgx_disp_ippsGFpMul
  #define ippsGFpExp sgx_disp_ippsGFpExp
  #define ippsGFpMultiExp sgx_disp_ippsGFpMultiExp
  #define ippsGFpAdd_PE sgx_disp_ippsGFpAdd_PE
  #define ippsGFpSub_PE sgx_disp_ippsGFpSub_PE
  #define ippsGFpMul_PE sgx_disp_ippsGFpMul_PE
  #define ippsGFpECGetSize sgx_disp_ippsGFpECGetSize
  #define ippsGFpECInit sgx_disp_ippsGFpECInit
  #define ippsGFpECSet sgx_disp_ippsGFpECSet
  #define ippsGFpECSetSubgroup sgx_disp_ippsGFpECSetSubgroup
  #define ippsGFpECInitStd128r1 sgx_disp_ippsGFpECInitStd128r1
  #define ippsGFpECInitStd128r2 sgx_disp_ippsGFpECInitStd128r2
  #define ippsGFpECInitStd192r1 sgx_disp_ippsGFpECInitStd192r1
  #define ippsGFpECInitStd224r1 sgx_disp_ippsGFpECInitStd224r1
  #define ippsGFpECInitStd256r1 sgx_disp_ippsGFpECInitStd256r1
  #define ippsGFpECInitStd384r1 sgx_disp_ippsGFpECInitStd384r1
  #define ippsGFpECInitStd521r1 sgx_disp_ippsGFpECInitStd521r1
  #define ippsGFpECInitStdSM2 sgx_disp_ippsGFpECInitStdSM2
  #define ippsGFpECInitStdBN256 sgx_disp_ippsGFpECInitStdBN256
  #define ippsGFpECBindGxyTblStd192r1 sgx_disp_ippsGFpECBindGxyTblStd192r1
  #define ippsGFpECBindGxyTblStd224r1 sgx_disp_ippsGFpECBindGxyTblStd224r1
  #define ippsGFpECBindGxyTblStd256r1 sgx_disp_ippsGFpECBindGxyTblStd256r1
  #define ippsGFpECBindGxyTblStd384r1 sgx_disp_ippsGFpECBindGxyTblStd384r1
  #define ippsGFpECBindGxyTblStd521r1 sgx_disp_ippsGFpECBindGxyTblStd521r1
  #define ippsGFpECBindGxyTblStdSM2 sgx_disp_ippsGFpECBindGxyTblStdSM2
  #define ippsGFpECGet sgx_disp_ippsGFpECGet
  #define ippsGFpECGetSubgroup sgx_disp_ippsGFpECGetSubgroup
  #define ippsGFpECScratchBufferSize sgx_disp_ippsGFpECScratchBufferSize
  #define ippsGFpECVerify sgx_disp_ippsGFpECVerify
  #define ippsGFpECPointGetSize sgx_disp_ippsGFpECPointGetSize
  #define ippsGFpECPointInit sgx_disp_ippsGFpECPointInit
  #define ippsGFpECSetPointAtInfinity sgx_disp_ippsGFpECSetPointAtInfinity
  #define ippsGFpECSetPoint sgx_disp_ippsGFpECSetPoint
  #define ippsGFpECSetPointRegular sgx_disp_ippsGFpECSetPointRegular
  #define ippsGFpECSetPointRandom sgx_disp_ippsGFpECSetPointRandom
  #define ippsGFpECMakePoint sgx_disp_ippsGFpECMakePoint
  #define ippsGFpECSetPointHash sgx_disp_ippsGFpECSetPointHash
  #define ippsGFpECSetPointHash_rmf sgx_disp_ippsGFpECSetPointHash_rmf
  #define ippsGFpECGetPoint sgx_disp_ippsGFpECGetPoint
  #define ippsGFpECGetPointRegular sgx_disp_ippsGFpECGetPointRegular
  #define ippsGFpECSetPointOctString sgx_disp_ippsGFpECSetPointOctString
  #define ippsGFpECGetPointOctString sgx_disp_ippsGFpECGetPointOctString
  #define ippsGFpECTstPoint sgx_disp_ippsGFpECTstPoint
  #define ippsGFpECTstPointInSubgroup sgx_disp_ippsGFpECTstPointInSubgroup
  #define ippsGFpECCpyPoint sgx_disp_ippsGFpECCpyPoint
  #define ippsGFpECCmpPoint sgx_disp_ippsGFpECCmpPoint
  #define ippsGFpECNegPoint sgx_disp_ippsGFpECNegPoint
  #define ippsGFpECAddPoint sgx_disp_ippsGFpECAddPoint
  #define ippsGFpECMulPoint sgx_disp_ippsGFpECMulPoint
  #define ippsGFpECPrivateKey sgx_disp_ippsGFpECPrivateKey
  #define ippsGFpECPublicKey sgx_disp_ippsGFpECPublicKey
  #define ippsGFpECTstKeyPair sgx_disp_ippsGFpECTstKeyPair
  #define ippsGFpECSharedSecretDH sgx_disp_ippsGFpECSharedSecretDH
  #define ippsGFpECSharedSecretDHC sgx_disp_ippsGFpECSharedSecretDHC
  #define ippsGFpECSignDSA sgx_disp_ippsGFpECSignDSA
  #define ippsGFpECVerifyDSA sgx_disp_ippsGFpECVerifyDSA
  #define ippsGFpECSignNR sgx_disp_ippsGFpECSignNR
  #define ippsGFpECVerifyNR sgx_disp_ippsGFpECVerifyNR
  #define ippsGFpECSignSM2 sgx_disp_ippsGFpECSignSM2
  #define ippsGFpECVerifySM2 sgx_disp_ippsGFpECVerifySM2
  #define ippsGFpECESGetSize_SM2 sgx_disp_ippsGFpECESGetSize_SM2
  #define ippsGFpECESInit_SM2 sgx_disp_ippsGFpECESInit_SM2
  #define ippsGFpECESSetKey_SM2 sgx_disp_ippsGFpECESSetKey_SM2
  #define ippsGFpECESStart_SM2 sgx_disp_ippsGFpECESStart_SM2
  #define ippsGFpECESEncrypt_SM2 sgx_disp_ippsGFpECESEncrypt_SM2
  #define ippsGFpECESDecrypt_SM2 sgx_disp_ippsGFpECESDecrypt_SM2
  #define ippsGFpECESFinal_SM2 sgx_disp_ippsGFpECESFinal_SM2
  #define ippsGFpECESGetBuffersSize_SM2 sgx_disp_ippsGFpECESGetBuffersSize_SM2


#ifdef __cplusplus
}
#endif
#endif
