//
//  EOSellRamAction.h
//  coinapi
//
//  Created by xgc on 9/3/18.
//  Copyright © 2018 xgc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EOSAction.h"

class Action;

@interface EOSellRamAction : EOSAction
-(Action*)toSellRam;
-(NSString*) actionName;
@property(nonatomic, copy) NSString* from;
@property(nonatomic, assign) UInt64 bytes;
@end
