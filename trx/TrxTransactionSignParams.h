//
//  XrpTransactionSignParams.h
//  coinapi
//
//  Created by xgc on 1/4/19.
//  Copyright © 2019 xgc. All rights reserved.
//

#import "TransactionSignParams.h"
#import "CABtSeed.h"


class TrxCreateSignTransactionParams;

@interface TrxTransactionSignParams : TransactionSignParams

-(TrxCreateSignTransactionParams*) toTrxCreateSignTransactionParams;
@property(nonatomic, retain) CABtSeed* btSeed;
@property(nonatomic, copy) NSString* password;
@property(nonatomic, copy) NSString* rawJson;
@property(nonatomic, copy) NSString* priKey;
@end
