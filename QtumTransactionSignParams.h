//
//  EthTransactionSignParams.h
//  Test
//
//  Created by xgc on 1/5/18.
//  Copyright © 2018 xgc. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "BtcTransactionSignParams.h"


class QtumCreateSignTransactionParams;

@interface QtumTransactionSignParams : BtcTransactionSignParams

-(QtumCreateSignTransactionParams*) toQtumCreateSignTransactionParams;


@property(nonatomic, assign) UInt64 gasLimit;
@property(nonatomic, assign) UInt64 gasPrice;
@property(nonatomic, copy) NSString* tokenValue;
@property(nonatomic, copy) NSString* tokenAddress;
@end
