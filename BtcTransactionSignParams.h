//
//  BtcTransactionSignParams.h
//  Test
//
//  Created by xgc on 12/26/17.
//  Copyright © 2017 xgc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TransactionSignParams.h"
#import "CABtSeed.h"


class BtcCreateSignTransactionParams;

@interface BtcTransactionSignParams : TransactionSignParams

-(BtcCreateSignTransactionParams*) toBtcCreateSignTransactionParams;

@property(nonatomic, retain) CABtSeed* btSeed;
@property(nonatomic, copy) NSString* fromAddress;
@property(nonatomic, copy) NSString* sendAddress;
@property(nonatomic, assign) UInt64 sendValue;
@property(nonatomic, assign) UInt64 feePerKb;
@property(nonatomic, copy) NSString* password;
@property(nonatomic, copy) NSString* priKey;
@property(nonatomic, retain) NSMutableArray* btcvoutFormList;
@property(nonatomic, assign) BOOL recipientsPayFees;
@property(nonatomic, copy) NSMutableData* data;
@property(nonatomic, assign) NSInteger txType;

@end
