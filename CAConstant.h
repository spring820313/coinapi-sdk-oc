//
//  CAConstant.h
//  coinapi
//
//  Created by xgc on 9/4/18.
//  Copyright © 2018 xgc. All rights reserved.
//

#ifndef CAConstant_h
#define CAConstant_h

enum CoinType {
    BTC = 1,
    ETH,
    WICC,
    BTS,
    AFT,
    LTC,
    SBTC,
    DOGE,
    ETC,
    WBTC,
    ZEC,
    DSH,
    BCH,
    QTUM,
    LBTC,
    NEO,
    GAS,
    XZC,
    USDT,
    BCO,
    BHD,
    EOS,
    IPC,
    XRP,
    MC = 1005
};


enum NetworkType {
    MAIN = 1,
    TEST = 2,
    REGTEST = 3
};

enum AddressType {
    AddrNone = 0,
    AddrP2KH = 1,
    AddrP2SH = 2,
    AddrMulti = 3,
};


enum TxType
{
    TX_NONE = 0,
    TX_LBTC_REGISTER = 1,
    TX_LBTC_VOTE = 2,
    TX_LBTC_CANCELVOTE = 3,
    TX_QTUM_TOKEN_TRANSFER = 4,
    TX_WICC_REGISTERACCOUNT = 5,
    TX_WICC_COMMON = 6,
    TX_WICC_TRANSFER_SPC = 7,
    TX_WICC_BET = 8,
    TX_WICC_DELEGATE = 9
};


#endif /* CAConstant_h */
