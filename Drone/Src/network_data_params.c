/**
  ******************************************************************************
  * @file    network_data_params.c
  * @author  AST Embedded Analytics Research Platform
  * @date    2026-02-08T21:55:54+0900
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#include "network_data_params.h"


/**  Activations Section  ****************************************************/
ai_handle g_network_activations_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(NULL),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};




/**  Weights Section  ********************************************************/
AI_ALIGNED(32)
const ai_u64 s_network_weights_array_u64[354] = {
  0xbe99c113be8c4e34U, 0x3ca3f4a0bd173250U, 0xbe2e63a3be49850bU, 0x3ece40d2bee1ff7bU,
  0xbe907eba3e1670e8U, 0x3e450f063d94f27bU, 0xbde468083d009030U, 0xbe419097be91fedeU,
  0x3e83027fbeeea0c6U, 0xbe71218abead6d4eU, 0x3ef1202a3e8bd14fU, 0xbd4829b63eb7672eU,
  0xbe325e013eff84d2U, 0x3df5f49cbcc66b03U, 0xbe824dce3c7d8c80U, 0xbdfb70fc3d9c624cU,
  0xbed848f1be5790d2U, 0x3e82c1663e6b8047U, 0xbe271cf4be748405U, 0x3f16f25fbea83a44U,
  0x3d7f4a98be26ee7eU, 0x3eaa89c83e8186d7U, 0xbe7971f83d5e3781U, 0x3e429043bede0804U,
  0x3ed19f71bdb24694U, 0xbeb0f3a2bea781ccU, 0xbe723a0dbe75edd0U, 0x3e7626c6beaf89a8U,
  0xbedaaf56bea81b82U, 0x3d995063bec55439U, 0xbf481f293f27aaf7U, 0xbeee6aad3cb4fffcU,
  0x3e5d1105b9858862U, 0xbe56fc0d3d94e5c0U, 0x3df7544cbe9ef30cU, 0xbe7abbbe3ea7fc21U,
  0xbec2b39e3db37d5aU, 0x3cf8f2d03e6a364dU, 0xbe7efef2be02fb56U, 0x3c844ed0beac83dbU,
  0x3ed239813e068156U, 0xbed01325bdc56914U, 0x3e9a89823ef95fd6U, 0x3eb52fa23dd1bcecU,
  0x3e0a3bd53e86b4e5U, 0xbe36a7b0be8d4091U, 0x3e78f01bbe0b3f1aU, 0xbc5e8bffbeed66bbU,
  0xbc3650e7U, 0xbf46731fbfe50f9eU, 0xbfb1750a00000000U, 0xbf5e9d883f7aec27U,
  0xbfdad412U, 0x401edfd900000000U, 0x3fabbbea00000000U, 0xc023eab7bf149423U,
  0x0U, 0x3feef8f000000000U, 0xc01797f53e87f88aU, 0x0U,
  0xc015217bU, 0xbf977908U, 0xbfccbed34006b4a4U, 0x4007ed7200000000U,
  0x3ea25c5bbea20f80U, 0xbe16acf2bea2dbbaU, 0xbe665d1a3daa1760U, 0xbe3e37853e8efd0bU,
  0xbe80ebb63db03406U, 0x3e4b576a3c8199d0U, 0xbed2021a3e92b977U, 0x3e40f9a5bdcbe5e0U,
  0x3e870fc93e9fd231U, 0x3e98b7623c9d9d40U, 0x3c18713abf2a50beU, 0xbe1391aabea61c87U,
  0xbeb4c974be82c118U, 0xbeac520a3e8705f2U, 0x3dec5e27be9cbae0U, 0xbf10f11abd2dee10U,
  0xbe0b20433e97ca08U, 0x3e3ed6273e447edbU, 0xbdb2f66abe803c34U, 0x3da9fd9d3c967834U,
  0x3d6c1fa83f15e6b1U, 0xbe964cd6be9a8b33U, 0x3e5e68babe1a18faU, 0x3e8e5c143d789da4U,
  0x3e5059063eabf291U, 0x3d83f9153cef7040U, 0xbf1e87a03d6103abU, 0xbde7f2c23c9df300U,
  0x3e6af09abcbfe3ddU, 0xbe17c1f3be34eeadU, 0xbeb26dd3be29acc7U, 0x3d1d5684be75c256U,
  0xbea7f135bead2d74U, 0x3db5f2b0be2798daU, 0x3e866c8b3d22b680U, 0xbf3b85dbbe7c204fU,
  0x3e20e60e3ea5ef2fU, 0x3d8454253e18e70aU, 0x3ea2d31e3dfff854U, 0xbebcf2e8be848c0bU,
  0xbdfe08083e50a0a2U, 0x3ec485fe3da2b8e4U, 0x3d3490e33ea49691U, 0x3dcb227cbc0993e0U,
  0xbe586b73be822653U, 0xbc124200bdacc776U, 0x3e474d803eaf270bU, 0xba23729c3ea2e31fU,
  0xbd794d703e86a123U, 0xbeb2f752beacc933U, 0xbdbaf8193eabd481U, 0x3de449123e00de3fU,
  0xbe275c323dda440eU, 0x3da4a5a43e6c40f2U, 0xbed0392e3cf74cb0U, 0xbcd738663d445e86U,
  0xbe1ac5d8be627053U, 0xbd05d8b83d371fd8U, 0xbc668564bea2e9c9U, 0x3eaffa033d61bb58U,
  0x3e9d84d1bddd6506U, 0xbe86f2babe87d87cU, 0x3df5744c3df8e0c0U, 0x3ea4f299be56be8cU,
  0x3e3850bebe25a22aU, 0x3e8f4973beab0761U, 0x3d7a57903d9d3014U, 0xbbf006c0be3ad289U,
  0x3d9e4c48be1d1551U, 0xbea4acfdbe8adfc8U, 0xbe7de0d6bdf7d7ceU, 0xbeaad04d3e03f57aU,
  0xbe14306f3e7bda7aU, 0xbe483c833e24a156U, 0xbea381623e257bceU, 0x3d4dbf80bd8cf870U,
  0xbe60477b3cc39e90U, 0x3eb00a413e9c05d7U, 0xbb54cb80be9355feU, 0xbe86f17bbe82b2fdU,
  0xbbfa8fc0be86b934U, 0x3e554a9dbea0f0eaU, 0xbe7ef497bda48c08U, 0xbf0253e73e6c0f51U,
  0xbe50693dbf0584b7U, 0x3e0974283e545cd6U, 0x3dd287e7be0420bdU, 0xbc01de173dfb33ecU,
  0x3e2bf2c6bdca1070U, 0x3df718b7be80946bU, 0x3d8c21423dd1d038U, 0xbd6c40e0bea4f6f5U,
  0xbd33ec50be916e74U, 0x3c9e9e803d9a9154U, 0x3d6613873e45a7bfU, 0x3ebd0496be19918cU,
  0x3e9e755f3e7b8f06U, 0xbcd7f9f4be68dcf4U, 0x3e7f0da5bd27dd40U, 0xbc725e8bbe975462U,
  0x3e4063123e913a8eU, 0xbe96f49a3d8e061cU, 0xbda92b7cbb95d180U, 0xbe42db963eaff2ddU,
  0x3e03c0923e9b2291U, 0xbe8e657e3e366166U, 0xbe8d0356bdd9f009U, 0x3da68dd43e05600aU,
  0x3ead630d3c62ba72U, 0xbd0724a03e509866U, 0xbd87077f3eaa9845U, 0x3e4f76583e6aadb2U,
  0xbe9228f13e6c4bfeU, 0x3bc15110be31c8afU, 0x3e99e0ce3d7a3190U, 0xbee0115c3b7dcf76U,
  0x3d61e0a0bedd73d0U, 0x3e8d0d3b3e184e12U, 0xbe4b9595bd2ba8d8U, 0xbe1de4e03d87e0c5U,
  0x3e928321bc3e73c0U, 0x3ed60adfbca92210U, 0xbddde0a1bf496558U, 0xbe27e42ebe6aa27dU,
  0x3e21c366be8ae088U, 0x3e01c68c3e8c90a1U, 0xbed1feeb3ddda739U, 0xbf7fbce03d152c88U,
  0x3e41a06ebe8082bfU, 0x3cf0744d3eb73fd0U, 0xbc17f2613e82b193U, 0xbe5f2d2e3ec15da3U,
  0xbe941ad83e864d34U, 0x3e241073be860da0U, 0x3d2b47b93e9c34f7U, 0x3e0e7243be111122U,
  0x3e230cb2be0df763U, 0x3e251c98beb3ad3dU, 0xbd2cc9acbeaea1e5U, 0xbeb13083bd9dd120U,
  0x3cfbecf0be811693U, 0xbdcc15c83eb110c3U, 0x3de99aadbebeb073U, 0x3e1895b53e94069bU,
  0x3eb3217d3e402ffeU, 0x3d87170d3ee3f70dU, 0x3eca42cbbde2cddcU, 0x3f21a7fcbe490391U,
  0x3e3105da3f176315U, 0xbe9c0479be531919U, 0xbe78c1683e0ebacaU, 0x3e506c26be5ad801U,
  0xbe747e38be3fb0d6U, 0xbe71ff5fbeb26275U, 0x3e39da6ebf06c88eU, 0xbdf68e6e3e607ce2U,
  0x3e2c569a3df08fb2U, 0x3df3017c3e8cd18bU, 0xbcddcb2b3e70d936U, 0x3f0b21283e5c091aU,
  0x3e89334d3e8a6b49U, 0x3de6fb113c73137aU, 0x3e505fd63e4d5092U, 0xbeb8a71b3d3d4a42U,
  0xbeaf4a2e3cd87390U, 0xbe8a1983bdc0e918U, 0xbdf4f009be009520U, 0x3df11f20be9308ceU,
  0x3dfd8460be5638c5U, 0xbe0174cf3e3ce1deU, 0xbc2a8a82bead2bd9U, 0xbd8fc610be3e0b28U,
  0xbdee6274be6b4115U, 0x3e822ea13d0730d9U, 0x3dab52513e63849aU, 0x3e1db0a2be399955U,
  0x3e52d536be54d447U, 0xbd967426bd2c14c0U, 0xbd1f921b3d79e830U, 0xbe8718babeb79ee1U,
  0x3cbabba03e492438U, 0xbe28e49c3d3cfb88U, 0x3e7cd95c3ea58cefU, 0xbe92557bbea32682U,
  0x3da4a4bc3e86de17U, 0x3d4712e03d227ec0U, 0x3e1630cf3e78e496U, 0xbc8210c03ea1fbdbU,
  0xbe74f656bc676aafU, 0x3eab21c3bead115eU, 0xbeaeaa273b98823eU, 0x3ea0f5edbe6b75d9U,
  0x3d91ae183d1bf70cU, 0xbe1415533e7506f6U, 0xbde8e26abe58abf9U, 0xbdac65f33e42a314U,
  0xbd6e01b8bf6d0ebeU, 0x3e26be18bc8c38a0U, 0x3e9df558bd2ec948U, 0xbed38352be81c454U,
  0xbd0d6660be11d8c3U, 0x3ef3ad59be6b7ac0U, 0xbe9e72f0bf16a816U, 0xbda029c43eadbcf9U,
  0x3e9973b1be00c13eU, 0xbd3d45e0be2982f3U, 0xbdc977663ec4e13fU, 0x3f9376e1be869380U,
  0x3eaaa66b3e09f5dcU, 0x3e12f3d33e84fa35U, 0xbd840a0bbc2ca660U, 0x3cab23e7be765638U,
  0xbc7095c03ef8c637U, 0x3e9f3b743e864ad5U, 0x3d765a0b3df918f8U, 0xbeb7cfdc3ea49d56U,
  0x3e519efa3e8b5d8fU, 0xbf0e2858be8bc78fU, 0xbe921d70bdda2fd9U, 0x3e6c21a6be4726b5U,
  0x3e8e1661bead7ff6U, 0xbe96f1c63d901930U, 0x3ec703703d8e7c11U, 0x3e843278bd8a6230U,
  0xbe9bbba4bd689000U, 0x3e2de79ebde24686U, 0xbf2ec4b13d7779d8U, 0xbe7f6263bd19d8f6U,
  0xbe1974c13ef9d53fU, 0x3d2f6089bd260e60U, 0xbeb7f1a8be6544c2U, 0xbe9b0add3ead5e3cU,
  0xbdf9c8323e88003fU, 0xbe2d78efbead1ac2U, 0xbeb96dca3ec5a1a0U, 0x3e82c831be515f23U,
  0x3d4005b8bf05c13aU, 0xbe479df73c5b120bU, 0x3cd121d63ebb6dacU, 0xbf86b568b8dae000U,
  0xbdecbddcbe82ecedU, 0x3e41a5563e9f4bfdU, 0xbe5dcef3bd871c0cU, 0xbe99345abe4281c0U,
  0xbe692496be0bd33aU, 0xba85cc003dc94aa0U, 0x3e21b1ea3dd0c988U, 0xbaf32200be512598U,
  0x3ea9c57bbe2067a8U, 0xbe31d367be7a176aU, 0xbeaddba2be7d76bfU, 0x3e2237923ea66bb3U,
  0x3d987c24bd347850U, 0xbe9b23f5be01da10U, 0xbe9a8169bd961310U, 0xbe5e512b3e471682U,
  0x3e8e98643fe28983U, 0xbd3e02153f95bec8U, 0x40013b4300000000U, 0x4002891d3a5d9127U,
  0xc0065a36c004f879U, 0x3ded4f6bbcb9b0a5U, 0x3f3fe54d400451d8U, 0xbcb4f8e4U,
  0xbeb23e653e66e0c5U, 0x3ed325b93ea388d0U, 0xbe839d81bdbe2388U, 0x3f0ee3cbbdc82cfaU,
  0xbdc9884abee3eb66U, 0x3d29bb853d170352U, 0xbc41193b3f6030aaU, 0xbd520e40bec3ed59U,
  0x3ecf2713be5b7b4bU, 0xbe46b8383ea73fa5U, 0xbe6bdea1bdee4c40U, 0xbf1260cc3f0fc140U,
  0x3d934776bd028fa8U, 0xbf11a975be920b0eU, 0x3ec05217bf26e388U, 0xbf093d493f998bfaU,
  0xbe43f3bbbedfae63U, 0x3e3be014bdc73938U, 0xbf0e9ba23e201968U, 0xbf6036053e881d95U,
  0x3f1c1f463e8a6dfeU, 0x3e9e5936bec8ce07U, 0x3dcb1f29bfeda619U, 0x3e484c74bedeafafU,
  0xbf3551e33fc8c680U, 0xc0016973U,
};


ai_handle g_network_weights_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(s_network_weights_array_u64),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};

