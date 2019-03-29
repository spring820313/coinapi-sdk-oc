//
//  CATransferOperation.h
//  coinapi
//
//  Created by xgc on 8/29/18.
//  Copyright © 2018 xgc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CABaseOperation.h"
#import "CAAssetAmount.h"
#import "CAMemoData.h"

class TransferOperation;

@interface CATransferOperation : CABaseOperation
-(TransferOperation*)toTransferOperationByAddressPrefix: (NSString*)address_prefix;
@property(nonatomic, copy) NSString* from;
@property(nonatomic, copy) NSString* to;
@property(nonatomic, retain) CAAssetAmount* amount;
@property(nonatomic, retain) CAAssetAmount* fee;
@property(nonatomic, retain) CAMemoData* memoData;
@end
