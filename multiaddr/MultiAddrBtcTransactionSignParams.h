//
//  MultiAddrBtcTransactionSignParams.h
//  coinapi
//
//  Created by xgc on 9/17/18.
//  Copyright © 2018 xgc. All rights reserved.
//

#import <Foundation/Foundation.h>

class MultiBtcCreateSignTransactionParams;

@interface MultiAddrBtcTransactionSignParams : NSObject
-(MultiBtcCreateSignTransactionParams*) toMultiBtcCreateSignTransactionParams;
@property(nonatomic, copy) NSString* changeAddress;
@property(nonatomic, assign) UInt64 feePerKb;
@property(nonatomic, retain) NSMutableArray* multiBtcvoutFormList;
@property(nonatomic, retain) NSMutableArray* multiOutputList;
@property(nonatomic, assign) BOOL recipientsPayFees;
@property(nonatomic, copy) NSMutableData* data;
@property(nonatomic, assign) NSInteger txType;
@end
