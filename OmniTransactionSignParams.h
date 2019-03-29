//
//  OmniTransactionSignParams.h
//  coinapi
//
//  Created by xgc on 9/12/18.
//  Copyright © 2018 xgc. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "BtcTransactionSignParams.h"

class OmniCreateSignTransactionParams;

@interface OmniTransactionSignParams : BtcTransactionSignParams

-(OmniCreateSignTransactionParams*) toOmniCreateSignTransactionParams;

@property(nonatomic, assign) UInt32 height;
@property(nonatomic, assign) UInt64 minRelayTxFee;

@end
