//
//  BtsTransactionSignParams.h
//  coinapi
//
//  Created by xgc on 8/29/18.
//  Copyright © 2018 xgc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TransactionSignParams.h"
#import "CABtSeed.h"
#import "CABaseOperation.h"

class BtsCreateSignTransactionParams;

@interface BtsTransactionSignParams : TransactionSignParams
-(BtsCreateSignTransactionParams*)toBtsCreateSignTransactionParamsBySymbol: (NSString*)symbol;
@property(nonatomic, retain) CABtSeed* btSeed;
@property(nonatomic, copy) NSString* password;
@property(nonatomic, copy) NSString* priKey;
@property(nonatomic, copy) NSString* chainId;
@property(nonatomic, assign) NSInteger refBlockNum;
@property(nonatomic, assign) NSInteger refBlockPrefix;
@property(nonatomic, assign) NSInteger expiration;
@property(nonatomic, retain) NSMutableArray<CABaseOperation*>* ops;
@end
