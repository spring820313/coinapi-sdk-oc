//
//  CoinApi.h
//  Test
//
//  Created by xgc on 12/25/17.
//  Copyright © 2017 xgc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class CABtSeed;
@class CANetParams;
@class CABtWallet;
@class TransactionSignParams;
@class EOSTransferAction;
@class EOSBuyRamAction;
@class EOSBuyRamBytesAction;
@class EOSDelegateBwAction;
@class EOSUndelegateBwAction;
@class EOSellRamAction;
@class EOSRefundAction;
@class EOSNewAccountAction;
@class EOSUpdateAuthAction;
@class EOSDeleteAuthAction;
@class CAMemoData;
@class MultiAddrBtcTransactionSignParams;
@class MultiAddrSpecialBtcTransactionSignParams;
@class CANetParamsV2;

@interface CoinApi : NSObject

+(id)sharedManager;

/*
 获取助记词列表
 */
-(NSMutableArray*) createAllCoinMnemonicCode;

/*
 检查助记词列表
 */
-(BOOL) checkMnemonicCode:(NSArray*)words;

/*
 根据 加密种子获取 解密后的私钥
 */
-(NSString*) getPriKeyFromBtSeed:(CABtSeed*) btSeed withPassword:(NSString*) password withNetParams:(CANetParams*) netParams;

/*
 根据 加密种子获取 解密后的助记词
 */
-(NSMutableArray*) getMnemonicCodeFromBtSeed:(CABtSeed*) btSeed withPassword:(NSString*) password withNetParams:(CANetParams*) netParams;

/*
 验证地址有效性
 */
-(BOOL) validateAddress:(NSString*) address withNetParams:(CANetParams*) netParams;

/*
 修改密码
 */
-(CABtSeed*) changePassword: (CABtSeed*) btSeed withOldPassword: (NSString*)oldPassword withNewPassword: (NSString*) newPassword withNetParams:(CANetParams*) netParams;

/*
 一次创建一个地址
 */
-(CABtWallet*) createWallet: (NSString*) words withPassword: (NSString*)password withNetParams: (CANetParams*) netParams;

/*
 一次创建多种币种钱包
 */
-(NSMutableArray*) createWallets: (NSString*) words withPassword: (NSString*)password withNetParamList: (NSArray*) netParamList;

/*
 创建签名交易
 */
-(NSMutableDictionary*) createSignTransaction: (TransactionSignParams*) signParams withNetParams: (CANetParams*) netParams;

/*
 token转账
*/
-(NSMutableData*) getTokenTransferBinary: (NSString*)address withValue: (NSString*)value;

/*
 LBTC注册
*/
-(NSMutableData*) getLbtcRegister: (NSString*) address withPrikey: (NSString*) prikey withName: (NSString*) name withNetParams: (CANetParams*) netParams;

/*
 LBTC投票
*/
-(NSMutableData*) getLbtcVote: (NSString*) address withPrikey: (NSString*) prikey withAddrList: (NSArray*) addrList withNetParams: (CANetParams*) netParams;

/*
 LBTC取消投票
*/
-(NSMutableData*) getLbtcCancelVote: (NSString*) address withPrikey: (NSString*) prikey withAddrList: (NSArray*) addrList withNetParams: (CANetParams*) netParams;

/*
 wicc 超级币转账合约
 */
-(NSMutableData*) getSpcContractData: (NSString*) address withSpc: (UInt64) spc;

/*
 wicc 投注合约
 */
-(NSMutableData*) getBetContractData: (NSString*) lid withAddr: (NSString*) address withType: (NSInteger)ltype withBetItemList: (NSArray*) betList;

/*
 eth 签名
 */
-(NSMutableDictionary*) eth_sign: (NSString*) ethPrivkey withAddress: (NSString*) wiccAddress;

/*
 根据 加密种子获取 解密后的主私钥和主公钥
 */
-(NSMutableDictionary*) getHdKeyFromBtSeed: (CABtSeed*) btSeed withPassword: (NSString*) password withNetParams: (CANetParams*) netParams;

/*
 根据 主公钥和path，获取地址
 */
-(NSString*) getAddressFromMasterPubKey: (NSString*) masterPubkey withNetParams: (CANetParams*) netParams;

/*
 根据主私钥和path，获取私钥
 */
-(NSString*) getPriKeyFromMasterPriKey: (NSString*) masterPrikey withNetParams: (CANetParams*) netParams;

/*
 根据私钥获取地址
 */
-(NSString*) getAddressFromPriKey: (NSString*) priKey withNetParams: (CANetParams*) netParams;

/*
 根据私钥获取公钥
 */
