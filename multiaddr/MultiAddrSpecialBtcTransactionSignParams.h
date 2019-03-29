//
//  MultiAddrSpecialBtcTransactionSignParams.h
//  coinapi
//
//  Created by xgc on 12/26/18.
//  Copyright © 2018 xgc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MultiAddrBtcTransactionSignParams.h"

class SpecialMultiBtcCreateSignTransactionParams;

@interface MultiAddrSpecialBtcTransactionSignParams : MultiAddrBtcTransactionSignParams
-(SpecialMultiBtcCreateSignTransactionParams*) toSpecialMultiBtcCreateSignTransactionParams;
@property(nonatomic, copy) NSString* changePrivate;
@property(nonatomic, retain) NSMutableArray* changeVoutFormList;
@end
