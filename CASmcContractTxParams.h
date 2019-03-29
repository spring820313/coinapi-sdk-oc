//
//  CABtcVout.h
//  Test
//
//  Created by xgc on 12/26/17.
//  Copyright © 2017 xgc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CASmcCommonTxParams.h"
#import "CABtSeed.h"


class SmcContractTxParams;

@interface CASmcContractTxParams : CASmcCommonTxParams


-(SmcContractTxParams*) toSmcContractTxParams;

@property(nonatomic, copy) NSMutableData* contract;

@end
