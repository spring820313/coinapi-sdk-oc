//
//  XrpTransactionSignParams.h
//  coinapi
//
//  Created by xgc on 1/4/19.
//  Copyright © 2019 xgc. All rights reserved.
//

#import "TransactionSignParams.h"
#import "CABtSeed.h"


class XrpCreateSignTransactionParams;

@interface XrpTransactionSignParams : TransactionSignParams

-(XrpCreateSignTransactionParams*) toXrpCreateSignTransactionParams;
@property(nonatomic, retain) CABtSeed* btSeed;
@property(nonatomic, copy) NSString* password;
@property(nonatomic, copy) NSString* from;
@property(nonatomic, copy) NSString* to;
@property(nonatomic, assign) NSInteger sequence;
@property(nonatomic, assign) NSInteger destinationTag;
@property(nonatomic, assign) UInt64 value;
@property(nonatomic, assign) UInt64 fees;
@property(nonatomic, copy) NSMutableData* memo;
@property(nonatomic, copy) NSString* priKey;
@end
