//
//  EthTransactionSignParams.h
//  Test
//
//  Created by xgc on 1/5/18.
//  Copyright © 2018 xgc. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "TransactionSignParams.h"
#import "CABtSeed.h"


class EthCreateSignTransactionParams;

@interface EthTransactionSignParams : TransactionSignParams

-(EthCreateSignTransactionParams*) toEthCreateSignTransactionParams;

@property(nonatomic, retain) CABtSeed* btSeed;
@property(nonatomic, copy) NSString* password;
@property(nonatomic, copy) NSString* from;
@property(nonatomic, copy) NSString* to;
@property(nonatomic, copy) NSString* gasLimit;
@property(nonatomic, copy) NSString* gasPrice;
@property(nonatomic, copy) NSString* value;
@property(nonatomic, copy) NSMutableData* data;
@property(nonatomic, copy) NSString* nonce;
@property(nonatomic, copy) NSString* priKey;
@end
