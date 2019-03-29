//
//  EOSTransferAction.h
//  coinapi
//
//  Created by xgc on 8/30/18.
//  Copyright © 2018 xgc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EOSOCAsset.h"
#import "EOSAction.h"

class Action;

@interface EOSTransferAction : EOSAction
-(Action*)toTransfer;
-(NSString*) actionName;
@property(nonatomic, copy) NSString* contract;
@property(nonatomic, copy) NSString* from;
@property(nonatomic, copy) NSString* to;
@property(nonatomic, retain) EOSOCAsset* amount;
@property(nonatomic, retain) NSMutableData* memo;
@end