-(NSString*) getPubKeyFromPriKey: (NSString*) priKey withNetParams: (CANetParams*) netParams;

/*
 多签：获取地址
 */
-(NSString*) multiGetAddress: (NSInteger) m withPubkeys: (NSArray*) pubkeys withNetParams: (CANetParams*) netParams;

/*
 多签：获取原始未签名交易
 */
-(NSMutableDictionary*) multiGetUnsignedTransaction: (TransactionSignParams*) signParams withNumber: (NSInteger) m withPubkeys: (NSArray*) pubkeys withNetParams: (CANetParams*) netParams;

/*
 多签：用私钥签名原始交易
 */
-(NSMutableDictionary*) multiSign: (NSString*) hex withNumber: (NSInteger) m withPubkeys: (NSArray*) pubkeys withPrikey: (NSString*) prikey withNetParams: (CANetParams*) netParams;

/*
 多签：获取签名交易
 */
-(NSString*) multiGetSignedTransaction: (NSString*) hex withNumber: (NSInteger) m withPubkeys: (NSArray*) pubkeys withSigns: (NSMutableDictionary*) signs withNetParams: (CANetParams*) netParams;

/*
 多签：获取签名交易
 */
-(NSMutableDictionary*) multiGetSignedTransactionEx: (NSString*) hex withNumber: (NSInteger) m withPubkeys: (NSArray*) pubkeys withSigns: (NSMutableDictionary*) signs withNetParams: (CANetParams*) netParams;

/*
 EOS：转代币
 */
-(NSString*) eosTransfer: (TransactionSignParams*) signParams withNetParams: (CANetParams*) netParams withAction: (EOSTransferAction*) transfer;

/*
 EOS：买RAM
 */
-(NSString*) eosBuyRam: (TransactionSignParams*) signParams withNetParams: (CANetParams*) netParams withAction: (EOSBuyRamAction*) buyRamAction;

/*
 EOS：买RAM（字节）
 */
-(NSString*) eosBuyRamBytes: (TransactionSignParams*) signParams withNetParams: (CANetParams*) netParams withAction: (EOSBuyRamBytesAction*) buyRamBytesAction;

/*
 EOS：抵押
 */
-(NSString*) eosDelegateBw: (TransactionSignParams*) signParams withNetParams: (CANetParams*) netParams withAction: (EOSDelegateBwAction*) delegateBwAction;

/*
 EOS：撤销抵押
 */
-(NSString*) eosUndelegateBw: (TransactionSignParams*) signParams withNetParams: (CANetParams*) netParams withAction: (EOSUndelegateBwAction*) undelegateBwAction;

/*
 EOS：卖RAM
 */
-(NSString*) eosSellRam: (TransactionSignParams*) signParams withNetParams: (CANetParams*) netParams withAction: (EOSellRamAction*) sellRamAction;

/*
 EOS：赎回
 */
-(NSString*) eosRefund: (TransactionSignParams*) signParams withNetParams: (CANetParams*) netParams withAction: (EOSRefundAction*) refundAction;

/*
 EOS：新建账户
 */
-(NSString*) eosNewAccount: (TransactionSignParams*) signParams withNetParams: (CANetParams*) netParams withAction: (EOSNewAccountAction*) newAccountAction withAction: (EOSBuyRamBytesAction*) buyRamBytesAction withAction: (EOSDelegateBwAction*) delegateBwAction;

/*
 EOS：修改权限
 */
-(NSString*) eosUpdateAuth: (TransactionSignParams*) signParams withNetParams: (CANetParams*) netParams withAction: (EOSUpdateAuthAction*) updateAuthAction;

/*
 EOS：删除权限
 */
-(NSString*) eosDeleteAuth: (TransactionSignParams*) signParams withNetParams: (CANetParams*) netParams withAction: (EOSDeleteAuthAction*) deleteAuthAction;

/*
 BTS：估算Memo大小
 */
-(NSInteger) estimateMemoSize: (CAMemoData*) memoData whithAddressPrefix: (NSString*) addressPrefix;

/*
 生成Usdt script数据
 */
-(NSMutableData*) getUsdtContract: (UInt32) propertyId withAmount: (UInt64)amount;

/*
 消息签名
 */
-(NSMutableDictionary*) signMessage: (NSString*) priKey withMessage: (NSMutableData*) message withNetParams: (CANetParams*) netParams;

/*
 验证签名
 */
-(BOOL) verifySign: (NSString*) pubKey withHash: (NSString*) hash withSignature: (NSString*) signature withNetParams: (CANetParams*) netParams;

/*
 创建多地址签名交易
 */
