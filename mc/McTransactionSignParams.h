//
//  EthTransactionSignParams.h
//  Test
//
//  Created by xgc on 1/5/18.
//  Copyright © 2018 xgc. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "EthTransactionSignParams.h"
#import "CABtSeed.h"


class McCreateSignTransactionParams;

@interface McTransactionSignParams : EthTransactionSignParams

-(McCreateSignTransactionParams*) toMcCreateSignTransactionParams;

@property(nonatomic, copy) NSString* via;
@property(nonatomic, copy) NSString* systemContract;
@property(nonatomic, copy) NSString* shardingFlag;
@property(nonatomic, assign) NSInteger chainId;

@end
