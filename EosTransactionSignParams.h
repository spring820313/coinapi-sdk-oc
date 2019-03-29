//
//  EosTransactionSignParams.h
//  coinapi
//
//  Created by xgc on 9/4/18.
//  Copyright © 2018 xgc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TransactionSignParams.h"
#import "CABtSeed.h"

class EosCreateSignTransactionParams;

@interface EosTransactionSignParams : TransactionSignParams
-(EosCreateSignTransactionParams*)toEosCreateSignTransactionParams;
@property(nonatomic, retain) CABtSeed* btSeed;
@property(nonatomic, copy) NSString* password;
@property(nonatomic, copy) NSString* priKey;
@property(nonatomic, copy) NSString* chainId;
@property(nonatomic, copy) NSString* headBlockId;
@property(nonatomic, assign) NSInteger expiration;
@end