-(NSMutableDictionary*) createMultiAddrSignTransaction: (MultiAddrBtcTransactionSignParams*) multiAddrSignParams withNetParams: (CANetParams*) netParams;

/*
 根据公钥，获取地址
 */
-(NSString*) getAddressFromPubKey: (NSString*) pubkey withNetParams: (CANetParams*) netParams;

/*
 一次获取多种币种主公钥，主私钥
 */
-(NSMutableArray*) getMultiHdKeyFromBtSeed: (CABtSeed*) btSeed withPassword: (NSString*) password withNetParamList: (NSArray*) netParamList;

/*
 EOS：验证私钥有效性
 */
-(BOOL) validateWif: (NSString*) priKey withNetParams: (CANetParams*) netParams;

/*
 验证密码
 */
-(BOOL) verifyPassword: (CABtSeed*) btSeed withPassword:(NSString*) password;

/*
 lbtc注册V2
 */
-(NSMutableData*) getLbtcRegisterV2: (NSMutableData*) name;

/*
 lbtc投票V2
 */
-(NSMutableData*) getLbtcVoteV2: (NSArray*) voteAddressList;

/*
 lbtc取消投票V2
 */
-(NSMutableData*) getLbtcCancelVoteV2: (NSArray*) voteAddressList;

/*
 根据 加密种子获取 解密后的3级主私钥和主公钥
 */
-(NSMutableDictionary*) get3LevelHdKeyFromBtSeed: (CABtSeed*) btSeed withPassword: (NSString*) password withNetParams: (CANetParams*) netParams;

/*
 根据 3级主公钥和path，获取地址
 */
-(NSString*) getAddressFrom3LevelMasterPubKey: (NSString*) masterPubkey withNetParams: (CANetParams*) netParams;

/*
 根据 3级主私钥和path，获取私钥
 */
-(NSString*) getPriKeyFrom3LevelMasterPriKey: (NSString*) masterPrikey withNetParams: (CANetParams*) netParams;

/*
 根据 3级主公钥和path，获取公钥
 */
-(NSString*) getPubKeyFrom3LevelMasterPubKey: (NSString*) masterPubkey withNetParams: (CANetParams*) netParams;

/*
 创建多地址签名交易(全部转出)
 */
-(NSMutableDictionary*) createSpecialMultiAddrSignTransaction: (MultiAddrSpecialBtcTransactionSignParams*) multiAddrSignParams withNetParams: (CANetParams*) netParams;

/*
 估算btc手续费
 */
-(NSString*) estimateFees: (MultiAddrBtcTransactionSignParams*) multiAddrSignParams withNetParams: (CANetParams*) netParams;

/*
 一次创建一个地址(可以选择地址格式)
 */
-(CABtWallet*) createWalletV2: (NSString*) words withPassword: (NSString*) password withNetParamsV2: (CANetParamsV2*) netParams;

/*
 一次创建多种币种钱包(可以选择地址格式)
 */
-(NSMutableArray*) createWalletsV2: (NSString*) words withPassword: (NSString*) password  withNetParamList: (NSArray*) netParamList;

/*
 创建多地址签名交易(兼容P2SH segwit,只支持btc, ltc, bhd 16.0以上版本)
 */
-(NSMutableDictionary*) createMultiAddrSignTransactionV2: (MultiAddrBtcTransactionSignParams*) multiAddrSignParams withNetParams: (CANetParamsV2*) netParams;

/*
 创建签名交易(兼容P2SH 1:1 multi sign)
 */
-(NSMutableDictionary*) createSignTransactionV2: (TransactionSignParams*) signParams withNetParams: (CANetParams*) netParams;

/*
 创建Omni多地址签名交易
 */
-(NSMutableDictionary*) createOmniMultiAddrSignTransaction: (MultiAddrBtcTransactionSignParams*) multiAddrSignParams withNetParams: (CANetParams*) netParams withHeight: (NSInteger) height;

/*
 Omni多签：获取原始未签名交易
 */
-(NSMutableDictionary*) multiOmniGetUnsignedTransaction: (MultiAddrBtcTransactionSignParams*) signParams withNetParams: (CANetParams*) netParams;

/*
 Omni多签：用私钥签名原始交易
 */
-(NSMutableDictionary*) multiOmniSign: (NSString*) hex withPrikey: (NSString*) prikey withStartIndex: (NSInteger) startIndex withIndexCount: (NSInteger) indexCount withNetParams: (CANetParams*) netParams;

/*
 Omni多签：用私钥签名原始交易
 */
-(NSMutableDictionary*) multiOmniGetSignedTransaction: (NSString*) hex withSigns: (NSMutableDictionary*) signs withNetParams: (CANetParams*) netParams;

@end
